# Create the performance profile 

1. Use command ```oc get mcp``` to check the status of mcp of your node.  
Example output  

	NAME   CONFIG          UPDATED   UPDATING   DEGRADED   MACHINECOUNT  READYMACHINECOUNT UPDATEDMACHINECOUNT DEGRADEDMACHINECOUNT   AGE 
	master rendered-master… True      False      False      1              1                   1                     0                7d16h 
	worker rendered-worker… True      False      False      0              0                   0                     0                7d16h 


2. Create the performanceprofile yaml, for example, ```oc create -f performanceprofile-realtime.yaml ```
(The **cpu** and **hugepages** should be set according to your own value. The reserved and isolated CPU pools must not overlap and together must span all available cores in the worker node.) 

```yaml
apiVersion: performance.openshift.io/v2
kind: PerformanceProfile
metadata:
  name: realtime-performanceprofile 
spec:
  additionalKernelArgs:
  - crashkernel=512M
  - nosoftlockup
  - tsc=nowatchdog
  - skew_tick=1
  - vfio_pci.enable_sriov=1
  - vfio_pci.disable_idle_d3=1
  cpu:
    balanceIsolated: false 
    isolated: "24-31,88-95,33-62,97-126"
    reserved: "0-23,64-87,32,63,96,127" 
  numa: 
    topologyPolicy: single-numa-node
  hugepages:
    defaultHugepagesSize: "1G"
    pages:
    - size: "1G" 
      count: 50 
      node: 0 
    - size: "1G" 
      count: 90 
      node: 1 
  realTimeKernel:
    enabled: true
  workloadHints:
    highPowerConsumption: true
    perPodPowerManagement: false
    realTime: true
  globallyDisableIrqLoadBalancing: true
  nodeSelector:
    node-role.kubernetes.io/master: ""
  machineConfigPoolSelector:
    pools.operator.machineconfiguration.openshift.io/master: ""
```

The status of the master mcp will become **UPDATING**  
Example output  

	NAME   CONFIG          UPDATED   UPDATING   DEGRADED   MACHINECOUNT  READYMACHINECOUNT UPDATEDMACHINECOUNT DEGRADEDMACHINECOUNT   AGE 
	master rendered-master… False     True       False      1              1                   1                     0                7d16h 
	worker rendered-worker… True      False      False      0              0                   0                     0                7d16h 

The system will reboot. When the system is up, check the status of mcp using ```oc get mcp```, wait until the the master becomes **UPDATED**. Then cpuManagerPolicy will be set to **static** and topologyManagerPolicy will be set to **single-numa-node**




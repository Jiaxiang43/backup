/*******************************************************************************
 *
 * <COPYRIGHT_TAG>
 *
 *******************************************************************************/

/**
 * @brief Performance report for ref_icxsp_mu0_10mhz_4x4_hton
 * @file ref_icxsp_mu0_10mhz_4x4_hton.c
 * @author Intel Corporation
 **/


/**
 @page ref_icxsp_mu0_10mhz_4x4_hton 3rd Generation Intel&reg; Xeon&reg; Scalable Processor Mu0 10Mhz 4X4 Hton

 <DIV style = "text-align:justify; ">

 <TABLE cellspacing = "0" cellpadding = "2" border = "1" class="mrcTableBorderClass">
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Test File Name:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[icxsp_mu0_10mhz_4x4_hton]</B><BR/>
   - icxsp_mu0_10mhz_4x4_hton.cfg<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Platform Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[icxsp_mu0_10mhz_4x4_hton]</B><BR/>
   - <B>COMPILED WITH</B>: clang 16.0.0 (icx 2023.0.0.20221201)<BR/>
   - <B>COMPILE DATE</B>: May  8 2023<BR/>
   - <B>COMPILE TIME</B>: 10:47:31<BR/>
   - <B>Architecture</B>:                    x86_64<BR/>
   - <B>CPU op-mode(s)</B>:                  32-bit, 64-bit<BR/>
   - <B>Address sizes</B>:                   52 bits physical, 57 bits virtual<BR/>
   - <B>Byte Order</B>:                      Little Endian<BR/>
   - <B>CPU(s)</B>:                          64<BR/>
   - <B>On-line CPU(s) list</B>:             0-63<BR/>
   - <B>Vendor ID</B>:                       GenuineIntel<BR/>
   - <B>Model name</B>:                      Intel(R) Xeon(R) Gold 6338N CPU @ 2.20GHz<BR/>
   - <B>CPU family</B>:                      6<BR/>
   - <B>Model</B>:                           106<BR/>
   - <B>Thread(s) per core</B>:              2<BR/>
   - <B>Core(s) per socket</B>:              32<BR/>
   - <B>Socket(s)</B>:                       1<BR/>
   - <B>Stepping</B>:                        6<BR/>
   - <B>Frequency boost</B>:                 enabled<BR/>
   - <B>CPU max MHz</B>:                     1501.0000<BR/>
   - <B>CPU min MHz</B>:                     800.0000<BR/>
   - <B>BogoMIPS</B>:                        3000.00<BR/>
   - <B>Flags</B>:                           fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid dca sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb cat_l3 invpcid_single ssbd mba ibrs ibpb stibp ibrs_enhanced tpr_shadow vnmi flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid cqm rdt_a avx512f avx512dq rdseed adx smap avx512ifma clflushopt clwb intel_pt avx512cd sha_ni avx512bw avx512vl xsaveopt xsavec xgetbv1 xsaves cqm_llc cqm_occup_llc cqm_mbm_total cqm_mbm_local split_lock_detect wbnoinvd dtherm ida arat pln pts avx512vbmi umip pku ospke avx512_vbmi2 gfni vaes vpclmulqdq avx512_vnni avx512_bitalg tme avx512_vpopcntdq la57 rdpid fsrm md_clear p<BR/>
config flush_l1d arch_capabilities<BR/>
   - <B>Virtualization</B>:                  VT-x<BR/>
   - <B>L1d cache</B>:                       1.5 MiB (32 instances)<BR/>
   - <B>L1i cache</B>:                       1 MiB (32 instances)<BR/>
   - <B>L2 cache</B>:                        40 MiB (32 instances)<BR/>
   - <B>L3 cache</B>:                        48 MiB (1 instance)<BR/>
   - <B>NUMA node(s)</B>:                    1<BR/>
   - <B>NUMA node0 CPU(s)</B>:               0-63<BR/>
   - <B>Vulnerability Itlb multihit</B>:     Not affected<BR/>
   - <B>Vulnerability L1tf</B>:              Not affected<BR/>
   - <B>Vulnerability Mds</B>:               Not affected<BR/>
   - <B>Vulnerability Meltdown</B>:          Not affected<BR/>
   - <B>Vulnerability Mmio stale data</B>:   Mitigation; Clear CPU buffers; SMT vulnerable<BR/>
   - <B>Vulnerability Retbleed</B>:          Not affected<BR/>
   - <B>Vulnerability Spec store bypass</B>: Mitigation; Speculative Store Bypass disabled via prctl and seccomp<BR/>
   - <B>Vulnerability Spectre v1</B>:        Mitigation; usercopy/swapgs barriers and __user pointer sanitization<BR/>
   - <B>Vulnerability Spectre v2</B>:        Mitigation; Enhanced IBRS, IBPB conditional, RSB filling, PBRSB-eIBRS SW sequence<BR/>
   - <B>Vulnerability Srbds</B>:             Not affected<BR/>
   - <B>Vulnerability Tsx async abort</B>:   Not affected<BR/>
   - <B>TSC Frequency</B>: 1496 MHz<BR/>
   - <B>FEC Offload</B>: ACC100<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">OS Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[icxsp_mu0_10mhz_4x4_hton]</B><BR/>
   - <B>Command Line Params</B>:BOOT_IMAGE=/vmlinuz-5.15.0-1030-realtime root=/dev/mapper/ubuntu--vg-ubuntu--lv ro intel_iommu=on iommu=pt iommu.passthrough=1 vfio_pci.enable_sriov=1 vfio_pci.disable_idle_d3=1 usbcore.autosuspend=-1 selinux=0 enforcing=0 nmi_watchdog=0 crashkernel=auto softlockup_panic=0 audit=0 mce=off hugepagesz=1G hugepages=40 hugepagesz=2M hugepages=0 default_hugepagesz=1G kthread_cpus=0,32 irqaffinity=0,32 nohz=on skew_tick=1 isolcpus=managed_irq,domain,1-28,33-60 nohz_full=1-28,33-60 rcu_nocbs=1-28,33-60 rcu_nocb_poll intel_pstate=disable nosoftlockup tsc=nowatchdog<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">BIOS Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[icxsp_mu0_10mhz_4x4_hton]</B><BR/>
   - <B>	Vendor</B>: Intel Corporation<BR/>
   - <B>	Version</B>: SE5C620.86B.01.01.0005.2202160810<BR/>
   - <B>	Release Date</B>: 02/16/2022<BR/>
   - <B>	Address</B>: 0xF0000<BR/>
   - <B>	Runtime Size</B>: 64 kB<BR/>
   - <B>	ROM Size</B>: 16 MB<BR/>
   - <B>	Characteristics</B>:<BR/>
		PCI is supported<BR/>
		PNP is supported<BR/>
		BIOS is upgradeable<BR/>
		BIOS shadowing is allowed<BR/>
		Boot from CD is supported<BR/>
		Selectable boot is supported<BR/>
		EDD is supported<BR/>
		5.25'/1.2 MB floppy services are supported (int 13h)<BR/>
		3.5'/720 kB floppy services are supported (int 13h)<BR/>
		3.5'/2.88 MB floppy services are supported (int 13h)<BR/>
		Print screen service is supported (int 5h)<BR/>
		8042 keyboard services are supported (int 9h)<BR/>
		Serial services are supported (int 14h)<BR/>
		Printer services are supported (int 17h)<BR/>
		CGA/mono video services are supported (int 10h)<BR/>
		ACPI is supported<BR/>
		USB legacy is supported<BR/>
		LS-120 boot is supported<BR/>
		ATAPI Zip drive boot is supported<BR/>
		Function key-initiated network boot is supported<BR/>
		Targeted content distribution is supported<BR/>
		UEFI is supported<BR/>
   - <B>microcode	</B>: 0xd000389<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Memory Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[icxsp_mu0_10mhz_4x4_hton]</B><BR/>
 <SPAN style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Total DIMMS installed: 8</SPAN>
 <SPAN style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Total Memory Size: 128 GB (131072 MB)</SPAN>
 <BR/><BR/>
 <DIV style="padding-top:20px;padding-bottom:20px;padding-left:20px;padding-right:30px;">
 <TABLE cellspacing = "0" cellpadding = "2" border = "1" class="mrcTableBorderClass">
 <TR><TD class="mrcMemoryHead">DIMM Location</TD><TD class="mrcMemoryHead">Type</TD><TD class="mrcMemoryHead">Speed</TD><TD class="mrcMemoryHead">Size</TD></TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 0<BR/>
     <B>Locator:</B>  CPU0_DIMM_A1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 0<BR/>
     <B>Locator:</B>  CPU0_DIMM_B1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 1<BR/>
     <B>Locator:</B>  CPU0_DIMM_C1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 1<BR/>
     <B>Locator:</B>  CPU0_DIMM_D1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 2<BR/>
     <B>Locator:</B>  CPU0_DIMM_E1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 2<BR/>
     <B>Locator:</B>  CPU0_DIMM_F1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 3<BR/>
     <B>Locator:</B>  CPU0_DIMM_G1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 3<BR/>
     <B>Locator:</B>  CPU0_DIMM_H1<BR/>
     <B>Manufacturer:</B> Micron<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR4<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 2666 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 2<BR/>
 </TD>
 </TR>
 </TABLE>
 </DIV>
 </TD>
 </TR>
 \htmlonly

 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Turbostat Output:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[icxsp_mu0_10mhz_4x4_hton]</B><BR/><BR/>
<DIV class="turbostat">
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;Core &nbsp;&nbsp;CPU Avg_MHz &nbsp;&nbsp;Busy% Bzy_MHz TSC_MHz &nbsp;&nbsp;IPC &nbsp;&nbsp;IRQ &nbsp;&nbsp;SMI &nbsp;&nbsp;POLL &nbsp;&nbsp;C1 &nbsp;&nbsp;C1E &nbsp;&nbsp;C6 &nbsp;&nbsp;POLL% &nbsp;&nbsp;C1% &nbsp;&nbsp;C1E% &nbsp;&nbsp;C6% CPU%c1 CPU%c6 CoreTmp PkgTmp PkgWatt RAMWatt &nbsp;&nbsp;PKG_% &nbsp;&nbsp;RAM_%</B><BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- &nbsp;&nbsp;&nbsp;&nbsp;- </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;14 &nbsp;&nbsp;&nbsp;0.56 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1497 &nbsp;1.00 19847 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;269 21012 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 99.53 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.44 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;26 &nbsp;&nbsp;&nbsp;&nbsp;27 &nbsp;&nbsp;89.04 &nbsp;&nbsp;&nbsp;7.85 &nbsp;&nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;0.00<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;0 </B>
&nbsp;&nbsp;&nbsp;&nbsp;126 &nbsp;&nbsp;&nbsp;5.07 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.07 &nbsp;2301 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 3236 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 95.42 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;94.93 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24 &nbsp;&nbsp;&nbsp;&nbsp;27 &nbsp;&nbsp;88.70 &nbsp;&nbsp;&nbsp;7.82 &nbsp;&nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;0.00<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;32 </B>
&nbsp;&nbsp;&nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;5.31 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.20 &nbsp;1369 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;59 2201 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.22 95.03 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;94.69<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;&nbsp;1 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.11 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;33 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2501 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.36 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;2 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2501 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.11 &nbsp;&nbsp;133 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;4 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;34 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2501 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.36 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;3 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;35 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.38 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &nbsp;&nbsp;&nbsp;&nbsp;4 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.18 &nbsp;&nbsp;129 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &nbsp;&nbsp;&nbsp;36 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.42 &nbsp;&nbsp;129 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &nbsp;&nbsp;&nbsp;&nbsp;5 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;22<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &nbsp;&nbsp;&nbsp;37 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.41 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 &nbsp;&nbsp;&nbsp;&nbsp;6 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 &nbsp;&nbsp;&nbsp;38 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.41 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;&nbsp;7 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.22 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;21<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;39 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.43 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;&nbsp;8 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;40 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.42 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;&nbsp;&nbsp;9 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;&nbsp;41 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.42 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;10 &nbsp;&nbsp;&nbsp;10 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.20 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;22<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;10 &nbsp;&nbsp;&nbsp;42 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.43 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;11 &nbsp;&nbsp;&nbsp;11 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.23 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;21<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;11 &nbsp;&nbsp;&nbsp;43 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.44 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;12 &nbsp;&nbsp;&nbsp;12 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;12 &nbsp;&nbsp;&nbsp;44 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2501 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.41 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;13 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.22 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;45 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.43 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;14 &nbsp;&nbsp;&nbsp;14 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2501 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.23 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;21<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;14 &nbsp;&nbsp;&nbsp;46 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.45 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;15 &nbsp;&nbsp;&nbsp;15 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.18 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;21<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;15 &nbsp;&nbsp;&nbsp;47 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.36 &nbsp;&nbsp;129 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;16 &nbsp;&nbsp;&nbsp;16 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.23 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;16 &nbsp;&nbsp;&nbsp;48 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.45 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;17 &nbsp;&nbsp;&nbsp;17 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.22 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;26<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;17 &nbsp;&nbsp;&nbsp;49 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.44 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;18 &nbsp;&nbsp;&nbsp;18 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;18 &nbsp;&nbsp;&nbsp;50 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.43 &nbsp;&nbsp;129 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;19 &nbsp;&nbsp;&nbsp;19 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.23 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;19 &nbsp;&nbsp;&nbsp;51 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.45 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;20 &nbsp;&nbsp;&nbsp;20 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.23 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;20 &nbsp;&nbsp;&nbsp;52 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.44 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;21 &nbsp;&nbsp;&nbsp;21 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.18 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;21 &nbsp;&nbsp;&nbsp;53 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.36 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;22 &nbsp;&nbsp;&nbsp;22 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.20 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;26<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;22 &nbsp;&nbsp;&nbsp;54 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.40 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;23 &nbsp;&nbsp;&nbsp;23 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.23 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;22<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;23 &nbsp;&nbsp;&nbsp;55 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.42 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;24 &nbsp;&nbsp;&nbsp;24 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.20 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;24 &nbsp;&nbsp;&nbsp;56 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.43 &nbsp;&nbsp;129 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;25 &nbsp;&nbsp;&nbsp;25 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.23 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;22<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;25 &nbsp;&nbsp;&nbsp;57 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.45 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;26 &nbsp;&nbsp;&nbsp;26 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.22 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;26<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;26 &nbsp;&nbsp;&nbsp;58 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2501 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.44 &nbsp;&nbsp;131 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;27 &nbsp;&nbsp;&nbsp;27 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.21 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;27 &nbsp;&nbsp;&nbsp;59 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.42 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;28 &nbsp;&nbsp;&nbsp;28 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.22 &nbsp;&nbsp;132 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;28 &nbsp;&nbsp;&nbsp;60 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;2501 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.42 &nbsp;&nbsp;130 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;29 &nbsp;&nbsp;&nbsp;29 </B>
&nbsp;&nbsp;&nbsp;&nbsp;101 &nbsp;&nbsp;&nbsp;4.05 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;0.88 &nbsp;1542 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 2905 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 96.40 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;95.95 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;29 &nbsp;&nbsp;&nbsp;61 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;96 &nbsp;&nbsp;&nbsp;3.86 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.01 &nbsp;1258 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 2230 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 96.47 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;96.14<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;30 &nbsp;&nbsp;&nbsp;30 </B>
&nbsp;&nbsp;&nbsp;&nbsp;103 &nbsp;&nbsp;&nbsp;4.14 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;0.86 &nbsp;1565 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;44 2608 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.13 96.27 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;95.86 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;30 &nbsp;&nbsp;&nbsp;62 </B>
&nbsp;&nbsp;&nbsp;&nbsp;108 &nbsp;&nbsp;&nbsp;4.34 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;1.02 &nbsp;1393 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;78 2269 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.13 96.01 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;95.66<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;31 &nbsp;&nbsp;&nbsp;31 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;88 &nbsp;&nbsp;&nbsp;3.52 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;0.82 &nbsp;1423 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;37 2669 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 96.90 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;96.48 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;31 &nbsp;&nbsp;&nbsp;63 </B>
&nbsp;&nbsp;&nbsp;&nbsp;127 &nbsp;&nbsp;&nbsp;5.11 &nbsp;&nbsp;&nbsp;2500 &nbsp;&nbsp;&nbsp;1496 &nbsp;0.99 &nbsp;1676 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;39 2750 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.18 95.32 &nbsp;&nbsp;0.00 &nbsp;0.00 &nbsp;94.89<BR/>
<BR/>

</DIV>
 </TD>
 </TR>
 \endhtmlonly

 </TABLE>


<BR/><BR/>

 \htmlonly

   <LABEL for = "mrcPipelineDropDownCells" class="mrcForm"><B>Choose Number of Cells</B></LABEL>
   <SELECT id="mrcPipelineDropDownCells" onchange="myPipelineFunction()" class="mrcForm">
       <option value="15" >16 Cell Test(s)</option>
       <option value="17" selected>18 Cell Test(s)</option>
   </SELECT>

   <BR/><BR/>

 <H2 id="mrcPipelineHeader">18 Cell Test(s)</H2>

 <H3>All function break-down numbers in table are in usecs per cell (logical core)</H3>

 <BUTTON id="mrcPipelineButton" class="buttonClass" onclick="myPipeLineButton()">Export table to CSV file</BUTTON><BR/><BR/><BR/>

<B style="color:red;">All numbers in table below are for L1 functionality only. L2 and above will cost additional cycles based on number of connected users per cell and cell throughput.</B><BR/>
<B style="color:red;">These numbers do not include overhead of OS / DPDK polling / FEC polling / L1 - L2 interface polling / Virtualization overheads.</B><BR/>
<B style="color:red;">These tests have clean UL IQ samples with very high SNR. The LDPC iterations are configured with fields "Num FEC DEC iteration" and "FEC DEC early termination enabled" in each test</B><BR/>
<B style="color:red;">In all of the performance benchmarking tests we have early termination enabled and hence only 1-2 decoder instances are exercised.</B><BR/>
<B style="color:red;">For tests with C6 enabled in BIOS, the OS kernel has been optimized such that active cores will at best go to C1 state and return back to C0. Only inactive cores are allowed to fall back to C6 state.</B><BR/>
<BR/><BR/>
<B style="color:blue; font-size:18px;">In the table below, to navigate left and right in the data region:<UL><LI>Move the mouse cursor over the data area</LI><LI>Hold the shift key on keyboard</LI><LI>Use the scroll wheel on the mouse to move the table left and right</LI></UL></B><BR/>
 <DIV class="tablediv" style="display:none;" id="mrcPipelineDiv15">
 <TABLE cellspacing = "0" cellpadding = "2" border = "0" class="mrcPipelineTableBorderClass" style="display:none;" id="mrcPipelineTable15">
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_16010</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 0<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 1<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 2<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 3<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 4<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 5<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 6<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 7<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 8<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 9<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 10<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 11<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 12<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 13<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 14<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 15<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_16010</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc1">OPTIONS:<BR/>
  PDSCH split<BR/>PDSCH Symbol Proc<BR/>PDSCH Beam Weight split<BR/>
  PUSCH CE split<BR/>PUSCH MMSE split<BR/>PUSCH LLR split<BR/>PUSCH Beam Weight split<BR/>PUSCH CE Freq Interpolation<BR/>PUSCH CE Time Interpolation (Per Cell)<BR/><BR/><BR/>
  PUCCH split<BR/>SRS split<BR/>PDSCH Memset Opt<BR/>BBU Sleep Enable<BR/>
  FEC ENC split<BR/>FEC DEC split<BR/>Num FEC DEC iteration<BR/>FEC DEC early termination enabled<BR/>
  eBBUPool Queue<BR/>eBBUPool Context<BR/>eBBUPool Max Fetch<BR/>
  </TD>
<TD class="mrc1c" colspan="1"><BR/>
1<BR/>0<BR/>1<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>2<BR/>4, 4, 4, 4, 4, 4, <BR/>4, 4, 4, 4, 4, 4, <BR/>4, 4, 4, 4<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>1<BR/>1<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 20206</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">ACC100</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">16</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">8.0 / 4.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">8.0 / 4.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>000000F0<BR/>000000F0</TD>  </TR>
  <TR id="0"><TH class="mrc9" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Memory Allocation Statistics</TH>  <TH class="mrc9c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Memory Allocation Statistics</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc9">Test Number</TD><TD class="mrc9c" colspan="1">FD_16010</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Num Heap Memory Allocated</TD><TD class="mrc6c" colspan="1">744</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Num DPDK Memory Allocated</TD><TD class="mrc6c" colspan="1">88</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Num ORAN Memory Allocated</TD><TD class="mrc6c" colspan="1">1</TD>  </TR>
  <TR id="0"><TD class="mrc9" style="font-size:15px;">Num Total Memory Allocated</TD><TD class="mrc9m" colspan="1">833</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Heap Memory Size (in Bytes)</TD><TD class="mrc6c" colspan="1">2,131,035,848</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">DPDK Memory Size (in Bytes)</TD><TD class="mrc6c" colspan="1">189,489,152</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">ORAN Memory Size (in Bytes)</TD><TD class="mrc6c" colspan="1">48,994,856</TD>  </TR>
  <TR id="0"><TD class="mrc9" style="font-size:15px;">Total Memory Size (in Bytes)</TD><TD class="mrc9m" colspan="1">2,369,519,856</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_16010</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">58%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">58% on 8 C<BR/> <B style="color:blue;">(464%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="1">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_16010_MU0</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.00<BR/>(     0.00 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.00<BR/>(     0.00 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.00<BR/>(     0.00 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_16010_MU0</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       28%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       30%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">       32%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       62%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       64%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">       65%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency</TD><TD class="mrc6c">        5%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency</TD><TD class="mrc6c">        7%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency</TD><TD class="mrc6cl">       10%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency</TD><TD class="mrc6c">        4%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency</TD><TD class="mrc6c">        5%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency</TD><TD class="mrc6cl">        7%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="1">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_16010_MU0</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">    61.52</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">    10.86</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    14.03</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">    59.83</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">    71.02</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    42.76</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">    12.16</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">   272.18</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_16010_MU0</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    14.73</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    28.03</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.50</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">     3.98</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     2.37</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.02</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    22.42</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">    33.09</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.31</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.08</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.14</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">     1.96</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">    19.85</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">     0.33</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">    26.76</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">     3.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.62</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     2.65</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">     8.76</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.79</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    71.02</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.76</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="4" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency Per Cell (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency Per Cell (% of TTI)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl" colspan="1">FD_16010</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       24%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 0</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       25%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 1</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       25%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 2</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 3</TD><TD class="mrc6c" colspan="1">       25%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 3</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 3</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 4</TD><TD class="mrc6c" colspan="1">       25%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 4</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 4</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 5</TD><TD class="mrc6c" colspan="1">       26%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 5</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 5</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 6</TD><TD class="mrc6c" colspan="1">       26%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 6</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 6</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 7</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 7</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 7</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 8</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 8</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 8</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 9</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 9</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 9</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC10</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC10</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC10</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC11</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC11</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC11</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC12</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC12</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC12</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC13</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC13</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC13</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC14</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC14</TD><TD class="mrc6c" colspan="1">       29%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC14</TD><TD class="mrc6cl" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC15</TD><TD class="mrc6c" colspan="1">       28%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC15</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC15</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       59%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       61%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       61%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">       61%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6cl" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6cl" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6cl" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6cl" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6cl" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6cl" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6cl" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">       61%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC10</TD><TD class="mrc6cl" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">       61%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC11</TD><TD class="mrc6cl" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC12</TD><TD class="mrc6cl" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC13</TD><TD class="mrc6cl" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC14</TD><TD class="mrc6cl" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">       62%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC15</TD><TD class="mrc6cl" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC10</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC11</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC12</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC13</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC14</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC15</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 3</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 4</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 5</TD><TD class="mrc6cl" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 6</TD><TD class="mrc6cl" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 7</TD><TD class="mrc6cl" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 8</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 9</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC10</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC11</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC12</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC13</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC14</TD><TD class="mrc6cl" colspan="1">       10%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC15</TD><TD class="mrc6cl" colspan="1">       10%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 3</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 4</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 5</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 6</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 7</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 8</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 9</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC10</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC11</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC12</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC13</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC14</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC15</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 3</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 4</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 5</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 6</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 7</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 8</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 9</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC10</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC11</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC12</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC13</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC14</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC15</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down per Cell per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down per Cell per TTI (in usecs)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c" colspan="1">FD_16010</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC00_GNB_DL_CFG (100) </TD><TD class="mrc6c" colspan="1">    17.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CFG (101) </TD><TD class="mrc6c" colspan="1">    17.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CFG (102) </TD><TD class="mrc6c" colspan="1">    17.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_CFG (103) </TD><TD class="mrc6c" colspan="1">    16.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_CFG (104) </TD><TD class="mrc6c" colspan="1">    14.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_CFG (105) </TD><TD class="mrc6c" colspan="1">    14.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_CFG (106) </TD><TD class="mrc6c" colspan="1">    14.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_CFG (107) </TD><TD class="mrc6c" colspan="1">    14.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_CFG (108) </TD><TD class="mrc6c" colspan="1">    13.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_CFG (109) </TD><TD class="mrc6c" colspan="1">    13.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_CFG (110) </TD><TD class="mrc6c" colspan="1">    13.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_CFG (111) </TD><TD class="mrc6c" colspan="1">    12.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_CFG (112) </TD><TD class="mrc6c" colspan="1">    13.73</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_CFG (113) </TD><TD class="mrc6c" colspan="1">    13.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_CFG (114) </TD><TD class="mrc6c" colspan="1">    13.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_CFG (115) </TD><TD class="mrc6c" colspan="1">    13.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    33.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_CFG (141) </TD><TD class="mrc6c" colspan="1">    33.68</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_CFG (142) </TD><TD class="mrc6c" colspan="1">    33.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_CFG (143) </TD><TD class="mrc6c" colspan="1">    31.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_CFG (144) </TD><TD class="mrc6c" colspan="1">    30.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_CFG (145) </TD><TD class="mrc6c" colspan="1">    28.68</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_CFG (146) </TD><TD class="mrc6c" colspan="1">    26.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_CFG (147) </TD><TD class="mrc6c" colspan="1">    28.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_CFG (148) </TD><TD class="mrc6c" colspan="1">    26.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_CFG (149) </TD><TD class="mrc6c" colspan="1">    26.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_CFG (150) </TD><TD class="mrc6c" colspan="1">    24.73</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_CFG (151) </TD><TD class="mrc6c" colspan="1">    26.71</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_CFG (152) </TD><TD class="mrc6c" colspan="1">    25.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_CFG (153) </TD><TD class="mrc6c" colspan="1">    24.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_CFG (154) </TD><TD class="mrc6c" colspan="1">    24.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_CFG (155) </TD><TD class="mrc6c" colspan="1">    24.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     4.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_CRC (181) </TD><TD class="mrc6c" colspan="1">     4.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_CRC (182) </TD><TD class="mrc6c" colspan="1">     4.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_TB_CRC (183) </TD><TD class="mrc6c" colspan="1">     4.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_TB_CRC (184) </TD><TD class="mrc6c" colspan="1">     4.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_TB_CRC (185) </TD><TD class="mrc6c" colspan="1">     4.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_TB_CRC (186) </TD><TD class="mrc6c" colspan="1">     4.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_TB_CRC (187) </TD><TD class="mrc6c" colspan="1">     4.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_TB_CRC (188) </TD><TD class="mrc6c" colspan="1">     4.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_TB_CRC (189) </TD><TD class="mrc6c" colspan="1">     4.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_TB_CRC (190) </TD><TD class="mrc6c" colspan="1">     4.71</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_TB_CRC (191) </TD><TD class="mrc6c" colspan="1">     4.64</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_TB_CRC (192) </TD><TD class="mrc6c" colspan="1">     4.62</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_TB_CRC (193) </TD><TD class="mrc6c" colspan="1">     4.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_TB_CRC (194) </TD><TD class="mrc6c" colspan="1">     4.57</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_TB_CRC (195) </TD><TD class="mrc6c" colspan="1">     4.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     4.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_CB_SETUP (221) </TD><TD class="mrc6c" colspan="1">     4.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_CB_SETUP (222) </TD><TD class="mrc6c" colspan="1">     4.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_CB_SETUP (223) </TD><TD class="mrc6c" colspan="1">     4.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_CB_SETUP (224) </TD><TD class="mrc6c" colspan="1">     3.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_CB_SETUP (225) </TD><TD class="mrc6c" colspan="1">     3.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_CB_SETUP (226) </TD><TD class="mrc6c" colspan="1">     4.01</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_CB_SETUP (227) </TD><TD class="mrc6c" colspan="1">     4.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_CB_SETUP (228) </TD><TD class="mrc6c" colspan="1">     3.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_CB_SETUP (229) </TD><TD class="mrc6c" colspan="1">     3.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_CB_SETUP (230) </TD><TD class="mrc6c" colspan="1">     3.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_CB_SETUP (231) </TD><TD class="mrc6c" colspan="1">     3.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_CB_SETUP (232) </TD><TD class="mrc6c" colspan="1">     3.75</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_CB_SETUP (233) </TD><TD class="mrc6c" colspan="1">     3.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_CB_SETUP (234) </TD><TD class="mrc6c" colspan="1">     3.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_CB_SETUP (235) </TD><TD class="mrc6c" colspan="1">     3.79</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_QUEUE (261) </TD><TD class="mrc6c" colspan="1">     2.68</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_QUEUE (262) </TD><TD class="mrc6c" colspan="1">     2.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_TB_QUEUE (263) </TD><TD class="mrc6c" colspan="1">     2.58</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_TB_QUEUE (264) </TD><TD class="mrc6c" colspan="1">     2.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_TB_QUEUE (265) </TD><TD class="mrc6c" colspan="1">     2.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_TB_QUEUE (266) </TD><TD class="mrc6c" colspan="1">     2.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_TB_QUEUE (267) </TD><TD class="mrc6c" colspan="1">     2.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_TB_QUEUE (268) </TD><TD class="mrc6c" colspan="1">     2.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_TB_QUEUE (269) </TD><TD class="mrc6c" colspan="1">     2.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_TB_QUEUE (270) </TD><TD class="mrc6c" colspan="1">     2.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_TB_QUEUE (271) </TD><TD class="mrc6c" colspan="1">     2.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_TB_QUEUE (272) </TD><TD class="mrc6c" colspan="1">     2.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_TB_QUEUE (273) </TD><TD class="mrc6c" colspan="1">     2.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_TB_QUEUE (274) </TD><TD class="mrc6c" colspan="1">     2.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_TB_QUEUE (275) </TD><TD class="mrc6c" colspan="1">     2.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     5.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_SCRAMBLER (301) </TD><TD class="mrc6c" colspan="1">     5.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_SCRAMBLER (302) </TD><TD class="mrc6c" colspan="1">     6.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_SCRAMBLER (303) </TD><TD class="mrc6c" colspan="1">     6.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_SCRAMBLER (304) </TD><TD class="mrc6c" colspan="1">     6.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_SCRAMBLER (305) </TD><TD class="mrc6c" colspan="1">     6.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_SCRAMBLER (306) </TD><TD class="mrc6c" colspan="1">     6.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_SCRAMBLER (307) </TD><TD class="mrc6c" colspan="1">     6.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_SCRAMBLER (308) </TD><TD class="mrc6c" colspan="1">     5.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_SCRAMBLER (309) </TD><TD class="mrc6c" colspan="1">     5.96</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_SCRAMBLER (310) </TD><TD class="mrc6c" colspan="1">     6.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_SCRAMBLER (311) </TD><TD class="mrc6c" colspan="1">     6.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_SCRAMBLER (312) </TD><TD class="mrc6c" colspan="1">     6.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_SCRAMBLER (313) </TD><TD class="mrc6c" colspan="1">     6.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_SCRAMBLER (314) </TD><TD class="mrc6c" colspan="1">     5.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_SCRAMBLER (315) </TD><TD class="mrc6c" colspan="1">     5.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_RS (340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    23.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_RS (341) </TD><TD class="mrc6c" colspan="1">    23.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_RS (342) </TD><TD class="mrc6c" colspan="1">    23.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_RS (343) </TD><TD class="mrc6c" colspan="1">    23.71</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_RS (344) </TD><TD class="mrc6c" colspan="1">    23.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_RS (345) </TD><TD class="mrc6c" colspan="1">    23.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_RS (346) </TD><TD class="mrc6c" colspan="1">    22.69</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_RS (347) </TD><TD class="mrc6c" colspan="1">    22.20</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_RS (348) </TD><TD class="mrc6c" colspan="1">    21.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_RS (349) </TD><TD class="mrc6c" colspan="1">    21.64</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_RS (350) </TD><TD class="mrc6c" colspan="1">    21.41</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_RS (351) </TD><TD class="mrc6c" colspan="1">    21.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_RS (352) </TD><TD class="mrc6c" colspan="1">    21.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_RS (353) </TD><TD class="mrc6c" colspan="1">    21.58</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_RS (354) </TD><TD class="mrc6c" colspan="1">    21.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_RS (355) </TD><TD class="mrc6c" colspan="1">    21.41</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    34.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_SYMBOL_PROC (381) </TD><TD class="mrc6c" colspan="1">    34.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_SYMBOL_PROC (382) </TD><TD class="mrc6c" colspan="1">    34.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_SYMBOL_PROC (383) </TD><TD class="mrc6c" colspan="1">    34.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_SYMBOL_PROC (384) </TD><TD class="mrc6c" colspan="1">    34.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_SYMBOL_PROC (385) </TD><TD class="mrc6c" colspan="1">    34.01</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_SYMBOL_PROC (386) </TD><TD class="mrc6c" colspan="1">    33.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_SYMBOL_PROC (387) </TD><TD class="mrc6c" colspan="1">    33.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_SYMBOL_PROC (388) </TD><TD class="mrc6c" colspan="1">    32.55</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_SYMBOL_PROC (389) </TD><TD class="mrc6c" colspan="1">    32.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_SYMBOL_PROC (390) </TD><TD class="mrc6c" colspan="1">    32.57</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_SYMBOL_PROC (391) </TD><TD class="mrc6c" colspan="1">    32.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_SYMBOL_PROC (392) </TD><TD class="mrc6c" colspan="1">    32.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_SYMBOL_PROC (393) </TD><TD class="mrc6c" colspan="1">    32.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_SYMBOL_PROC (394) </TD><TD class="mrc6c" colspan="1">    31.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_SYMBOL_PROC (395) </TD><TD class="mrc6c" colspan="1">    30.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PDSCH_BEAM_FORMING (421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PDSCH_BEAM_FORMING (422) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_PDSCH_BEAM_FORMING (423) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_PDSCH_BEAM_FORMING (424) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_PDSCH_BEAM_FORMING (425) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_PDSCH_BEAM_FORMING (426) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_PDSCH_BEAM_FORMING (427) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_PDSCH_BEAM_FORMING (428) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_PDSCH_BEAM_FORMING (429) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_PDSCH_BEAM_FORMING (430) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_PDSCH_BEAM_FORMING (431) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_PDSCH_BEAM_FORMING (432) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_PDSCH_BEAM_FORMING (433) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_PDSCH_BEAM_FORMING (434) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_PDSCH_BEAM_FORMING (435) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CSI_PROC (461) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CSI_PROC (462) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_CSI_PROC (463) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_CSI_PROC (464) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_CSI_PROC (465) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_CSI_PROC (466) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_CSI_PROC (467) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_CSI_PROC (468) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_CSI_PROC (469) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_CSI_PROC (470) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_CSI_PROC (471) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_CSI_PROC (472) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_CSI_PROC (473) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_CSI_PROC (474) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_CSI_PROC (475) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PROC (501) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PROC (502) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_DCI_PROC (503) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_DCI_PROC (504) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_DCI_PROC (505) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_DCI_PROC (506) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_DCI_PROC (507) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_DCI_PROC (508) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_DCI_PROC (509) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_DCI_PROC (510) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_DCI_PROC (511) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_DCI_PROC (512) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_DCI_PROC (513) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_DCI_PROC (514) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_DCI_PROC (515) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_UCI_PROC (541) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_UCI_PROC (542) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_UCI_PROC (543) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_UCI_PROC (544) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_UCI_PROC (545) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_UCI_PROC (546) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_UCI_PROC (547) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_UCI_PROC (548) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_UCI_PROC (549) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_UCI_PROC (550) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_UCI_PROC (551) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_UCI_PROC (552) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_UCI_PROC (553) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_UCI_PROC (554) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_UCI_PROC (555) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PRECODER (581) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PRECODER (582) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_DCI_PRECODER (583) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_DCI_PRECODER (584) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_DCI_PRECODER (585) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_DCI_PRECODER (586) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_DCI_PRECODER (587) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_DCI_PRECODER (588) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_DCI_PRECODER (589) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_DCI_PRECODER (590) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_DCI_PRECODER (591) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_DCI_PRECODER (592) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_DCI_PRECODER (593) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_DCI_PRECODER (594) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_DCI_PRECODER (595) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PBCH_PROC (621) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PBCH_PROC (622) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_PBCH_PROC (623) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_PBCH_PROC (624) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_PBCH_PROC (625) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_PBCH_PROC (626) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_PBCH_PROC (627) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_PBCH_PROC (628) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_PBCH_PROC (629) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_PBCH_PROC (630) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_PBCH_PROC (631) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_PBCH_PROC (632) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_PBCH_PROC (633) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_PBCH_PROC (634) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_PBCH_PROC (635) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     1.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_RESET_BUF (661) </TD><TD class="mrc6c" colspan="1">     1.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_RESET_BUF (662) </TD><TD class="mrc6c" colspan="1">     1.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_RESET_BUF (663) </TD><TD class="mrc6c" colspan="1">     1.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_RESET_BUF (664) </TD><TD class="mrc6c" colspan="1">     1.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_RESET_BUF (665) </TD><TD class="mrc6c" colspan="1">     1.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_RESET_BUF (666) </TD><TD class="mrc6c" colspan="1">     1.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_RESET_BUF (667) </TD><TD class="mrc6c" colspan="1">     1.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_RESET_BUF (668) </TD><TD class="mrc6c" colspan="1">     1.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_RESET_BUF (669) </TD><TD class="mrc6c" colspan="1">     1.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_RESET_BUF (670) </TD><TD class="mrc6c" colspan="1">     1.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_RESET_BUF (671) </TD><TD class="mrc6c" colspan="1">     1.22</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_RESET_BUF (672) </TD><TD class="mrc6c" colspan="1">     1.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_RESET_BUF (673) </TD><TD class="mrc6c" colspan="1">     1.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_RESET_BUF (674) </TD><TD class="mrc6c" colspan="1">     1.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_RESET_BUF (675) </TD><TD class="mrc6c" colspan="1">     1.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_POST (700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_POST (701) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_POST (702) </TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_POST (703) </TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_POST (704) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_POST (705) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_POST (706) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_POST (707) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_POST (708) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_POST (709) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_POST (710) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_POST (711) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_POST (712) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_POST (713) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_POST (714) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_POST (715) </TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DMRS (741) </TD><TD class="mrc6c" colspan="1">     6.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DMRS (742) </TD><TD class="mrc6c" colspan="1">     6.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_DMRS (743) </TD><TD class="mrc6c" colspan="1">     6.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_DMRS (744) </TD><TD class="mrc6c" colspan="1">     6.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_DMRS (745) </TD><TD class="mrc6c" colspan="1">     6.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_DMRS (746) </TD><TD class="mrc6c" colspan="1">     6.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_DMRS (747) </TD><TD class="mrc6c" colspan="1">     5.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_DMRS (748) </TD><TD class="mrc6c" colspan="1">     5.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_DMRS (749) </TD><TD class="mrc6c" colspan="1">     6.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_DMRS (750) </TD><TD class="mrc6c" colspan="1">     6.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_DMRS (751) </TD><TD class="mrc6c" colspan="1">     6.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_DMRS (752) </TD><TD class="mrc6c" colspan="1">     6.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_DMRS (753) </TD><TD class="mrc6c" colspan="1">     6.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_DMRS (754) </TD><TD class="mrc6c" colspan="1">     6.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_DMRS (755) </TD><TD class="mrc6c" colspan="1">     6.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB0 (781) </TD><TD class="mrc6c" colspan="1">     2.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB0 (782) </TD><TD class="mrc6c" colspan="1">     1.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_CE_SYMB0 (783) </TD><TD class="mrc6c" colspan="1">     1.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_CE_SYMB0 (784) </TD><TD class="mrc6c" colspan="1">     1.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_CE_SYMB0 (785) </TD><TD class="mrc6c" colspan="1">     1.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_CE_SYMB0 (786) </TD><TD class="mrc6c" colspan="1">     1.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_CE_SYMB0 (787) </TD><TD class="mrc6c" colspan="1">     1.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_CE_SYMB0 (788) </TD><TD class="mrc6c" colspan="1">     1.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_CE_SYMB0 (789) </TD><TD class="mrc6c" colspan="1">     1.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_CE_SYMB0 (790) </TD><TD class="mrc6c" colspan="1">     1.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_CE_SYMB0 (791) </TD><TD class="mrc6c" colspan="1">     1.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_CE_SYMB0 (792) </TD><TD class="mrc6c" colspan="1">     1.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_CE_SYMB0 (793) </TD><TD class="mrc6c" colspan="1">     1.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_CE_SYMB0 (794) </TD><TD class="mrc6c" colspan="1">     1.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_CE_SYMB0 (795) </TD><TD class="mrc6c" colspan="1">     2.20</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    22.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB7 (821) </TD><TD class="mrc6c" colspan="1">    22.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB7 (822) </TD><TD class="mrc6c" colspan="1">    21.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_CE_SYMB7 (823) </TD><TD class="mrc6c" colspan="1">    21.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_CE_SYMB7 (824) </TD><TD class="mrc6c" colspan="1">    21.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_CE_SYMB7 (825) </TD><TD class="mrc6c" colspan="1">    20.71</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_CE_SYMB7 (826) </TD><TD class="mrc6c" colspan="1">    20.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_CE_SYMB7 (827) </TD><TD class="mrc6c" colspan="1">    19.75</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_CE_SYMB7 (828) </TD><TD class="mrc6c" colspan="1">    18.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_CE_SYMB7 (829) </TD><TD class="mrc6c" colspan="1">    18.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_CE_SYMB7 (830) </TD><TD class="mrc6c" colspan="1">    18.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_CE_SYMB7 (831) </TD><TD class="mrc6c" colspan="1">    18.47</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_CE_SYMB7 (832) </TD><TD class="mrc6c" colspan="1">    18.44</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_CE_SYMB7 (833) </TD><TD class="mrc6c" colspan="1">    18.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_CE_SYMB7 (834) </TD><TD class="mrc6c" colspan="1">    18.69</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_CE_SYMB7 (835) </TD><TD class="mrc6c" colspan="1">    18.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_RNN_CALC (861) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_RNN_CALC (862) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_RNN_CALC (863) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_RNN_CALC (864) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_RNN_CALC (865) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_RNN_CALC (866) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_RNN_CALC (867) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_RNN_CALC (868) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_RNN_CALC (869) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_RNN_CALC (870) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_RNN_CALC (871) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_RNN_CALC (872) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_RNN_CALC (873) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_RNN_CALC (874) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_RNN_CALC (875) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB0 (901) </TD><TD class="mrc6c" colspan="1">     0.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB0 (902) </TD><TD class="mrc6c" colspan="1">     0.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_MMSE_SYMB0 (903) </TD><TD class="mrc6c" colspan="1">     0.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_MMSE_SYMB0 (904) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_MMSE_SYMB0 (905) </TD><TD class="mrc6c" colspan="1">     0.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_MMSE_SYMB0 (906) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_MMSE_SYMB0 (907) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_MMSE_SYMB0 (908) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_MMSE_SYMB0 (909) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_MMSE_SYMB0 (910) </TD><TD class="mrc6c" colspan="1">     0.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_MMSE_SYMB0 (911) </TD><TD class="mrc6c" colspan="1">     0.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_MMSE_SYMB0 (912) </TD><TD class="mrc6c" colspan="1">     0.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_MMSE_SYMB0 (913) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_MMSE_SYMB0 (914) </TD><TD class="mrc6c" colspan="1">     0.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_MMSE_SYMB0 (915) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    27.58</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB7 (941) </TD><TD class="mrc6c" colspan="1">    27.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB7 (942) </TD><TD class="mrc6c" colspan="1">    27.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_MMSE_SYMB7 (943) </TD><TD class="mrc6c" colspan="1">    27.47</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_MMSE_SYMB7 (944) </TD><TD class="mrc6c" colspan="1">    27.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_MMSE_SYMB7 (945) </TD><TD class="mrc6c" colspan="1">    27.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_MMSE_SYMB7 (946) </TD><TD class="mrc6c" colspan="1">    27.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_MMSE_SYMB7 (947) </TD><TD class="mrc6c" colspan="1">    26.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_MMSE_SYMB7 (948) </TD><TD class="mrc6c" colspan="1">    26.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_MMSE_SYMB7 (949) </TD><TD class="mrc6c" colspan="1">    26.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_MMSE_SYMB7 (950) </TD><TD class="mrc6c" colspan="1">    26.20</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_MMSE_SYMB7 (951) </TD><TD class="mrc6c" colspan="1">    26.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_MMSE_SYMB7 (952) </TD><TD class="mrc6c" colspan="1">    26.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_MMSE_SYMB7 (953) </TD><TD class="mrc6c" colspan="1">    26.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_MMSE_SYMB7 (954) </TD><TD class="mrc6c" colspan="1">    26.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_MMSE_SYMB7 (955) </TD><TD class="mrc6c" colspan="1">    26.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DESCRAMBLE (981) </TD><TD class="mrc6c" colspan="1">     3.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DESCRAMBLE (982) </TD><TD class="mrc6c" colspan="1">     3.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_DESCRAMBLE (983) </TD><TD class="mrc6c" colspan="1">     3.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_DESCRAMBLE (984) </TD><TD class="mrc6c" colspan="1">     3.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_DESCRAMBLE (985) </TD><TD class="mrc6c" colspan="1">     3.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_DESCRAMBLE (986) </TD><TD class="mrc6c" colspan="1">     3.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_DESCRAMBLE (987) </TD><TD class="mrc6c" colspan="1">     2.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_DESCRAMBLE (988) </TD><TD class="mrc6c" colspan="1">     2.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_DESCRAMBLE (989) </TD><TD class="mrc6c" colspan="1">     2.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_DESCRAMBLE (990) </TD><TD class="mrc6c" colspan="1">     2.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_DESCRAMBLE (991) </TD><TD class="mrc6c" colspan="1">     2.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_DESCRAMBLE (992) </TD><TD class="mrc6c" colspan="1">     2.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_DESCRAMBLE (993) </TD><TD class="mrc6c" colspan="1">     2.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_DESCRAMBLE (994) </TD><TD class="mrc6c" colspan="1">     2.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_DESCRAMBLE (995) </TD><TD class="mrc6c" colspan="1">     2.78</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CB_SETUP (1061) </TD><TD class="mrc6c" colspan="1">     2.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CB_SETUP (1062) </TD><TD class="mrc6c" colspan="1">     2.93</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_CB_SETUP (1063) </TD><TD class="mrc6c" colspan="1">     2.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_CB_SETUP (1064) </TD><TD class="mrc6c" colspan="1">     2.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_CB_SETUP (1065) </TD><TD class="mrc6c" colspan="1">     2.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_CB_SETUP (1066) </TD><TD class="mrc6c" colspan="1">     2.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_CB_SETUP (1067) </TD><TD class="mrc6c" colspan="1">     2.73</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_CB_SETUP (1068) </TD><TD class="mrc6c" colspan="1">     2.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_CB_SETUP (1069) </TD><TD class="mrc6c" colspan="1">     2.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_CB_SETUP (1070) </TD><TD class="mrc6c" colspan="1">     2.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_CB_SETUP (1071) </TD><TD class="mrc6c" colspan="1">     2.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_CB_SETUP (1072) </TD><TD class="mrc6c" colspan="1">     2.47</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_CB_SETUP (1073) </TD><TD class="mrc6c" colspan="1">     2.50</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_CB_SETUP (1074) </TD><TD class="mrc6c" colspan="1">     2.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_CB_SETUP (1075) </TD><TD class="mrc6c" colspan="1">     2.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DECODER (1021) </TD><TD class="mrc6c" colspan="1">     3.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DECODER (1022) </TD><TD class="mrc6c" colspan="1">     3.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_DECODER (1023) </TD><TD class="mrc6c" colspan="1">     3.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_DECODER (1024) </TD><TD class="mrc6c" colspan="1">     3.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_DECODER (1025) </TD><TD class="mrc6c" colspan="1">     3.20</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_DECODER (1026) </TD><TD class="mrc6c" colspan="1">     3.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_DECODER (1027) </TD><TD class="mrc6c" colspan="1">     2.96</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_DECODER (1028) </TD><TD class="mrc6c" colspan="1">     2.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_DECODER (1029) </TD><TD class="mrc6c" colspan="1">     2.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_DECODER (1030) </TD><TD class="mrc6c" colspan="1">     2.22</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_DECODER (1031) </TD><TD class="mrc6c" colspan="1">     2.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_DECODER (1032) </TD><TD class="mrc6c" colspan="1">     2.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_DECODER (1033) </TD><TD class="mrc6c" colspan="1">     2.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_DECODER (1034) </TD><TD class="mrc6c" colspan="1">     2.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_DECODER (1035) </TD><TD class="mrc6c" colspan="1">     2.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_TB (1100) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_TB (1101) </TD><TD class="mrc6c" colspan="1">     9.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_TB (1102) </TD><TD class="mrc6c" colspan="1">     9.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_TB (1103) </TD><TD class="mrc6c" colspan="1">     9.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_TB (1104) </TD><TD class="mrc6c" colspan="1">     9.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_TB (1105) </TD><TD class="mrc6c" colspan="1">     9.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_TB (1106) </TD><TD class="mrc6c" colspan="1">     9.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_TB (1107) </TD><TD class="mrc6c" colspan="1">     8.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_TB (1108) </TD><TD class="mrc6c" colspan="1">     8.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_TB (1109) </TD><TD class="mrc6c" colspan="1">     8.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_TB (1110) </TD><TD class="mrc6c" colspan="1">     8.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_TB (1111) </TD><TD class="mrc6c" colspan="1">     8.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_TB (1112) </TD><TD class="mrc6c" colspan="1">     8.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_TB (1113) </TD><TD class="mrc6c" colspan="1">     8.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_TB (1114) </TD><TD class="mrc6c" colspan="1">     8.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_TB (1115) </TD><TD class="mrc6c" colspan="1">     8.01</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     1.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_UCI_DECODER (1141) </TD><TD class="mrc6c" colspan="1">     1.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_UCI_DECODER (1142) </TD><TD class="mrc6c" colspan="1">     1.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_UCI_DECODER (1143) </TD><TD class="mrc6c" colspan="1">     1.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_UCI_DECODER (1144) </TD><TD class="mrc6c" colspan="1">     1.96</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_UCI_DECODER (1145) </TD><TD class="mrc6c" colspan="1">     1.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_UCI_DECODER (1146) </TD><TD class="mrc6c" colspan="1">     1.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_UCI_DECODER (1147) </TD><TD class="mrc6c" colspan="1">     1.73</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_UCI_DECODER (1148) </TD><TD class="mrc6c" colspan="1">     1.64</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_UCI_DECODER (1149) </TD><TD class="mrc6c" colspan="1">     1.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_UCI_DECODER (1150) </TD><TD class="mrc6c" colspan="1">     1.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_UCI_DECODER (1151) </TD><TD class="mrc6c" colspan="1">     1.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_UCI_DECODER (1152) </TD><TD class="mrc6c" colspan="1">     1.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_UCI_DECODER (1153) </TD><TD class="mrc6c" colspan="1">     1.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_UCI_DECODER (1154) </TD><TD class="mrc6c" colspan="1">     1.62</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_UCI_DECODER (1155) </TD><TD class="mrc6c" colspan="1">     1.58</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    76.04</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUCCH_RX (1181) </TD><TD class="mrc6c" colspan="1">    76.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUCCH_RX (1182) </TD><TD class="mrc6c" colspan="1">    76.04</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUCCH_RX (1183) </TD><TD class="mrc6c" colspan="1">    76.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUCCH_RX (1184) </TD><TD class="mrc6c" colspan="1">    75.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUCCH_RX (1185) </TD><TD class="mrc6c" colspan="1">    74.44</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUCCH_RX (1186) </TD><TD class="mrc6c" colspan="1">    72.73</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUCCH_RX (1187) </TD><TD class="mrc6c" colspan="1">    70.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUCCH_RX (1188) </TD><TD class="mrc6c" colspan="1">    67.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUCCH_RX (1189) </TD><TD class="mrc6c" colspan="1">    67.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUCCH_RX (1190) </TD><TD class="mrc6c" colspan="1">    67.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUCCH_RX (1191) </TD><TD class="mrc6c" colspan="1">    67.44</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUCCH_RX (1192) </TD><TD class="mrc6c" colspan="1">    67.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUCCH_RX (1193) </TD><TD class="mrc6c" colspan="1">    67.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUCCH_RX (1194) </TD><TD class="mrc6c" colspan="1">    67.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUCCH_RX (1195) </TD><TD class="mrc6c" colspan="1">    66.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PRACH_PROCESS (1221) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PRACH_PROCESS (1222) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PRACH_PROCESS (1223) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PRACH_PROCESS (1224) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PRACH_PROCESS (1225) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PRACH_PROCESS (1226) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PRACH_PROCESS (1227) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PRACH_PROCESS (1228) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PRACH_PROCESS (1229) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PRACH_PROCESS (1230) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PRACH_PROCESS (1231) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PRACH_PROCESS (1232) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PRACH_PROCESS (1233) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PRACH_PROCESS (1234) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PRACH_PROCESS (1235) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_RX (1261) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_RX (1262) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_RX (1263) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_RX (1264) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_RX (1265) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_RX (1266) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_RX (1267) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_RX (1268) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_RX (1269) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_RX (1270) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_RX (1271) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_RX (1272) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_RX (1273) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_RX (1274) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_RX (1275) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE (1300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE (1301) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE (1302) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_CE (1303) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_CE (1304) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_CE (1305) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_CE (1306) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_CE (1307) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_CE (1308) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_CE (1309) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_CE (1310) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_CE (1311) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_CE (1312) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_CE (1313) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_CE (1314) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_CE (1315) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_CB_SETUP (1341) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_CB_SETUP (1342) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_FFT_CB_SETUP (1343) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_FFT_CB_SETUP (1344) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_FFT_CB_SETUP (1345) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_FFT_CB_SETUP (1346) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_FFT_CB_SETUP (1347) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_FFT_CB_SETUP (1348) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_FFT_CB_SETUP (1349) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_FFT_CB_SETUP (1350) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_FFT_CB_SETUP (1351) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_FFT_CB_SETUP (1352) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_FFT_CB_SETUP (1353) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_FFT_CB_SETUP (1354) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_FFT_CB_SETUP (1355) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_RUN_FUNC (1381) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_RUN_FUNC (1382) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_FFT_RUN_FUNC (1383) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_FFT_RUN_FUNC (1384) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_FFT_RUN_FUNC (1385) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_FFT_RUN_FUNC (1386) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_FFT_RUN_FUNC (1387) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_FFT_RUN_FUNC (1388) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_FFT_RUN_FUNC (1389) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_FFT_RUN_FUNC (1390) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_FFT_RUN_FUNC (1391) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_FFT_RUN_FUNC (1392) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_FFT_RUN_FUNC (1393) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_FFT_RUN_FUNC (1394) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_FFT_RUN_FUNC (1395) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE_POST (1421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE_POST (1422) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_CE_POST (1423) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_CE_POST (1424) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_CE_POST (1425) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_CE_POST (1426) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_CE_POST (1427) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_CE_POST (1428) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_CE_POST (1429) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_CE_POST (1430) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_CE_POST (1431) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_CE_POST (1432) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_CE_POST (1433) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_CE_POST (1434) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_CE_POST (1435) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_REPORT (1460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_REPORT (1461) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_REPORT (1462) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_REPORT (1463) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_REPORT (1464) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_REPORT (1465) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_REPORT (1466) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_REPORT (1467) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_REPORT (1468) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_REPORT (1469) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_REPORT (1470) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_REPORT (1471) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_REPORT (1472) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_REPORT (1473) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_REPORT (1474) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_REPORT (1475) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_POST (1501) </TD><TD class="mrc6c" colspan="1">     9.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_POST (1502) </TD><TD class="mrc6c" colspan="1">     9.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_POST (1503) </TD><TD class="mrc6c" colspan="1">    12.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_POST (1504) </TD><TD class="mrc6c" colspan="1">    12.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_POST (1505) </TD><TD class="mrc6c" colspan="1">    13.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_POST (1506) </TD><TD class="mrc6c" colspan="1">    13.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_POST (1507) </TD><TD class="mrc6c" colspan="1">    12.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_POST (1508) </TD><TD class="mrc6c" colspan="1">    10.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_POST (1509) </TD><TD class="mrc6c" colspan="1">     9.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_POST (1510) </TD><TD class="mrc6c" colspan="1">     9.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_POST (1511) </TD><TD class="mrc6c" colspan="1">     8.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_POST (1512) </TD><TD class="mrc6c" colspan="1">     9.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_POST (1513) </TD><TD class="mrc6c" colspan="1">    10.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_POST (1514) </TD><TD class="mrc6c" colspan="1">    10.62</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_POST (1515) </TD><TD class="mrc6c" colspan="1">     9.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_TASK (1541) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_TASK (1542) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_BEAM_WEIGHT_TASK (1543) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_BEAM_WEIGHT_TASK (1544) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_BEAM_WEIGHT_TASK (1545) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_BEAM_WEIGHT_TASK (1546) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_BEAM_WEIGHT_TASK (1547) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_BEAM_WEIGHT_TASK (1548) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_BEAM_WEIGHT_TASK (1549) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_BEAM_WEIGHT_TASK (1550) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_BEAM_WEIGHT_TASK (1551) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_BEAM_WEIGHT_TASK (1552) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_BEAM_WEIGHT_TASK (1553) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_BEAM_WEIGHT_TASK (1554) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_BEAM_WEIGHT_TASK (1555) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_TASK (1581) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_TASK (1582) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_BEAM_WEIGHT_TASK (1583) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_BEAM_WEIGHT_TASK (1584) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_BEAM_WEIGHT_TASK (1585) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_BEAM_WEIGHT_TASK (1586) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_BEAM_WEIGHT_TASK (1587) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_BEAM_WEIGHT_TASK (1588) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_BEAM_WEIGHT_TASK (1589) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_BEAM_WEIGHT_TASK (1590) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_BEAM_WEIGHT_TASK (1591) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_BEAM_WEIGHT_TASK (1592) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_BEAM_WEIGHT_TASK (1593) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_BEAM_WEIGHT_TASK (1594) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_BEAM_WEIGHT_TASK (1595) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1621) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1622) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1623) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1624) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1625) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1626) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1627) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1628) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1629) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1630) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1631) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1632) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1633) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1634) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1635) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_ORAN (1661) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_ORAN (1662) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_ORAN (1663) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_ORAN (1664) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_ORAN (1665) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_ORAN (1666) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_ORAN (1667) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_ORAN (1668) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_ORAN (1669) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_ORAN (1670) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_ORAN (1671) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_ORAN (1672) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_ORAN (1673) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_ORAN (1674) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_ORAN (1675) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_IQ_COMPRESS (1701) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_IQ_COMPRESS (1702) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_IQ_COMPRESS (1703) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_IQ_COMPRESS (1704) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_IQ_COMPRESS (1705) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_IQ_COMPRESS (1706) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_IQ_COMPRESS (1707) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_IQ_COMPRESS (1708) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_IQ_COMPRESS (1709) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_IQ_COMPRESS (1710) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_IQ_COMPRESS (1711) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_IQ_COMPRESS (1712) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_IQ_COMPRESS (1713) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_IQ_COMPRESS (1714) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_IQ_COMPRESS (1715) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMPRESS (1741) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMPRESS (1742) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_IQ_DECOMPRESS (1743) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_IQ_DECOMPRESS (1744) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_IQ_DECOMPRESS (1745) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_IQ_DECOMPRESS (1746) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_IQ_DECOMPRESS (1747) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_IQ_DECOMPRESS (1748) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_IQ_DECOMPRESS (1749) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_IQ_DECOMPRESS (1750) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_IQ_DECOMPRESS (1751) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_IQ_DECOMPRESS (1752) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_IQ_DECOMPRESS (1753) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_IQ_DECOMPRESS (1754) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_IQ_DECOMPRESS (1755) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_COMPRESS (1781) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_COMPRESS (1782) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_BEAM_WEIGHT_COMPRESS (1783) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_BEAM_WEIGHT_COMPRESS (1784) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_BEAM_WEIGHT_COMPRESS (1785) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_BEAM_WEIGHT_COMPRESS (1786) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_BEAM_WEIGHT_COMPRESS (1787) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_BEAM_WEIGHT_COMPRESS (1788) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_BEAM_WEIGHT_COMPRESS (1789) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_BEAM_WEIGHT_COMPRESS (1790) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_BEAM_WEIGHT_COMPRESS (1791) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_BEAM_WEIGHT_COMPRESS (1792) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_BEAM_WEIGHT_COMPRESS (1793) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_BEAM_WEIGHT_COMPRESS (1794) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_BEAM_WEIGHT_COMPRESS (1795) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_COMPRESS (1821) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_COMPRESS (1822) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_BEAM_WEIGHT_COMPRESS (1823) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_BEAM_WEIGHT_COMPRESS (1824) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_BEAM_WEIGHT_COMPRESS (1825) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_BEAM_WEIGHT_COMPRESS (1826) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_BEAM_WEIGHT_COMPRESS (1827) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_BEAM_WEIGHT_COMPRESS (1828) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_BEAM_WEIGHT_COMPRESS (1829) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_BEAM_WEIGHT_COMPRESS (1830) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_BEAM_WEIGHT_COMPRESS (1831) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_BEAM_WEIGHT_COMPRESS (1832) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_BEAM_WEIGHT_COMPRESS (1833) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_BEAM_WEIGHT_COMPRESS (1834) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_BEAM_WEIGHT_COMPRESS (1835) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_SRS_IQ_DECOMPRESS (1861) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_SRS_IQ_DECOMPRESS (1862) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_SRS_IQ_DECOMPRESS (1863) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_SRS_IQ_DECOMPRESS (1864) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_SRS_IQ_DECOMPRESS (1865) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_SRS_IQ_DECOMPRESS (1866) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_SRS_IQ_DECOMPRESS (1867) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_SRS_IQ_DECOMPRESS (1868) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_SRS_IQ_DECOMPRESS (1869) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_SRS_IQ_DECOMPRESS (1870) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_SRS_IQ_DECOMPRESS (1871) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_SRS_IQ_DECOMPRESS (1872) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_SRS_IQ_DECOMPRESS (1873) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_SRS_IQ_DECOMPRESS (1874) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_SRS_IQ_DECOMPRESS (1875) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_CTRL_COMPRESS (1901) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_CTRL_COMPRESS (1902) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_OFDM_CTRL_COMPRESS (1903) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_OFDM_CTRL_COMPRESS (1904) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_OFDM_CTRL_COMPRESS (1905) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_OFDM_CTRL_COMPRESS (1906) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_OFDM_CTRL_COMPRESS (1907) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_OFDM_CTRL_COMPRESS (1908) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_OFDM_CTRL_COMPRESS (1909) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_OFDM_CTRL_COMPRESS (1910) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_OFDM_CTRL_COMPRESS (1911) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_OFDM_CTRL_COMPRESS (1912) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_OFDM_CTRL_COMPRESS (1913) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_OFDM_CTRL_COMPRESS (1914) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_OFDM_CTRL_COMPRESS (1915) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_RS_COMPRESS (1941) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_RS_COMPRESS (1942) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_OFDM_RS_COMPRESS (1943) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_OFDM_RS_COMPRESS (1944) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_OFDM_RS_COMPRESS (1945) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_OFDM_RS_COMPRESS (1946) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_OFDM_RS_COMPRESS (1947) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_OFDM_RS_COMPRESS (1948) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_OFDM_RS_COMPRESS (1949) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_OFDM_RS_COMPRESS (1950) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_OFDM_RS_COMPRESS (1951) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_OFDM_RS_COMPRESS (1952) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_OFDM_RS_COMPRESS (1953) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_OFDM_RS_COMPRESS (1954) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_OFDM_RS_COMPRESS (1955) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_DATA_COMPRESS (1981) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_DATA_COMPRESS (1982) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_OFDM_DATA_COMPRESS (1983) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_OFDM_DATA_COMPRESS (1984) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_OFDM_DATA_COMPRESS (1985) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_OFDM_DATA_COMPRESS (1986) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_OFDM_DATA_COMPRESS (1987) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_OFDM_DATA_COMPRESS (1988) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_OFDM_DATA_COMPRESS (1989) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_OFDM_DATA_COMPRESS (1990) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_OFDM_DATA_COMPRESS (1991) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_OFDM_DATA_COMPRESS (1992) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_OFDM_DATA_COMPRESS (1993) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_OFDM_DATA_COMPRESS (1994) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_OFDM_DATA_COMPRESS (1995) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUSCH (2021) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUSCH (2022) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_IQ_DECOMP_PUSCH (2023) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_IQ_DECOMP_PUSCH (2024) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_IQ_DECOMP_PUSCH (2025) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_IQ_DECOMP_PUSCH (2026) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_IQ_DECOMP_PUSCH (2027) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_IQ_DECOMP_PUSCH (2028) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_IQ_DECOMP_PUSCH (2029) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_IQ_DECOMP_PUSCH (2030) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_IQ_DECOMP_PUSCH (2031) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_IQ_DECOMP_PUSCH (2032) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_IQ_DECOMP_PUSCH (2033) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_IQ_DECOMP_PUSCH (2034) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_IQ_DECOMP_PUSCH (2035) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUCCH (2061) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUCCH (2062) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_IQ_DECOMP_PUCCH (2063) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_IQ_DECOMP_PUCCH (2064) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_IQ_DECOMP_PUCCH (2065) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_IQ_DECOMP_PUCCH (2066) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_IQ_DECOMP_PUCCH (2067) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_IQ_DECOMP_PUCCH (2068) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_IQ_DECOMP_PUCCH (2069) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_IQ_DECOMP_PUCCH (2070) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_IQ_DECOMP_PUCCH (2071) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_IQ_DECOMP_PUCCH (2072) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_IQ_DECOMP_PUCCH (2073) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_IQ_DECOMP_PUCCH (2074) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_IQ_DECOMP_PUCCH (2075) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR><TH class="mrc7b"></TH><TH class="mrc7" colspan="1"></TH></TR> </TABLE>
 </DIV>

 <DIV class="tablediv"  id="mrcPipelineDiv17">
 <TABLE cellspacing = "0" cellpadding = "2" border = "0" class="mrcPipelineTableBorderClass"  id="mrcPipelineTable17">
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_18010</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 0<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 1<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 2<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 3<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 4<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 5<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 6<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 7<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 8<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 9<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 10<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 11<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 12<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 13<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 14<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 15<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 16<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">Cell 17<BR/><BR/><BR/><BR/><BR/>FrameType<BR/>Avg DL RBs<BR/>Avg DL Layers<BR/>DL Throughput (bps)<BR/><BR/>Avg UL RBs<BR/>Avg UL Layers<BR/>UL Throughput (bps)</TD>
<TD class="mrc0c" colspan="1">fd/mu0_10mhz/1<BR/>0/fd_testconfi<BR/>g_tst10.cfg<BR/><BR/><BR/>FDD<BR/>48 (92 %)<BR/>4.00<BR/>172,032,000<BR/><BR/>48 (92 %)<BR/>1.00<BR/>37,888,000<BR/></TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_18010</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc1">OPTIONS:<BR/>
  PDSCH split<BR/>PDSCH Symbol Proc<BR/>PDSCH Beam Weight split<BR/>
  PUSCH CE split<BR/>PUSCH MMSE split<BR/>PUSCH LLR split<BR/>PUSCH Beam Weight split<BR/>PUSCH CE Freq Interpolation<BR/>PUSCH CE Time Interpolation (Per Cell)<BR/><BR/><BR/>
  PUCCH split<BR/>SRS split<BR/>PDSCH Memset Opt<BR/>BBU Sleep Enable<BR/>
  FEC ENC split<BR/>FEC DEC split<BR/>Num FEC DEC iteration<BR/>FEC DEC early termination enabled<BR/>
  eBBUPool Queue<BR/>eBBUPool Context<BR/>eBBUPool Max Fetch<BR/>
  </TD>
<TD class="mrc1c" colspan="1"><BR/>
1<BR/>0<BR/>1<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>2<BR/>4, 4, 4, 4, 4, 4, <BR/>4, 4, 4, 4, 4, 4, <BR/>4, 4, 4, 4, 4, 4<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>1<BR/>1<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 20206</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">ACC100</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">18</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">8.0 / 4.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">8.0 / 4.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>000000F0<BR/>000000F0</TD>  </TR>
  <TR id="0"><TH class="mrc9" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Memory Allocation Statistics</TH>  <TH class="mrc9c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Memory Allocation Statistics</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc9">Test Number</TD><TD class="mrc9c" colspan="1">FD_18010</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Num Heap Memory Allocated</TD><TD class="mrc6c" colspan="1">836</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Num DPDK Memory Allocated</TD><TD class="mrc6c" colspan="1">98</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Num ORAN Memory Allocated</TD><TD class="mrc6c" colspan="1">1</TD>  </TR>
  <TR id="0"><TD class="mrc9" style="font-size:15px;">Num Total Memory Allocated</TD><TD class="mrc9m" colspan="1">935</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">Heap Memory Size (in Bytes)</TD><TD class="mrc6c" colspan="1">2,337,057,092</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">DPDK Memory Size (in Bytes)</TD><TD class="mrc6c" colspan="1">207,932,416</TD>  </TR>
  <TR id="0"><TD class="mrc9a" style="font-size:15px;">ORAN Memory Size (in Bytes)</TD><TD class="mrc6c" colspan="1">48,994,856</TD>  </TR>
  <TR id="0"><TD class="mrc9" style="font-size:15px;">Total Memory Size (in Bytes)</TD><TD class="mrc9m" colspan="1">2,593,984,364</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_18010</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">65%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">65% on 8 C<BR/> <B style="color:blue;">(520%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="1">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_18010_MU0</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.00<BR/>(     0.00 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.00<BR/>(     0.00 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.00<BR/>(     0.00 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_18010_MU0</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       34%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       34%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">       35%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       68%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       70%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">       72%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency</TD><TD class="mrc6c">        6%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency</TD><TD class="mrc6c">        7%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency</TD><TD class="mrc6cl">        8%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency</TD><TD class="mrc6c">        3%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency</TD><TD class="mrc6c">        5%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency</TD><TD class="mrc6cl">        7%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="1">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_18010_MU0</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">    61.14</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">    10.87</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    13.87</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">    59.35</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">    69.65</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    42.06</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">     9.55</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">   266.49</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_18010_MU0</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    14.63</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    27.43</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.58</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">     3.98</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     2.31</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.94</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    22.27</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">    32.93</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.40</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.10</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.12</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">     1.93</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">    19.64</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">     0.34</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">    26.73</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">     2.89</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.57</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     2.59</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">     8.71</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.71</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    69.65</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.05</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="4" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency Per Cell (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency Per Cell (% of TTI)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl" colspan="1">FD_18010</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 0</TD><TD class="mrc6cl" colspan="1">       33%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 1</TD><TD class="mrc6cl" colspan="1">       34%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 2</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 3</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 3</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 3</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 4</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 4</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 4</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 5</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 5</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 5</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 6</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 6</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 6</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 7</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 7</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 7</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 8</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 8</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 8</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 9</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 9</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 9</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC10</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC10</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC10</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC11</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC11</TD><TD class="mrc6c" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC11</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC12</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC12</TD><TD class="mrc6c" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC12</TD><TD class="mrc6cl" colspan="1">       33%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC13</TD><TD class="mrc6c" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC13</TD><TD class="mrc6c" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC13</TD><TD class="mrc6cl" colspan="1">       33%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC14</TD><TD class="mrc6c" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC14</TD><TD class="mrc6c" colspan="1">       34%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC14</TD><TD class="mrc6cl" colspan="1">       35%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC15</TD><TD class="mrc6c" colspan="1">       34%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC15</TD><TD class="mrc6c" colspan="1">       34%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC15</TD><TD class="mrc6cl" colspan="1">       35%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC16</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC16</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC16</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC17</TD><TD class="mrc6c" colspan="1">       30%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC17</TD><TD class="mrc6c" colspan="1">       31%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC17</TD><TD class="mrc6cl" colspan="1">       32%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       63%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6cl" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6cl" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6cl" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6cl" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">       64%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6cl" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6cl" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6cl" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC10</TD><TD class="mrc6cl" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC11</TD><TD class="mrc6cl" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC12</TD><TD class="mrc6cl" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC13</TD><TD class="mrc6cl" colspan="1">       69%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">       70%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC14</TD><TD class="mrc6cl" colspan="1">       71%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">       70%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC15</TD><TD class="mrc6cl" colspan="1">       71%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC16</TD><TD class="mrc6c" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC16</TD><TD class="mrc6c" colspan="1">       70%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC16</TD><TD class="mrc6cl" colspan="1">       72%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC17</TD><TD class="mrc6c" colspan="1">       68%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC17</TD><TD class="mrc6c" colspan="1">       70%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC17</TD><TD class="mrc6cl" colspan="1">       72%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 3</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 4</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 5</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 6</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 7</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 8</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 9</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC10</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC11</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC12</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC13</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC14</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC15</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC16</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC16</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC16</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC17</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC17</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC17</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 3</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 4</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 5</TD><TD class="mrc6cl" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 6</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 7</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 8</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC 9</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC10</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC11</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC12</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC13</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC14</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC15</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC16</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC16</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC16</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Acc Link Latency CC17</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Acc Link Latency CC17</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Acc Link Latency CC17</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 3</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 4</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 5</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 6</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 7</TD><TD class="mrc6cl" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 8</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC 9</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC10</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC11</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC12</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC13</TD><TD class="mrc6cl" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC14</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC15</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC16</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC16</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC16</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Acc Link Latency CC17</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Acc Link Latency CC17</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Acc Link Latency CC17</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 3</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 3</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 4</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 4</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 5</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 5</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 6</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 6</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 7</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 7</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 8</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 8</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC 9</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC 9</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC10</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC10</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC11</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC11</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC12</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC12</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC13</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC13</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC14</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC14</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC15</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC15</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC16</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC16</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC16</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS FFT Acc Link Latency CC17</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS FFT Acc Link Latency CC17</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS FFT Acc Link Latency CC17</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down per Cell per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down per Cell per TTI (in usecs)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c" colspan="1">FD_18010</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC00_GNB_DL_CFG (100) </TD><TD class="mrc6c" colspan="1">    17.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CFG (101) </TD><TD class="mrc6c" colspan="1">    17.93</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CFG (102) </TD><TD class="mrc6c" colspan="1">    17.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_CFG (103) </TD><TD class="mrc6c" colspan="1">    16.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_CFG (104) </TD><TD class="mrc6c" colspan="1">    14.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_CFG (105) </TD><TD class="mrc6c" colspan="1">    14.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_CFG (106) </TD><TD class="mrc6c" colspan="1">    14.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_CFG (107) </TD><TD class="mrc6c" colspan="1">    14.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_CFG (108) </TD><TD class="mrc6c" colspan="1">    14.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_CFG (109) </TD><TD class="mrc6c" colspan="1">    13.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_CFG (110) </TD><TD class="mrc6c" colspan="1">    14.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_CFG (111) </TD><TD class="mrc6c" colspan="1">    13.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_CFG (112) </TD><TD class="mrc6c" colspan="1">    13.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_CFG (113) </TD><TD class="mrc6c" colspan="1">    13.75</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_CFG (114) </TD><TD class="mrc6c" colspan="1">    13.58</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_CFG (115) </TD><TD class="mrc6c" colspan="1">    13.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_CFG (116) </TD><TD class="mrc6c" colspan="1">    13.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_CFG (117) </TD><TD class="mrc6c" colspan="1">    13.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    33.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_CFG (141) </TD><TD class="mrc6c" colspan="1">    33.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_CFG (142) </TD><TD class="mrc6c" colspan="1">    32.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_CFG (143) </TD><TD class="mrc6c" colspan="1">    31.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_CFG (144) </TD><TD class="mrc6c" colspan="1">    29.41</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_CFG (145) </TD><TD class="mrc6c" colspan="1">    28.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_CFG (146) </TD><TD class="mrc6c" colspan="1">    27.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_CFG (147) </TD><TD class="mrc6c" colspan="1">    28.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_CFG (148) </TD><TD class="mrc6c" colspan="1">    26.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_CFG (149) </TD><TD class="mrc6c" colspan="1">    25.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_CFG (150) </TD><TD class="mrc6c" colspan="1">    24.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_CFG (151) </TD><TD class="mrc6c" colspan="1">    25.70</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_CFG (152) </TD><TD class="mrc6c" colspan="1">    25.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_CFG (153) </TD><TD class="mrc6c" colspan="1">    24.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_CFG (154) </TD><TD class="mrc6c" colspan="1">    24.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_CFG (155) </TD><TD class="mrc6c" colspan="1">    24.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_CFG (156) </TD><TD class="mrc6c" colspan="1">    24.58</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_CFG (157) </TD><TD class="mrc6c" colspan="1">    23.96</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     4.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_CRC (181) </TD><TD class="mrc6c" colspan="1">     4.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_CRC (182) </TD><TD class="mrc6c" colspan="1">     4.62</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_TB_CRC (183) </TD><TD class="mrc6c" colspan="1">     4.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_TB_CRC (184) </TD><TD class="mrc6c" colspan="1">     4.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_TB_CRC (185) </TD><TD class="mrc6c" colspan="1">     4.47</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_TB_CRC (186) </TD><TD class="mrc6c" colspan="1">     4.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_TB_CRC (187) </TD><TD class="mrc6c" colspan="1">     4.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_TB_CRC (188) </TD><TD class="mrc6c" colspan="1">     4.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_TB_CRC (189) </TD><TD class="mrc6c" colspan="1">     4.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_TB_CRC (190) </TD><TD class="mrc6c" colspan="1">     4.70</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_TB_CRC (191) </TD><TD class="mrc6c" colspan="1">     4.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_TB_CRC (192) </TD><TD class="mrc6c" colspan="1">     4.64</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_TB_CRC (193) </TD><TD class="mrc6c" colspan="1">     4.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_TB_CRC (194) </TD><TD class="mrc6c" colspan="1">     4.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_TB_CRC (195) </TD><TD class="mrc6c" colspan="1">     4.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PDSCH_TB_CRC (196) </TD><TD class="mrc6c" colspan="1">     4.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PDSCH_TB_CRC (197) </TD><TD class="mrc6c" colspan="1">     4.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     4.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_CB_SETUP (221) </TD><TD class="mrc6c" colspan="1">     4.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_CB_SETUP (222) </TD><TD class="mrc6c" colspan="1">     4.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_CB_SETUP (223) </TD><TD class="mrc6c" colspan="1">     4.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_CB_SETUP (224) </TD><TD class="mrc6c" colspan="1">     3.77</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_CB_SETUP (225) </TD><TD class="mrc6c" colspan="1">     3.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_CB_SETUP (226) </TD><TD class="mrc6c" colspan="1">     4.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_CB_SETUP (227) </TD><TD class="mrc6c" colspan="1">     4.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_CB_SETUP (228) </TD><TD class="mrc6c" colspan="1">     3.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_CB_SETUP (229) </TD><TD class="mrc6c" colspan="1">     3.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_CB_SETUP (230) </TD><TD class="mrc6c" colspan="1">     3.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_CB_SETUP (231) </TD><TD class="mrc6c" colspan="1">     3.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_CB_SETUP (232) </TD><TD class="mrc6c" colspan="1">     3.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_CB_SETUP (233) </TD><TD class="mrc6c" colspan="1">     3.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_CB_SETUP (234) </TD><TD class="mrc6c" colspan="1">     3.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_CB_SETUP (235) </TD><TD class="mrc6c" colspan="1">     3.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PDSCH_CB_SETUP (236) </TD><TD class="mrc6c" colspan="1">     3.78</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PDSCH_CB_SETUP (237) </TD><TD class="mrc6c" colspan="1">     3.77</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.01</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_QUEUE (261) </TD><TD class="mrc6c" colspan="1">     2.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_QUEUE (262) </TD><TD class="mrc6c" colspan="1">     2.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_TB_QUEUE (263) </TD><TD class="mrc6c" colspan="1">     2.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_TB_QUEUE (264) </TD><TD class="mrc6c" colspan="1">     2.04</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_TB_QUEUE (265) </TD><TD class="mrc6c" colspan="1">     2.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_TB_QUEUE (266) </TD><TD class="mrc6c" colspan="1">     2.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_TB_QUEUE (267) </TD><TD class="mrc6c" colspan="1">     1.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_TB_QUEUE (268) </TD><TD class="mrc6c" colspan="1">     2.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_TB_QUEUE (269) </TD><TD class="mrc6c" colspan="1">     2.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_TB_QUEUE (270) </TD><TD class="mrc6c" colspan="1">     2.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_TB_QUEUE (271) </TD><TD class="mrc6c" colspan="1">     2.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_TB_QUEUE (272) </TD><TD class="mrc6c" colspan="1">     2.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_TB_QUEUE (273) </TD><TD class="mrc6c" colspan="1">     2.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_TB_QUEUE (274) </TD><TD class="mrc6c" colspan="1">     2.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_TB_QUEUE (275) </TD><TD class="mrc6c" colspan="1">     2.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PDSCH_TB_QUEUE (276) </TD><TD class="mrc6c" colspan="1">     2.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PDSCH_TB_QUEUE (277) </TD><TD class="mrc6c" colspan="1">     2.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     5.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_SCRAMBLER (301) </TD><TD class="mrc6c" colspan="1">     5.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_SCRAMBLER (302) </TD><TD class="mrc6c" colspan="1">     5.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_SCRAMBLER (303) </TD><TD class="mrc6c" colspan="1">     5.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_SCRAMBLER (304) </TD><TD class="mrc6c" colspan="1">     5.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_SCRAMBLER (305) </TD><TD class="mrc6c" colspan="1">     5.93</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_SCRAMBLER (306) </TD><TD class="mrc6c" colspan="1">     5.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_SCRAMBLER (307) </TD><TD class="mrc6c" colspan="1">     6.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_SCRAMBLER (308) </TD><TD class="mrc6c" colspan="1">     6.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_SCRAMBLER (309) </TD><TD class="mrc6c" colspan="1">     6.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_SCRAMBLER (310) </TD><TD class="mrc6c" colspan="1">     6.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_SCRAMBLER (311) </TD><TD class="mrc6c" colspan="1">     5.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_SCRAMBLER (312) </TD><TD class="mrc6c" colspan="1">     5.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_SCRAMBLER (313) </TD><TD class="mrc6c" colspan="1">     5.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_SCRAMBLER (314) </TD><TD class="mrc6c" colspan="1">     5.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_SCRAMBLER (315) </TD><TD class="mrc6c" colspan="1">     5.74</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PDSCH_SCRAMBLER (316) </TD><TD class="mrc6c" colspan="1">     5.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PDSCH_SCRAMBLER (317) </TD><TD class="mrc6c" colspan="1">     6.01</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_RS (340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    23.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_RS (341) </TD><TD class="mrc6c" colspan="1">    23.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_RS (342) </TD><TD class="mrc6c" colspan="1">    23.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PDSCH_RS (343) </TD><TD class="mrc6c" colspan="1">    23.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PDSCH_RS (344) </TD><TD class="mrc6c" colspan="1">    23.44</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PDSCH_RS (345) </TD><TD class="mrc6c" colspan="1">    22.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PDSCH_RS (346) </TD><TD class="mrc6c" colspan="1">    22.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PDSCH_RS (347) </TD><TD class="mrc6c" colspan="1">    22.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PDSCH_RS (348) </TD><TD class="mrc6c" colspan="1">    21.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PDSCH_RS (349) </TD><TD class="mrc6c" colspan="1">    21.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PDSCH_RS (350) </TD><TD class="mrc6c" colspan="1">    21.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PDSCH_RS (351) </TD><TD class="mrc6c" colspan="1">    21.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PDSCH_RS (352) </TD><TD class="mrc6c" colspan="1">    21.69</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PDSCH_RS (353) </TD><TD class="mrc6c" colspan="1">    21.55</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PDSCH_RS (354) </TD><TD class="mrc6c" colspan="1">    21.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PDSCH_RS (355) </TD><TD class="mrc6c" colspan="1">    21.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PDSCH_RS (356) </TD><TD class="mrc6c" colspan="1">    20.74</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PDSCH_RS (357) </TD><TD class="mrc6c" colspan="1">    20.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    33.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_SYMBOL_PROC (381) </TD><TD class="mrc6c" colspan="1">    33.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_SYMBOL_PROC (382) </TD><TD class="mrc6c" colspan="1">    34.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_SYMBOL_PROC (383) </TD><TD class="mrc6c" colspan="1">    34.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_SYMBOL_PROC (384) </TD><TD class="mrc6c" colspan="1">    33.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_SYMBOL_PROC (385) </TD><TD class="mrc6c" colspan="1">    33.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_SYMBOL_PROC (386) </TD><TD class="mrc6c" colspan="1">    33.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_SYMBOL_PROC (387) </TD><TD class="mrc6c" colspan="1">    32.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_SYMBOL_PROC (388) </TD><TD class="mrc6c" colspan="1">    33.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_SYMBOL_PROC (389) </TD><TD class="mrc6c" colspan="1">    33.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_SYMBOL_PROC (390) </TD><TD class="mrc6c" colspan="1">    32.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_SYMBOL_PROC (391) </TD><TD class="mrc6c" colspan="1">    32.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_SYMBOL_PROC (392) </TD><TD class="mrc6c" colspan="1">    32.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_SYMBOL_PROC (393) </TD><TD class="mrc6c" colspan="1">    32.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_SYMBOL_PROC (394) </TD><TD class="mrc6c" colspan="1">    30.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_SYMBOL_PROC (395) </TD><TD class="mrc6c" colspan="1">    29.57</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_SYMBOL_PROC (396) </TD><TD class="mrc6c" colspan="1">    33.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_SYMBOL_PROC (397) </TD><TD class="mrc6c" colspan="1">    33.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PDSCH_BEAM_FORMING (421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PDSCH_BEAM_FORMING (422) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_PDSCH_BEAM_FORMING (423) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_PDSCH_BEAM_FORMING (424) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_PDSCH_BEAM_FORMING (425) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_PDSCH_BEAM_FORMING (426) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_PDSCH_BEAM_FORMING (427) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_PDSCH_BEAM_FORMING (428) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_PDSCH_BEAM_FORMING (429) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_PDSCH_BEAM_FORMING (430) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_PDSCH_BEAM_FORMING (431) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_PDSCH_BEAM_FORMING (432) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_PDSCH_BEAM_FORMING (433) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_PDSCH_BEAM_FORMING (434) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_PDSCH_BEAM_FORMING (435) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_PDSCH_BEAM_FORMING (436) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_PDSCH_BEAM_FORMING (437) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CSI_PROC (461) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CSI_PROC (462) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_CSI_PROC (463) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_CSI_PROC (464) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_CSI_PROC (465) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_CSI_PROC (466) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_CSI_PROC (467) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_CSI_PROC (468) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_CSI_PROC (469) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_CSI_PROC (470) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_CSI_PROC (471) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_CSI_PROC (472) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_CSI_PROC (473) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_CSI_PROC (474) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_CSI_PROC (475) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_CSI_PROC (476) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_CSI_PROC (477) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PROC (501) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PROC (502) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_DCI_PROC (503) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_DCI_PROC (504) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_DCI_PROC (505) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_DCI_PROC (506) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_DCI_PROC (507) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_DCI_PROC (508) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_DCI_PROC (509) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_DCI_PROC (510) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_DCI_PROC (511) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_DCI_PROC (512) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_DCI_PROC (513) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_DCI_PROC (514) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_DCI_PROC (515) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_DCI_PROC (516) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_DCI_PROC (517) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_UCI_PROC (541) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_UCI_PROC (542) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_UCI_PROC (543) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_UCI_PROC (544) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_UCI_PROC (545) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_UCI_PROC (546) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_UCI_PROC (547) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_UCI_PROC (548) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_UCI_PROC (549) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_UCI_PROC (550) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_UCI_PROC (551) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_UCI_PROC (552) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_UCI_PROC (553) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_UCI_PROC (554) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_UCI_PROC (555) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_UCI_PROC (556) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_UCI_PROC (557) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PRECODER (581) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PRECODER (582) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_DCI_PRECODER (583) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_DCI_PRECODER (584) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_DCI_PRECODER (585) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_DCI_PRECODER (586) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_DCI_PRECODER (587) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_DCI_PRECODER (588) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_DCI_PRECODER (589) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_DCI_PRECODER (590) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_DCI_PRECODER (591) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_DCI_PRECODER (592) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_DCI_PRECODER (593) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_DCI_PRECODER (594) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_DCI_PRECODER (595) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_DCI_PRECODER (596) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_DCI_PRECODER (597) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PBCH_PROC (621) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PBCH_PROC (622) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_PBCH_PROC (623) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_PBCH_PROC (624) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_PBCH_PROC (625) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_PBCH_PROC (626) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_PBCH_PROC (627) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_PBCH_PROC (628) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_PBCH_PROC (629) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_PBCH_PROC (630) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_PBCH_PROC (631) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_PBCH_PROC (632) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_PBCH_PROC (633) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_PBCH_PROC (634) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_PBCH_PROC (635) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_PBCH_PROC (636) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_PBCH_PROC (637) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     1.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_RESET_BUF (661) </TD><TD class="mrc6c" colspan="1">     1.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_RESET_BUF (662) </TD><TD class="mrc6c" colspan="1">     1.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_RESET_BUF (663) </TD><TD class="mrc6c" colspan="1">     1.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_RESET_BUF (664) </TD><TD class="mrc6c" colspan="1">     1.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_RESET_BUF (665) </TD><TD class="mrc6c" colspan="1">     1.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_RESET_BUF (666) </TD><TD class="mrc6c" colspan="1">     1.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_RESET_BUF (667) </TD><TD class="mrc6c" colspan="1">     1.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_RESET_BUF (668) </TD><TD class="mrc6c" colspan="1">     1.44</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_RESET_BUF (669) </TD><TD class="mrc6c" colspan="1">     1.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_RESET_BUF (670) </TD><TD class="mrc6c" colspan="1">     1.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_RESET_BUF (671) </TD><TD class="mrc6c" colspan="1">     1.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_RESET_BUF (672) </TD><TD class="mrc6c" colspan="1">     1.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_RESET_BUF (673) </TD><TD class="mrc6c" colspan="1">     1.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_RESET_BUF (674) </TD><TD class="mrc6c" colspan="1">     1.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_RESET_BUF (675) </TD><TD class="mrc6c" colspan="1">     1.41</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_RESET_BUF (676) </TD><TD class="mrc6c" colspan="1">     1.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_RESET_BUF (677) </TD><TD class="mrc6c" colspan="1">     1.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_POST (700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_POST (701) </TD><TD class="mrc6c" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_POST (702) </TD><TD class="mrc6c" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_POST (703) </TD><TD class="mrc6c" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_POST (704) </TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_POST (705) </TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_POST (706) </TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_POST (707) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_POST (708) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_POST (709) </TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_POST (710) </TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_POST (711) </TD><TD class="mrc6c" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_POST (712) </TD><TD class="mrc6c" colspan="1">     0.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_POST (713) </TD><TD class="mrc6c" colspan="1">     0.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_POST (714) </TD><TD class="mrc6c" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_POST (715) </TD><TD class="mrc6c" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_POST (716) </TD><TD class="mrc6c" colspan="1">     0.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_POST (717) </TD><TD class="mrc6c" colspan="1">     0.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DMRS (741) </TD><TD class="mrc6c" colspan="1">     6.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DMRS (742) </TD><TD class="mrc6c" colspan="1">     6.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_DMRS (743) </TD><TD class="mrc6c" colspan="1">     6.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_DMRS (744) </TD><TD class="mrc6c" colspan="1">     6.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_DMRS (745) </TD><TD class="mrc6c" colspan="1">     6.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_DMRS (746) </TD><TD class="mrc6c" colspan="1">     6.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_DMRS (747) </TD><TD class="mrc6c" colspan="1">     6.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_DMRS (748) </TD><TD class="mrc6c" colspan="1">     6.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_DMRS (749) </TD><TD class="mrc6c" colspan="1">     6.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_DMRS (750) </TD><TD class="mrc6c" colspan="1">     6.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_DMRS (751) </TD><TD class="mrc6c" colspan="1">     5.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_DMRS (752) </TD><TD class="mrc6c" colspan="1">     6.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_DMRS (753) </TD><TD class="mrc6c" colspan="1">     6.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_DMRS (754) </TD><TD class="mrc6c" colspan="1">     6.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_DMRS (755) </TD><TD class="mrc6c" colspan="1">     6.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_DMRS (756) </TD><TD class="mrc6c" colspan="1">     6.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_DMRS (757) </TD><TD class="mrc6c" colspan="1">     6.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB0 (781) </TD><TD class="mrc6c" colspan="1">     1.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB0 (782) </TD><TD class="mrc6c" colspan="1">     1.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_CE_SYMB0 (783) </TD><TD class="mrc6c" colspan="1">     1.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_CE_SYMB0 (784) </TD><TD class="mrc6c" colspan="1">     1.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_CE_SYMB0 (785) </TD><TD class="mrc6c" colspan="1">     1.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_CE_SYMB0 (786) </TD><TD class="mrc6c" colspan="1">     1.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_CE_SYMB0 (787) </TD><TD class="mrc6c" colspan="1">     1.79</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_CE_SYMB0 (788) </TD><TD class="mrc6c" colspan="1">     1.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_CE_SYMB0 (789) </TD><TD class="mrc6c" colspan="1">     1.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_CE_SYMB0 (790) </TD><TD class="mrc6c" colspan="1">     1.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_CE_SYMB0 (791) </TD><TD class="mrc6c" colspan="1">     1.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_CE_SYMB0 (792) </TD><TD class="mrc6c" colspan="1">     1.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_CE_SYMB0 (793) </TD><TD class="mrc6c" colspan="1">     1.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_CE_SYMB0 (794) </TD><TD class="mrc6c" colspan="1">     1.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_CE_SYMB0 (795) </TD><TD class="mrc6c" colspan="1">     2.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_CE_SYMB0 (796) </TD><TD class="mrc6c" colspan="1">     2.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_CE_SYMB0 (797) </TD><TD class="mrc6c" colspan="1">     2.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    22.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB7 (821) </TD><TD class="mrc6c" colspan="1">    22.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB7 (822) </TD><TD class="mrc6c" colspan="1">    21.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_CE_SYMB7 (823) </TD><TD class="mrc6c" colspan="1">    21.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_CE_SYMB7 (824) </TD><TD class="mrc6c" colspan="1">    21.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_CE_SYMB7 (825) </TD><TD class="mrc6c" colspan="1">    20.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_CE_SYMB7 (826) </TD><TD class="mrc6c" colspan="1">    19.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_CE_SYMB7 (827) </TD><TD class="mrc6c" colspan="1">    19.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_CE_SYMB7 (828) </TD><TD class="mrc6c" colspan="1">    18.20</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_CE_SYMB7 (829) </TD><TD class="mrc6c" colspan="1">    18.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_CE_SYMB7 (830) </TD><TD class="mrc6c" colspan="1">    18.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_CE_SYMB7 (831) </TD><TD class="mrc6c" colspan="1">    18.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_CE_SYMB7 (832) </TD><TD class="mrc6c" colspan="1">    18.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_CE_SYMB7 (833) </TD><TD class="mrc6c" colspan="1">    18.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_CE_SYMB7 (834) </TD><TD class="mrc6c" colspan="1">    18.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_CE_SYMB7 (835) </TD><TD class="mrc6c" colspan="1">    18.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_CE_SYMB7 (836) </TD><TD class="mrc6c" colspan="1">    17.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_CE_SYMB7 (837) </TD><TD class="mrc6c" colspan="1">    18.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_RNN_CALC (861) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_RNN_CALC (862) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_RNN_CALC (863) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_RNN_CALC (864) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_RNN_CALC (865) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_RNN_CALC (866) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_RNN_CALC (867) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_RNN_CALC (868) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_RNN_CALC (869) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_RNN_CALC (870) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_RNN_CALC (871) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_RNN_CALC (872) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_RNN_CALC (873) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_RNN_CALC (874) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_RNN_CALC (875) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_RNN_CALC (876) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_RNN_CALC (877) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB0 (901) </TD><TD class="mrc6c" colspan="1">     0.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB0 (902) </TD><TD class="mrc6c" colspan="1">     0.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_MMSE_SYMB0 (903) </TD><TD class="mrc6c" colspan="1">     0.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_MMSE_SYMB0 (904) </TD><TD class="mrc6c" colspan="1">     0.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_MMSE_SYMB0 (905) </TD><TD class="mrc6c" colspan="1">     0.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_MMSE_SYMB0 (906) </TD><TD class="mrc6c" colspan="1">     0.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_MMSE_SYMB0 (907) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_MMSE_SYMB0 (908) </TD><TD class="mrc6c" colspan="1">     0.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_MMSE_SYMB0 (909) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_MMSE_SYMB0 (910) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_MMSE_SYMB0 (911) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_MMSE_SYMB0 (912) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_MMSE_SYMB0 (913) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_MMSE_SYMB0 (914) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_MMSE_SYMB0 (915) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_MMSE_SYMB0 (916) </TD><TD class="mrc6c" colspan="1">     0.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_MMSE_SYMB0 (917) </TD><TD class="mrc6c" colspan="1">     0.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    27.64</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB7 (941) </TD><TD class="mrc6c" colspan="1">    27.63</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB7 (942) </TD><TD class="mrc6c" colspan="1">    27.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_MMSE_SYMB7 (943) </TD><TD class="mrc6c" colspan="1">    27.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_MMSE_SYMB7 (944) </TD><TD class="mrc6c" colspan="1">    27.55</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_MMSE_SYMB7 (945) </TD><TD class="mrc6c" colspan="1">    27.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_MMSE_SYMB7 (946) </TD><TD class="mrc6c" colspan="1">    27.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_MMSE_SYMB7 (947) </TD><TD class="mrc6c" colspan="1">    26.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_MMSE_SYMB7 (948) </TD><TD class="mrc6c" colspan="1">    26.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_MMSE_SYMB7 (949) </TD><TD class="mrc6c" colspan="1">    25.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_MMSE_SYMB7 (950) </TD><TD class="mrc6c" colspan="1">    26.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_MMSE_SYMB7 (951) </TD><TD class="mrc6c" colspan="1">    26.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_MMSE_SYMB7 (952) </TD><TD class="mrc6c" colspan="1">    26.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_MMSE_SYMB7 (953) </TD><TD class="mrc6c" colspan="1">    26.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_MMSE_SYMB7 (954) </TD><TD class="mrc6c" colspan="1">    25.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_MMSE_SYMB7 (955) </TD><TD class="mrc6c" colspan="1">    26.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_MMSE_SYMB7 (956) </TD><TD class="mrc6c" colspan="1">    26.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_MMSE_SYMB7 (957) </TD><TD class="mrc6c" colspan="1">    26.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DESCRAMBLE (981) </TD><TD class="mrc6c" colspan="1">     3.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DESCRAMBLE (982) </TD><TD class="mrc6c" colspan="1">     3.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_DESCRAMBLE (983) </TD><TD class="mrc6c" colspan="1">     3.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_DESCRAMBLE (984) </TD><TD class="mrc6c" colspan="1">     3.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_DESCRAMBLE (985) </TD><TD class="mrc6c" colspan="1">     3.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_DESCRAMBLE (986) </TD><TD class="mrc6c" colspan="1">     3.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_DESCRAMBLE (987) </TD><TD class="mrc6c" colspan="1">     2.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_DESCRAMBLE (988) </TD><TD class="mrc6c" colspan="1">     2.63</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_DESCRAMBLE (989) </TD><TD class="mrc6c" colspan="1">     2.70</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_DESCRAMBLE (990) </TD><TD class="mrc6c" colspan="1">     2.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_DESCRAMBLE (991) </TD><TD class="mrc6c" colspan="1">     2.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_DESCRAMBLE (992) </TD><TD class="mrc6c" colspan="1">     2.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_DESCRAMBLE (993) </TD><TD class="mrc6c" colspan="1">     2.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_DESCRAMBLE (994) </TD><TD class="mrc6c" colspan="1">     2.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_DESCRAMBLE (995) </TD><TD class="mrc6c" colspan="1">     2.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_DESCRAMBLE (996) </TD><TD class="mrc6c" colspan="1">     2.63</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_DESCRAMBLE (997) </TD><TD class="mrc6c" colspan="1">     2.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.79</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CB_SETUP (1061) </TD><TD class="mrc6c" colspan="1">     2.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CB_SETUP (1062) </TD><TD class="mrc6c" colspan="1">     2.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_CB_SETUP (1063) </TD><TD class="mrc6c" colspan="1">     2.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_CB_SETUP (1064) </TD><TD class="mrc6c" colspan="1">     2.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_CB_SETUP (1065) </TD><TD class="mrc6c" colspan="1">     2.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_CB_SETUP (1066) </TD><TD class="mrc6c" colspan="1">     2.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_CB_SETUP (1067) </TD><TD class="mrc6c" colspan="1">     2.69</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_CB_SETUP (1068) </TD><TD class="mrc6c" colspan="1">     2.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_CB_SETUP (1069) </TD><TD class="mrc6c" colspan="1">     2.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_CB_SETUP (1070) </TD><TD class="mrc6c" colspan="1">     2.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_CB_SETUP (1071) </TD><TD class="mrc6c" colspan="1">     2.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_CB_SETUP (1072) </TD><TD class="mrc6c" colspan="1">     2.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_CB_SETUP (1073) </TD><TD class="mrc6c" colspan="1">     2.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_CB_SETUP (1074) </TD><TD class="mrc6c" colspan="1">     2.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_CB_SETUP (1075) </TD><TD class="mrc6c" colspan="1">     2.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_CB_SETUP (1076) </TD><TD class="mrc6c" colspan="1">     2.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_CB_SETUP (1077) </TD><TD class="mrc6c" colspan="1">     2.27</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DECODER (1021) </TD><TD class="mrc6c" colspan="1">     3.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DECODER (1022) </TD><TD class="mrc6c" colspan="1">     3.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_DECODER (1023) </TD><TD class="mrc6c" colspan="1">     3.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_DECODER (1024) </TD><TD class="mrc6c" colspan="1">     3.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_DECODER (1025) </TD><TD class="mrc6c" colspan="1">     3.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_DECODER (1026) </TD><TD class="mrc6c" colspan="1">     3.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_DECODER (1027) </TD><TD class="mrc6c" colspan="1">     2.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_DECODER (1028) </TD><TD class="mrc6c" colspan="1">     2.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_DECODER (1029) </TD><TD class="mrc6c" colspan="1">     2.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_DECODER (1030) </TD><TD class="mrc6c" colspan="1">     2.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_DECODER (1031) </TD><TD class="mrc6c" colspan="1">     2.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_DECODER (1032) </TD><TD class="mrc6c" colspan="1">     2.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_DECODER (1033) </TD><TD class="mrc6c" colspan="1">     2.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_DECODER (1034) </TD><TD class="mrc6c" colspan="1">     2.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_DECODER (1035) </TD><TD class="mrc6c" colspan="1">     2.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_DECODER (1036) </TD><TD class="mrc6c" colspan="1">     2.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_DECODER (1037) </TD><TD class="mrc6c" colspan="1">     2.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_TB (1100) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_TB (1101) </TD><TD class="mrc6c" colspan="1">     9.44</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_TB (1102) </TD><TD class="mrc6c" colspan="1">     9.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_TB (1103) </TD><TD class="mrc6c" colspan="1">     9.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_TB (1104) </TD><TD class="mrc6c" colspan="1">     9.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_TB (1105) </TD><TD class="mrc6c" colspan="1">     9.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_TB (1106) </TD><TD class="mrc6c" colspan="1">     9.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_TB (1107) </TD><TD class="mrc6c" colspan="1">     8.71</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_TB (1108) </TD><TD class="mrc6c" colspan="1">     8.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_TB (1109) </TD><TD class="mrc6c" colspan="1">     8.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_TB (1110) </TD><TD class="mrc6c" colspan="1">     8.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_TB (1111) </TD><TD class="mrc6c" colspan="1">     8.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_TB (1112) </TD><TD class="mrc6c" colspan="1">     8.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_TB (1113) </TD><TD class="mrc6c" colspan="1">     8.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_TB (1114) </TD><TD class="mrc6c" colspan="1">     8.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_TB (1115) </TD><TD class="mrc6c" colspan="1">     8.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_TB (1116) </TD><TD class="mrc6c" colspan="1">     7.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_TB (1117) </TD><TD class="mrc6c" colspan="1">     7.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     1.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_UCI_DECODER (1141) </TD><TD class="mrc6c" colspan="1">     1.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_UCI_DECODER (1142) </TD><TD class="mrc6c" colspan="1">     1.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUSCH_UCI_DECODER (1143) </TD><TD class="mrc6c" colspan="1">     1.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUSCH_UCI_DECODER (1144) </TD><TD class="mrc6c" colspan="1">     1.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUSCH_UCI_DECODER (1145) </TD><TD class="mrc6c" colspan="1">     1.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUSCH_UCI_DECODER (1146) </TD><TD class="mrc6c" colspan="1">     1.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUSCH_UCI_DECODER (1147) </TD><TD class="mrc6c" colspan="1">     1.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUSCH_UCI_DECODER (1148) </TD><TD class="mrc6c" colspan="1">     1.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUSCH_UCI_DECODER (1149) </TD><TD class="mrc6c" colspan="1">     1.50</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUSCH_UCI_DECODER (1150) </TD><TD class="mrc6c" colspan="1">     1.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUSCH_UCI_DECODER (1151) </TD><TD class="mrc6c" colspan="1">     1.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUSCH_UCI_DECODER (1152) </TD><TD class="mrc6c" colspan="1">     1.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUSCH_UCI_DECODER (1153) </TD><TD class="mrc6c" colspan="1">     1.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUSCH_UCI_DECODER (1154) </TD><TD class="mrc6c" colspan="1">     1.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUSCH_UCI_DECODER (1155) </TD><TD class="mrc6c" colspan="1">     1.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUSCH_UCI_DECODER (1156) </TD><TD class="mrc6c" colspan="1">     1.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUSCH_UCI_DECODER (1157) </TD><TD class="mrc6c" colspan="1">     1.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    76.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUCCH_RX (1181) </TD><TD class="mrc6c" colspan="1">    76.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUCCH_RX (1182) </TD><TD class="mrc6c" colspan="1">    76.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PUCCH_RX (1183) </TD><TD class="mrc6c" colspan="1">    75.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PUCCH_RX (1184) </TD><TD class="mrc6c" colspan="1">    73.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PUCCH_RX (1185) </TD><TD class="mrc6c" colspan="1">    72.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PUCCH_RX (1186) </TD><TD class="mrc6c" colspan="1">    69.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PUCCH_RX (1187) </TD><TD class="mrc6c" colspan="1">    69.22</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PUCCH_RX (1188) </TD><TD class="mrc6c" colspan="1">    68.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PUCCH_RX (1189) </TD><TD class="mrc6c" colspan="1">    68.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PUCCH_RX (1190) </TD><TD class="mrc6c" colspan="1">    68.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PUCCH_RX (1191) </TD><TD class="mrc6c" colspan="1">    68.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PUCCH_RX (1192) </TD><TD class="mrc6c" colspan="1">    67.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PUCCH_RX (1193) </TD><TD class="mrc6c" colspan="1">    67.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PUCCH_RX (1194) </TD><TD class="mrc6c" colspan="1">    64.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PUCCH_RX (1195) </TD><TD class="mrc6c" colspan="1">    64.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PUCCH_RX (1196) </TD><TD class="mrc6c" colspan="1">    64.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PUCCH_RX (1197) </TD><TD class="mrc6c" colspan="1">    63.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PRACH_PROCESS (1221) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PRACH_PROCESS (1222) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_PRACH_PROCESS (1223) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_PRACH_PROCESS (1224) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_PRACH_PROCESS (1225) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_PRACH_PROCESS (1226) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_PRACH_PROCESS (1227) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_PRACH_PROCESS (1228) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_PRACH_PROCESS (1229) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_PRACH_PROCESS (1230) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_PRACH_PROCESS (1231) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_PRACH_PROCESS (1232) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_PRACH_PROCESS (1233) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_PRACH_PROCESS (1234) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_PRACH_PROCESS (1235) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_PRACH_PROCESS (1236) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_PRACH_PROCESS (1237) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_RX (1261) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_RX (1262) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_RX (1263) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_RX (1264) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_RX (1265) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_RX (1266) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_RX (1267) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_RX (1268) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_RX (1269) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_RX (1270) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_RX (1271) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_RX (1272) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_RX (1273) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_RX (1274) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_RX (1275) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_SRS_RX (1276) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_SRS_RX (1277) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE (1300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE (1301) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE (1302) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_CE (1303) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_CE (1304) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_CE (1305) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_CE (1306) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_CE (1307) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_CE (1308) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_CE (1309) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_CE (1310) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_CE (1311) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_CE (1312) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_CE (1313) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_CE (1314) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_CE (1315) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_SRS_CE (1316) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_SRS_CE (1317) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_CB_SETUP (1341) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_CB_SETUP (1342) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_FFT_CB_SETUP (1343) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_FFT_CB_SETUP (1344) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_FFT_CB_SETUP (1345) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_FFT_CB_SETUP (1346) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_FFT_CB_SETUP (1347) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_FFT_CB_SETUP (1348) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_FFT_CB_SETUP (1349) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_FFT_CB_SETUP (1350) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_FFT_CB_SETUP (1351) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_FFT_CB_SETUP (1352) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_FFT_CB_SETUP (1353) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_FFT_CB_SETUP (1354) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_FFT_CB_SETUP (1355) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_SRS_FFT_CB_SETUP (1356) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_SRS_FFT_CB_SETUP (1357) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_RUN_FUNC (1381) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_RUN_FUNC (1382) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_FFT_RUN_FUNC (1383) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_FFT_RUN_FUNC (1384) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_FFT_RUN_FUNC (1385) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_FFT_RUN_FUNC (1386) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_FFT_RUN_FUNC (1387) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_FFT_RUN_FUNC (1388) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_FFT_RUN_FUNC (1389) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_FFT_RUN_FUNC (1390) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_FFT_RUN_FUNC (1391) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_FFT_RUN_FUNC (1392) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_FFT_RUN_FUNC (1393) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_FFT_RUN_FUNC (1394) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_FFT_RUN_FUNC (1395) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_SRS_FFT_RUN_FUNC (1396) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_SRS_FFT_RUN_FUNC (1397) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE_POST (1421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE_POST (1422) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_CE_POST (1423) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_CE_POST (1424) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_CE_POST (1425) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_CE_POST (1426) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_CE_POST (1427) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_CE_POST (1428) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_CE_POST (1429) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_CE_POST (1430) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_CE_POST (1431) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_CE_POST (1432) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_CE_POST (1433) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_CE_POST (1434) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_CE_POST (1435) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_SRS_CE_POST (1436) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_SRS_CE_POST (1437) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_REPORT (1460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_REPORT (1461) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_REPORT (1462) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_SRS_REPORT (1463) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_SRS_REPORT (1464) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_SRS_REPORT (1465) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_SRS_REPORT (1466) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_SRS_REPORT (1467) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_SRS_REPORT (1468) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_SRS_REPORT (1469) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_SRS_REPORT (1470) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_SRS_REPORT (1471) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_SRS_REPORT (1472) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_SRS_REPORT (1473) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_SRS_REPORT (1474) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_SRS_REPORT (1475) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_SRS_REPORT (1476) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_SRS_REPORT (1477) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.72</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_POST (1501) </TD><TD class="mrc6c" colspan="1">     9.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_POST (1502) </TD><TD class="mrc6c" colspan="1">     9.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_POST (1503) </TD><TD class="mrc6c" colspan="1">     8.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_POST (1504) </TD><TD class="mrc6c" colspan="1">     7.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_POST (1505) </TD><TD class="mrc6c" colspan="1">     8.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_POST (1506) </TD><TD class="mrc6c" colspan="1">     8.68</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_POST (1507) </TD><TD class="mrc6c" colspan="1">     8.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_POST (1508) </TD><TD class="mrc6c" colspan="1">     7.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_POST (1509) </TD><TD class="mrc6c" colspan="1">     7.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_POST (1510) </TD><TD class="mrc6c" colspan="1">     7.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_POST (1511) </TD><TD class="mrc6c" colspan="1">     8.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_POST (1512) </TD><TD class="mrc6c" colspan="1">     7.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_POST (1513) </TD><TD class="mrc6c" colspan="1">     7.20</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_POST (1514) </TD><TD class="mrc6c" colspan="1">     7.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_POST (1515) </TD><TD class="mrc6c" colspan="1">     7.68</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_POST (1516) </TD><TD class="mrc6c" colspan="1">     7.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_POST (1517) </TD><TD class="mrc6c" colspan="1">     7.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_TASK (1541) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_TASK (1542) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_BEAM_WEIGHT_TASK (1543) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_BEAM_WEIGHT_TASK (1544) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_BEAM_WEIGHT_TASK (1545) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_BEAM_WEIGHT_TASK (1546) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_BEAM_WEIGHT_TASK (1547) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_BEAM_WEIGHT_TASK (1548) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_BEAM_WEIGHT_TASK (1549) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_BEAM_WEIGHT_TASK (1550) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_BEAM_WEIGHT_TASK (1551) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_BEAM_WEIGHT_TASK (1552) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_BEAM_WEIGHT_TASK (1553) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_BEAM_WEIGHT_TASK (1554) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_BEAM_WEIGHT_TASK (1555) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_BEAM_WEIGHT_TASK (1556) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_BEAM_WEIGHT_TASK (1557) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_TASK (1581) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_TASK (1582) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_BEAM_WEIGHT_TASK (1583) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_BEAM_WEIGHT_TASK (1584) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_BEAM_WEIGHT_TASK (1585) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_BEAM_WEIGHT_TASK (1586) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_BEAM_WEIGHT_TASK (1587) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_BEAM_WEIGHT_TASK (1588) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_BEAM_WEIGHT_TASK (1589) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_BEAM_WEIGHT_TASK (1590) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_BEAM_WEIGHT_TASK (1591) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_BEAM_WEIGHT_TASK (1592) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_BEAM_WEIGHT_TASK (1593) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_BEAM_WEIGHT_TASK (1594) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_BEAM_WEIGHT_TASK (1595) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_BEAM_WEIGHT_TASK (1596) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_BEAM_WEIGHT_TASK (1597) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1621) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1622) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1623) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1624) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1625) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1626) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1627) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1628) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1629) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1630) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1631) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1632) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1633) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1634) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1635) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1636) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1637) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_ORAN (1661) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_ORAN (1662) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_ORAN (1663) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_ORAN (1664) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_ORAN (1665) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_ORAN (1666) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_ORAN (1667) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_ORAN (1668) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_ORAN (1669) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_ORAN (1670) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_ORAN (1671) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_ORAN (1672) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_ORAN (1673) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_ORAN (1674) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_ORAN (1675) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_ORAN (1676) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_ORAN (1677) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_IQ_COMPRESS (1701) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_IQ_COMPRESS (1702) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_IQ_COMPRESS (1703) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_IQ_COMPRESS (1704) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_IQ_COMPRESS (1705) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_IQ_COMPRESS (1706) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_IQ_COMPRESS (1707) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_IQ_COMPRESS (1708) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_IQ_COMPRESS (1709) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_IQ_COMPRESS (1710) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_IQ_COMPRESS (1711) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_IQ_COMPRESS (1712) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_IQ_COMPRESS (1713) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_IQ_COMPRESS (1714) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_IQ_COMPRESS (1715) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_IQ_COMPRESS (1716) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_IQ_COMPRESS (1717) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMPRESS (1741) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMPRESS (1742) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_IQ_DECOMPRESS (1743) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_IQ_DECOMPRESS (1744) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_IQ_DECOMPRESS (1745) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_IQ_DECOMPRESS (1746) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_IQ_DECOMPRESS (1747) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_IQ_DECOMPRESS (1748) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_IQ_DECOMPRESS (1749) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_IQ_DECOMPRESS (1750) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_IQ_DECOMPRESS (1751) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_IQ_DECOMPRESS (1752) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_IQ_DECOMPRESS (1753) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_IQ_DECOMPRESS (1754) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_IQ_DECOMPRESS (1755) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_IQ_DECOMPRESS (1756) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_IQ_DECOMPRESS (1757) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_COMPRESS (1781) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_COMPRESS (1782) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_BEAM_WEIGHT_COMPRESS (1783) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_BEAM_WEIGHT_COMPRESS (1784) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_BEAM_WEIGHT_COMPRESS (1785) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_BEAM_WEIGHT_COMPRESS (1786) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_BEAM_WEIGHT_COMPRESS (1787) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_BEAM_WEIGHT_COMPRESS (1788) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_BEAM_WEIGHT_COMPRESS (1789) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_BEAM_WEIGHT_COMPRESS (1790) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_BEAM_WEIGHT_COMPRESS (1791) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_BEAM_WEIGHT_COMPRESS (1792) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_BEAM_WEIGHT_COMPRESS (1793) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_BEAM_WEIGHT_COMPRESS (1794) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_BEAM_WEIGHT_COMPRESS (1795) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_BEAM_WEIGHT_COMPRESS (1796) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_BEAM_WEIGHT_COMPRESS (1797) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_COMPRESS (1821) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_COMPRESS (1822) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_BEAM_WEIGHT_COMPRESS (1823) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_BEAM_WEIGHT_COMPRESS (1824) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_BEAM_WEIGHT_COMPRESS (1825) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_BEAM_WEIGHT_COMPRESS (1826) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_BEAM_WEIGHT_COMPRESS (1827) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_BEAM_WEIGHT_COMPRESS (1828) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_BEAM_WEIGHT_COMPRESS (1829) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_BEAM_WEIGHT_COMPRESS (1830) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_BEAM_WEIGHT_COMPRESS (1831) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_BEAM_WEIGHT_COMPRESS (1832) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_BEAM_WEIGHT_COMPRESS (1833) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_BEAM_WEIGHT_COMPRESS (1834) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_BEAM_WEIGHT_COMPRESS (1835) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_BEAM_WEIGHT_COMPRESS (1836) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_BEAM_WEIGHT_COMPRESS (1837) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_SRS_IQ_DECOMPRESS (1861) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_SRS_IQ_DECOMPRESS (1862) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_SRS_IQ_DECOMPRESS (1863) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_SRS_IQ_DECOMPRESS (1864) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_SRS_IQ_DECOMPRESS (1865) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_SRS_IQ_DECOMPRESS (1866) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_SRS_IQ_DECOMPRESS (1867) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_SRS_IQ_DECOMPRESS (1868) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_SRS_IQ_DECOMPRESS (1869) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_SRS_IQ_DECOMPRESS (1870) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_SRS_IQ_DECOMPRESS (1871) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_SRS_IQ_DECOMPRESS (1872) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_SRS_IQ_DECOMPRESS (1873) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_SRS_IQ_DECOMPRESS (1874) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_SRS_IQ_DECOMPRESS (1875) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_SRS_IQ_DECOMPRESS (1876) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_SRS_IQ_DECOMPRESS (1877) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_CTRL_COMPRESS (1901) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_CTRL_COMPRESS (1902) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_OFDM_CTRL_COMPRESS (1903) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_OFDM_CTRL_COMPRESS (1904) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_OFDM_CTRL_COMPRESS (1905) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_OFDM_CTRL_COMPRESS (1906) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_OFDM_CTRL_COMPRESS (1907) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_OFDM_CTRL_COMPRESS (1908) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_OFDM_CTRL_COMPRESS (1909) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_OFDM_CTRL_COMPRESS (1910) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_OFDM_CTRL_COMPRESS (1911) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_OFDM_CTRL_COMPRESS (1912) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_OFDM_CTRL_COMPRESS (1913) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_OFDM_CTRL_COMPRESS (1914) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_OFDM_CTRL_COMPRESS (1915) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_OFDM_CTRL_COMPRESS (1916) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_OFDM_CTRL_COMPRESS (1917) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_RS_COMPRESS (1941) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_RS_COMPRESS (1942) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_OFDM_RS_COMPRESS (1943) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_OFDM_RS_COMPRESS (1944) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_OFDM_RS_COMPRESS (1945) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_OFDM_RS_COMPRESS (1946) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_OFDM_RS_COMPRESS (1947) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_OFDM_RS_COMPRESS (1948) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_OFDM_RS_COMPRESS (1949) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_OFDM_RS_COMPRESS (1950) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_OFDM_RS_COMPRESS (1951) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_OFDM_RS_COMPRESS (1952) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_OFDM_RS_COMPRESS (1953) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_OFDM_RS_COMPRESS (1954) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_OFDM_RS_COMPRESS (1955) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_OFDM_RS_COMPRESS (1956) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_OFDM_RS_COMPRESS (1957) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_DATA_COMPRESS (1981) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_DATA_COMPRESS (1982) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_DL_OFDM_DATA_COMPRESS (1983) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_DL_OFDM_DATA_COMPRESS (1984) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_DL_OFDM_DATA_COMPRESS (1985) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_DL_OFDM_DATA_COMPRESS (1986) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_DL_OFDM_DATA_COMPRESS (1987) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_DL_OFDM_DATA_COMPRESS (1988) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_DL_OFDM_DATA_COMPRESS (1989) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_DL_OFDM_DATA_COMPRESS (1990) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_DL_OFDM_DATA_COMPRESS (1991) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_DL_OFDM_DATA_COMPRESS (1992) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_DL_OFDM_DATA_COMPRESS (1993) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_DL_OFDM_DATA_COMPRESS (1994) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_DL_OFDM_DATA_COMPRESS (1995) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_DL_OFDM_DATA_COMPRESS (1996) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_DL_OFDM_DATA_COMPRESS (1997) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUSCH (2021) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUSCH (2022) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_IQ_DECOMP_PUSCH (2023) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_IQ_DECOMP_PUSCH (2024) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_IQ_DECOMP_PUSCH (2025) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_IQ_DECOMP_PUSCH (2026) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_IQ_DECOMP_PUSCH (2027) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_IQ_DECOMP_PUSCH (2028) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_IQ_DECOMP_PUSCH (2029) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_IQ_DECOMP_PUSCH (2030) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_IQ_DECOMP_PUSCH (2031) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_IQ_DECOMP_PUSCH (2032) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_IQ_DECOMP_PUSCH (2033) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_IQ_DECOMP_PUSCH (2034) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_IQ_DECOMP_PUSCH (2035) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_IQ_DECOMP_PUSCH (2036) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_IQ_DECOMP_PUSCH (2037) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUCCH (2061) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUCCH (2062) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC03_GNB_UL_IQ_DECOMP_PUCCH (2063) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC04_GNB_UL_IQ_DECOMP_PUCCH (2064) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC05_GNB_UL_IQ_DECOMP_PUCCH (2065) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC06_GNB_UL_IQ_DECOMP_PUCCH (2066) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC07_GNB_UL_IQ_DECOMP_PUCCH (2067) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC08_GNB_UL_IQ_DECOMP_PUCCH (2068) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC09_GNB_UL_IQ_DECOMP_PUCCH (2069) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC10_GNB_UL_IQ_DECOMP_PUCCH (2070) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC11_GNB_UL_IQ_DECOMP_PUCCH (2071) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC12_GNB_UL_IQ_DECOMP_PUCCH (2072) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC13_GNB_UL_IQ_DECOMP_PUCCH (2073) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC14_GNB_UL_IQ_DECOMP_PUCCH (2074) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC15_GNB_UL_IQ_DECOMP_PUCCH (2075) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC16_GNB_UL_IQ_DECOMP_PUCCH (2076) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC17_GNB_UL_IQ_DECOMP_PUCCH (2077) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR><TH class="mrc7b"></TH><TH class="mrc7" colspan="1"></TH></TR> </TABLE>
 </DIV>

   \endhtmlonly
 <BR/><BR/>

 </DIV>
**/



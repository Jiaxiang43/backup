/*******************************************************************************
 *
 * <COPYRIGHT_TAG>
 *
 *******************************************************************************/

/**
 * @brief Performance report for ref_sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton
 * @file ref_sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton.c
 * @author Intel Corporation
 **/


/**
 @page ref_sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton 4th Generation Intel&reg; Xeon&reg; Scalable Processor Eec Mu1 100Mhz Mmimo 64X64 8Stream Hton

 <DIV style = "text-align:justify; ">

 <TABLE cellspacing = "0" cellpadding = "2" border = "1" class="mrcTableBorderClass">
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Test File Name:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton]</B><BR/>
   - sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton.cfg<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Platform Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton]</B><BR/>
   - <B>COMPILED WITH</B>: clang 16.0.0 (icx 2023.0.0.20221201)<BR/>
   - <B>COMPILE DATE</B>: Mar 30 2023<BR/>
   - <B>COMPILE TIME</B>: 23:00:12<BR/>
   - <B>Architecture</B>:        x86_64<BR/>
   - <B>CPU op-mode(s)</B>:      32-bit, 64-bit<BR/>
   - <B>Byte Order</B>:          Little Endian<BR/>
   - <B>CPU(s)</B>:              40<BR/>
   - <B>On-line CPU(s) list</B>: 0-39<BR/>
   - <B>Thread(s) per core</B>:  2<BR/>
   - <B>Core(s) per socket</B>:  20<BR/>
   - <B>Socket(s)</B>:           1<BR/>
   - <B>NUMA node(s)</B>:        1<BR/>
   - <B>Vendor ID</B>:           GenuineIntel<BR/>
   - <B>BIOS Vendor ID</B>:      Intel(R) Corporation<BR/>
   - <B>CPU family</B>:          6<BR/>
   - <B>Model</B>:               143<BR/>
   - <B>Model name</B>:          Genuine Intel(R) CPU 0000%@<BR/>
   - <B>BIOS Model name</B>:     Genuine Intel(R) CPU 0000%@<BR/>
   - <B>Stepping</B>:            5<BR/>
   - <B>CPU MHz</B>:             3199.771<BR/>
   - <B>CPU max MHz</B>:         4100.0000<BR/>
   - <B>CPU min MHz</B>:         800.0000<BR/>
   - <B>BogoMIPS</B>:            3200.00<BR/>
   - <B>Virtualization</B>:      VT-x<BR/>
   - <B>L1d cache</B>:           48K<BR/>
   - <B>L1i cache</B>:           32K<BR/>
   - <B>L2 cache</B>:            2048K<BR/>
   - <B>L3 cache</B>:            38400K<BR/>
   - <B>NUMA node0 CPU(s)</B>:   0-39<BR/>
   - <B>Flags</B>:               fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid dca sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb cat_l3 cat_l2 cdp_l3 invpcid_single cdp_l2 ssbd mba ibrs ibpb stibp ibrs_enhanced tpr_shadow vnmi flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid cqm rdt_a avx512f avx512dq rdseed adx smap avx512ifma clflushopt clwb intel_pt avx512cd sha_ni avx512bw avx512vl xsaveopt xsavec xgetbv1 xsaves cqm_llc cqm_occup_llc cqm_mbm_total cqm_mbm_local split_lock_detect avx_vnni avx512_bf16 wbnoinvd dtherm ida arat pln pts hwp hwp_act_window hwp_pkg_req hfi avx512vbmi umip pku ospke waitpkg avx512_vbmi2 gfni v<BR/>
aes vpclmulqdq avx512_vnni avx512_bitalg tme avx512_vpopcntdq la57 rdpid bus_lock_detect cldemote movdiri movdir64b enqcmd fsrm md_clear serialize tsxldtrk pconfig arch_lbr amx_bf16 avx512_fp16 amx_tile amx_int8 flush_l1d arch_capabilities<BR/>
   - <B>TSC Frequency</B>: 1599 MHz<BR/>
   - <B>FEC Offload</B>: UNKNOWN<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">OS Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton]</B><BR/>
   - <B>Command Line Params</B>:BOOT_IMAGE=(hd1,gpt2)/vmlinuz-4.18.0-425.13.1.rt7.223.el8_7.x86_64 root=UUID=767de6a5-1af7-4d43-b6bf-71e99a5083a1 ro intel_iommu=on iommu=pt usbcore.autosuspend=-1 selinux=0 enforcing=0 nmi_watchdog=0 crashkernel=auto softlockup_panic=0 audit=0 mce=off hugepagesz=1G hugepages=60 hugepagesz=2M hugepages=0 default_hugepagesz=1G kthread_cpus=0-5,20-25 irqaffinity=0-5,20-25 skew_tick=1 isolcpus=managed_irq,domain,6-19,26-39 nohz_full=6-19,26-39 rcu_nocbs=6-19,26-39 rcu_nocb_poll intel_pstate=disable nohz=on nosoftlockup tsc=nowatchdog<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">BIOS Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton]</B><BR/>
   - <B>	Vendor</B>: Intel Corporation<BR/>
   - <B>	Version</B>: EGSDCRB1.86B.9409.P15.2301131123<BR/>
   - <B>	Release Date</B>: 01/13/2023<BR/>
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
Handle 0x0007, DMI type 13, 22 bytes<BR/>
BIOS Language Information<BR/>
   - <B>	Language Description Format</B>: Abbreviated<BR/>
   - <B>	Installable Languages</B>: 1<BR/>
		enUS<BR/>
   - <B>	Currently Installed Language</B>: enUS<BR/>
   - <B>microcode	</B>: 0xab000190<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Memory Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton]</B><BR/>
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
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 0<BR/>
     <B>Locator:</B>  CPU0_DIMM_B1<BR/>
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 1<BR/>
     <B>Locator:</B>  CPU0_DIMM_C1<BR/>
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 1<BR/>
     <B>Locator:</B>  CPU0_DIMM_D1<BR/>
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 2<BR/>
     <B>Locator:</B>  CPU0_DIMM_E1<BR/>
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 2<BR/>
     <B>Locator:</B>  CPU0_DIMM_F1<BR/>
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 3<BR/>
     <B>Locator:</B>  CPU0_DIMM_G1<BR/>
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 <TR>
  <TD class="mrcMemory">
     <B>Bank</B>: NODE 3<BR/>
     <B>Locator:</B>  CPU0_DIMM_H1<BR/>
     <B>Manufacturer:</B> Hynix<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Type:</B> DDR5<BR/>
     <B>Type Details:</B> Synchronous Registered (Buffered)<BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Speed:</B> 4000 MT/s<BR/>
     <B>Configured Clock Speed:</B> <BR/>
 </TD>
  <TD class="mrcMemory">
     <B>Size:</B> 16 GB<BR/>
     <B>Rank:</B> 1<BR/>
 </TD>
 </TR>
 </TABLE>
 </DIV>
 </TD>
 </TR>
 \htmlonly

 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Turbostat Output:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_64x64_8stream_hton]</B><BR/><BR/>
<DIV class="turbostat">
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;Core &nbsp;&nbsp;CPU Avg_MHz &nbsp;&nbsp;Busy% Bzy_MHz TSC_MHz &nbsp;&nbsp;IPC &nbsp;&nbsp;IRQ &nbsp;&nbsp;SMI &nbsp;&nbsp;POLL &nbsp;&nbsp;C1 &nbsp;&nbsp;C6 &nbsp;&nbsp;POLL% &nbsp;&nbsp;C1% &nbsp;&nbsp;C6% CPU%c1 CPU%c6 CoreTmp PkgTmp PkgWatt RAMWatt &nbsp;&nbsp;PKG_% &nbsp;&nbsp;RAM_%</B><BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- &nbsp;&nbsp;&nbsp;&nbsp;- </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;0.24 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.71 10908 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;13 13964 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.80 &nbsp;0.00 &nbsp;99.76 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;37 &nbsp;&nbsp;&nbsp;&nbsp;37 &nbsp;104.86 &nbsp;&nbsp;&nbsp;1.88 &nbsp;100.07 &nbsp;&nbsp;&nbsp;0.00<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;0 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;35 &nbsp;&nbsp;&nbsp;1.10 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.11 &nbsp;1958 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 1973 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 98.98 &nbsp;0.00 &nbsp;98.90 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33 &nbsp;&nbsp;&nbsp;&nbsp;37 &nbsp;104.66 &nbsp;&nbsp;&nbsp;1.87 &nbsp;&nbsp;99.88 &nbsp;&nbsp;&nbsp;0.00<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;20 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;84 &nbsp;&nbsp;&nbsp;2.61 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;2.82 &nbsp;&nbsp;300 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;360 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 97.40 &nbsp;0.00 &nbsp;97.39<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;&nbsp;1 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;20 &nbsp;&nbsp;&nbsp;0.63 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.11 &nbsp;&nbsp;846 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 2831 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 99.50 &nbsp;0.00 &nbsp;99.37 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;21 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;46 &nbsp;&nbsp;&nbsp;1.44 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.39 &nbsp;1091 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1768 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 98.64 &nbsp;0.00 &nbsp;98.56<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;2 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10 &nbsp;&nbsp;&nbsp;0.31 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.16 &nbsp;&nbsp;406 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;906 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.73 &nbsp;0.00 &nbsp;99.69 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;22 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;15 &nbsp;&nbsp;&nbsp;0.46 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.18 &nbsp;&nbsp;839 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1281 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.59 &nbsp;0.00 &nbsp;99.54<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;3 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;0.22 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.02 &nbsp;&nbsp;306 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;456 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 99.80 &nbsp;0.00 &nbsp;99.78 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;31<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;23 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;17 &nbsp;&nbsp;&nbsp;0.53 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.20 &nbsp;1045 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1722 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.54 &nbsp;0.00 &nbsp;99.47<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &nbsp;&nbsp;&nbsp;&nbsp;4 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;0.06 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.06 &nbsp;&nbsp;125 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;81 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.02 99.94 &nbsp;0.00 &nbsp;99.94 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;37<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &nbsp;&nbsp;&nbsp;24 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;&nbsp;0.28 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.18 &nbsp;&nbsp;492 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;734 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.75 &nbsp;0.00 &nbsp;99.72<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &nbsp;&nbsp;&nbsp;&nbsp;5 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;53 &nbsp;&nbsp;&nbsp;1.65 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.52 &nbsp;&nbsp;829 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1243 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 98.40 &nbsp;0.00 &nbsp;98.35 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;35<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &nbsp;&nbsp;&nbsp;25 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;0.22 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.13 &nbsp;&nbsp;348 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;525 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.80 &nbsp;0.00 &nbsp;99.78<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 &nbsp;&nbsp;&nbsp;&nbsp;6 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.50 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 &nbsp;&nbsp;&nbsp;26 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.70 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;&nbsp;7 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.49 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;27 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.66 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;&nbsp;8 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.57 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;28 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.75 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;&nbsp;&nbsp;9 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;&nbsp;29 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.72 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;10 &nbsp;&nbsp;&nbsp;10 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.58 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;35<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;10 &nbsp;&nbsp;&nbsp;30 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.73 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;11 &nbsp;&nbsp;&nbsp;11 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3202 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;11 &nbsp;&nbsp;&nbsp;31 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.75 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;12 &nbsp;&nbsp;&nbsp;12 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3202 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;12 &nbsp;&nbsp;&nbsp;32 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3202 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;13 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.58 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;31<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;33 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;14 &nbsp;&nbsp;&nbsp;14 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.57 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;14 &nbsp;&nbsp;&nbsp;34 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.76 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;15 &nbsp;&nbsp;&nbsp;15 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;15 &nbsp;&nbsp;&nbsp;35 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;16 &nbsp;&nbsp;&nbsp;16 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.58 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;16 &nbsp;&nbsp;&nbsp;36 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3202 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;17 &nbsp;&nbsp;&nbsp;17 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3198 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.57 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;35<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;17 &nbsp;&nbsp;&nbsp;37 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;18 &nbsp;&nbsp;&nbsp;18 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.58 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;18 &nbsp;&nbsp;&nbsp;38 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.75 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;19 &nbsp;&nbsp;&nbsp;19 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.50 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;19 &nbsp;&nbsp;&nbsp;39 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;0.04 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;3.41 &nbsp;&nbsp;&nbsp;82 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.96 &nbsp;0.00 &nbsp;99.96<BR/>
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
       <option value="0" >1 Cell Test(s)</option>
       <option value="1" >2 Cell Test(s)</option>
       <option value="2" selected>3 Cell Test(s)</option>
   </SELECT>

   <BR/><BR/>

 <H2 id="mrcPipelineHeader">3 Cell Test(s)</H2>

 <H3>All function break-down numbers in table are in usecs per cell (logical core)</H3>

 <BUTTON id="mrcPipelineButton" class="buttonClass" onclick="myPipeLineButton()">Export table to CSV file</BUTTON><BR/><BR/><BR/>

<B style="color:red;">All numbers in table below are for L1 functionality only. L2 and above will cost additional cycles based on number of connected users per cell and cell throughput.</B><BR/>
<B style="color:red;">These numbers do not include overhead of OS / DPDK polling / FEC polling / L1 - L2 interface polling / Virtualization overheads.</B><BR/>
<B style="color:red;">These tests have clean UL IQ samples with very high SNR. The LDPC iterations are configured with fields "Num FEC DEC iteration" and "FEC DEC early termination enabled" in each test</B><BR/>
<B style="color:red;">In all of the performance benchmarking tests we have early termination enabled and hence only 1-2 decoder instances are exercised.</B><BR/>
<B style="color:red;">For tests with C6 enabled in BIOS, the OS kernel has been optimized such that active cores will at best go to C1 state and return back to C0. Only inactive cores are allowed to fall back to C6 state.</B><BR/>
<BR/><BR/>
<B style="color:blue; font-size:18px;">In the table below, to navigate left and right in the data region:<UL><LI>Move the mouse cursor over the data area</LI><LI>Hold the shift key on keyboard</LI><LI>Use the scroll wheel on the mouse to move the table left and right</LI></UL></B><BR/>
 <DIV class="tablediv" style="display:none;" id="mrcPipelineDiv0">
 <TABLE cellspacing = "0" cellpadding = "2" border = "0" class="mrcPipelineTableBorderClass" style="display:none;" id="mrcPipelineTable0">
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_1375</TD><TD class="mrc0tc" colspan="1">FD_1377</TD><TD class="mrc0tc" colspan="1">FD_1374</TD><TD class="mrc0tc" colspan="1">FD_1376</TD><TD class="mrc0tc" colspan="1">FD_1378</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">TEST INFO:<BR/>Num Cells<BR/>TestFileName (Cell0)<BR/><BR/><BR/><BR/>FrameType (Cell0)</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>375/fd_testcon<BR/>fig_tst375.cfg<BR/><BR/>DDDSU</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>377/fd_testcon<BR/>fig_tst377.cfg<BR/><BR/>DDDSU</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>374/fd_testcon<BR/>fig_tst374.cfg<BR/><BR/>DDDSU</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>376/fd_testcon<BR/>fig_tst376.cfg<BR/><BR/>DDDSU</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>378/fd_testcon<BR/>fig_tst378.cfg<BR/><BR/>DDDSU</TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_1375</TD><TD class="mrc1tc" colspan="1">FD_1377</TD><TD class="mrc1tc" colspan="1">FD_1374</TD><TD class="mrc1tc" colspan="1">FD_1376</TD><TD class="mrc1tc" colspan="1">FD_1378</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc1">OPTIONS:<BR/>
  PDSCH split<BR/>PDSCH Symbol Proc<BR/>PDSCH Beam Weight split<BR/>
  PUSCH CE split<BR/>PUSCH MMSE split<BR/>PUSCH LLR split<BR/>PUSCH Beam Weight split<BR/>PUSCH CE Freq Interpolation<BR/>PUSCH CE Time Interpolation (Per Cell)<BR/>
  PUCCH split<BR/>SRS split<BR/>PDSCH Memset Opt<BR/>BBU Sleep Enable<BR/>
  FEC ENC split<BR/>FEC DEC split<BR/>Num FEC DEC iteration<BR/>FEC DEC early termination enabled<BR/>
  eBBUPool Queue<BR/>eBBUPool Context<BR/>eBBUPool Max Fetch<BR/>
  </TD>
<TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
1<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
2<BR/>1<BR/>2<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>99<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>3<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
2<BR/>1<BR/>2<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>99<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>3<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
2<BR/>1<BR/>2<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>2<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 60207</TD><TD class="mrc1c" colspan="1">1 1 60207</TD><TD class="mrc1c" colspan="1">1 1 60207</TD><TD class="mrc1c" colspan="1">1 1 60207</TD><TD class="mrc1c" colspan="1">1 1 60207</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">2.0 / 1.0</TD><TD class="mrc1c" colspan="1">2.0 / 1.0</TD><TD class="mrc1c" colspan="1">6.0 / 3.0</TD><TD class="mrc1c" colspan="1">6.0 / 3.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">2.0 / 1.0</TD><TD class="mrc1lc" colspan="1">2.0 / 1.0</TD><TD class="mrc1lc" colspan="1">6.0 / 3.0</TD><TD class="mrc1lc" colspan="1">6.0 / 3.0</TD><TD class="mrc1lc" colspan="1">4.0 / 2.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>01000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>01000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>07000070</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>07000070</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000030</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="5">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_1375</TD><TD class="mrc2c" colspan="1">FD_1377</TD><TD class="mrc2c" colspan="1">FD_1374</TD><TD class="mrc2c" colspan="1">FD_1376</TD><TD class="mrc2c" colspan="1">FD_1378</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">32%</TD><TD class="mrc6" colspan="1">30%</TD><TD class="mrc6" colspan="1">39%</TD><TD class="mrc6" colspan="1">40%</TD><TD class="mrc6" colspan="1">26%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">32% on 2 C<BR/> <B style="color:blue;">(64%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">30% on 2 C<BR/> <B style="color:blue;">(60%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">39% on 6 C<BR/> <B style="color:blue;">(234%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">40% on 6 C<BR/> <B style="color:blue;">(240%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">26% on 4 C<BR/> <B style="color:blue;">(104%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="5">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_1375_MU1</TD><TD class="mrc2nc">FD_1377_MU1</TD><TD class="mrc2nc">FD_1374_MU1</TD><TD class="mrc2nc">FD_1376_MU1</TD><TD class="mrc2nc">FD_1378_MU1</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.32<BR/>(     0.16 <I>Phys</I> )</TD><TD class="mrc6">     0.28<BR/>(     0.14 <I>Phys</I> )</TD><TD class="mrc6">     1.21<BR/>(     0.61 <I>Phys</I> )</TD><TD class="mrc6">     1.29<BR/>(     0.64 <I>Phys</I> )</TD><TD class="mrc6">     0.53<BR/>(     0.26 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.62<BR/>(     0.31 <I>Phys</I> )</TD><TD class="mrc6">     0.63<BR/>(     0.31 <I>Phys</I> )</TD><TD class="mrc6">     3.17<BR/>(     1.59 <I>Phys</I> )</TD><TD class="mrc6">     3.21<BR/>(     1.61 <I>Phys</I> )</TD><TD class="mrc6">     1.17<BR/>(     0.58 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.33<BR/>(     0.17 <I>Phys</I> )</TD><TD class="mrc6">     0.33<BR/>(     0.17 <I>Phys</I> )</TD><TD class="mrc6">     0.42<BR/>(     0.21 <I>Phys</I> )</TD><TD class="mrc6">     0.41<BR/>(     0.20 <I>Phys</I> )</TD><TD class="mrc6">     0.37<BR/>(     0.19 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.76<BR/>(     0.38 <I>Phys</I> )</TD><TD class="mrc6">     0.76<BR/>(     0.38 <I>Phys</I> )</TD><TD class="mrc6">     0.30<BR/>(     0.15 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.08<BR/>(     0.04 <I>Phys</I> )</TD><TD class="mrc6">     0.07<BR/>(     0.04 <I>Phys</I> )</TD><TD class="mrc6">     0.24<BR/>(     0.12 <I>Phys</I> )</TD><TD class="mrc6">     0.24<BR/>(     0.12 <I>Phys</I> )</TD><TD class="mrc6">     0.12<BR/>(     0.06 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="5">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_1375_MU1</TD><TD class="mrc3cl">FD_1377_MU1</TD><TD class="mrc3cl">FD_1374_MU1</TD><TD class="mrc3cl">FD_1376_MU1</TD><TD class="mrc3cl">FD_1378_MU1</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       28%</TD><TD class="mrc6c">       25%</TD><TD class="mrc6c">       62%</TD><TD class="mrc6c">       71%</TD><TD class="mrc6c">       28%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       39%</TD><TD class="mrc6c">       37%</TD><TD class="mrc6c">       84%</TD><TD class="mrc6c">       90%</TD><TD class="mrc6c">       38%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">       59%</TD><TD class="mrc6cl">       58%</TD><TD class="mrc6cl">      103%</TD><TD class="mrc6cl">      110%</TD><TD class="mrc6cl">       46%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       60%</TD><TD class="mrc6c">       56%</TD><TD class="mrc6c">      141%</TD><TD class="mrc6c">      143%</TD><TD class="mrc6c">       86%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       63%</TD><TD class="mrc6c">       58%</TD><TD class="mrc6c">      156%</TD><TD class="mrc6c">      159%</TD><TD class="mrc6c">       91%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">       66%</TD><TD class="mrc6cl">       61%</TD><TD class="mrc6cl">      172%</TD><TD class="mrc6cl">      176%</TD><TD class="mrc6cl">       98%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency</TD><TD class="mrc6c">        1%</TD><TD class="mrc6c">        1%</TD><TD class="mrc6c">        8%</TD><TD class="mrc6c">       10%</TD><TD class="mrc6c">        3%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">       13%</TD><TD class="mrc6c">       14%</TD><TD class="mrc6c">        5%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency</TD><TD class="mrc6cl">        3%</TD><TD class="mrc6cl">        3%</TD><TD class="mrc6cl">       15%</TD><TD class="mrc6cl">       16%</TD><TD class="mrc6cl">        6%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">       13%</TD><TD class="mrc6c">       13%</TD><TD class="mrc6c">        8%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">       15%</TD><TD class="mrc6c">       15%</TD><TD class="mrc6c">        9%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency</TD><TD class="mrc6cl">        4%</TD><TD class="mrc6cl">        5%</TD><TD class="mrc6cl">       17%</TD><TD class="mrc6cl">       17%</TD><TD class="mrc6cl">       10%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="5">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_1375_MU1</B></TD><TD class="mrc4c"><B>FD_1377_MU1</B></TD><TD class="mrc4c"><B>FD_1374_MU1</B></TD><TD class="mrc4c"><B>FD_1376_MU1</B></TD><TD class="mrc4c"><B>FD_1378_MU1</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">    24.63</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     7.69</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">    17.42</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">    84.97</TD><TD class="mrc6c">    88.58</TD><TD class="mrc6c">   484.20</TD><TD class="mrc6c">   526.68</TD><TD class="mrc6c">   186.58</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">     9.47</TD><TD class="mrc6c">     9.72</TD><TD class="mrc6c">    82.70</TD><TD class="mrc6c">    92.48</TD><TD class="mrc6c">    22.97</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    14.61</TD><TD class="mrc6c">    15.19</TD><TD class="mrc6c">    41.98</TD><TD class="mrc6c">    40.85</TD><TD class="mrc6c">    21.42</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">   163.13</TD><TD class="mrc6c">   168.22</TD><TD class="mrc6c">  1518.78</TD><TD class="mrc6c">  1537.75</TD><TD class="mrc6c">   484.92</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">   109.89</TD><TD class="mrc6c">   111.29</TD><TD class="mrc6c">     3.31</TD><TD class="mrc6c">     3.31</TD><TD class="mrc6c">    57.88</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">     8.85</TD><TD class="mrc6c">     9.37</TD><TD class="mrc6c">    13.78</TD><TD class="mrc6c">    13.48</TD><TD class="mrc6c">     9.98</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">   164.96</TD><TD class="mrc6c">   165.56</TD><TD class="mrc6c">   208.84</TD><TD class="mrc6c">   204.09</TD><TD class="mrc6c">   185.78</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">    83.24</TD><TD class="mrc6c">    83.13</TD><TD class="mrc6c">   380.22</TD><TD class="mrc6c">   378.69</TD><TD class="mrc6c">   150.58</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">    38.18</TD><TD class="mrc6c">    33.35</TD><TD class="mrc6c">   119.46</TD><TD class="mrc6c">   118.53</TD><TD class="mrc6c">    58.16</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    32.95</TD><TD class="mrc6c">    30.16</TD><TD class="mrc6c">    19.49</TD><TD class="mrc6c">    18.43</TD><TD class="mrc6c">    27.01</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">    21.37</TD><TD class="mrc6c">    23.90</TD><TD class="mrc6c">    18.67</TD><TD class="mrc6c">    16.13</TD><TD class="mrc6c">    18.70</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">   756.25</TD><TD class="mrc6ct">   738.47</TD><TD class="mrc6ct">  2899.12</TD><TD class="mrc6ct">  2950.42</TD><TD class="mrc6ct">  1241.40</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="5">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_1375_MU1</TD><TD class="mrc5c">FD_1377_MU1</TD><TD class="mrc5c">FD_1374_MU1</TD><TD class="mrc5c">FD_1376_MU1</TD><TD class="mrc5c">FD_1378_MU1</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    20.91</TD><TD class="mrc6c">    17.78</TD><TD class="mrc6c">    11.34</TD><TD class="mrc6c">    10.14</TD><TD class="mrc6c">    17.22</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.04</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.37</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.15</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.29</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.79</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.25</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.49</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    42.12</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    47.86</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.06</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">     4.61</TD><TD class="mrc6c">     4.56</TD><TD class="mrc6c">    31.61</TD><TD class="mrc6c">    34.43</TD><TD class="mrc6c">     8.51</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     1.60</TD><TD class="mrc6c">     1.68</TD><TD class="mrc6c">     8.96</TD><TD class="mrc6c">    10.19</TD><TD class="mrc6c">     3.40</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.04</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.15</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    51.23</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    55.14</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    27.26</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    29.31</TD><TD class="mrc6c">    32.34</TD><TD class="mrc6c">   102.58</TD><TD class="mrc6c">   104.10</TD><TD class="mrc6c">    48.01</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">    47.62</TD><TD class="mrc6c">    49.08</TD><TD class="mrc6c">   330.39</TD><TD class="mrc6c">   367.43</TD><TD class="mrc6c">   111.31</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">    14.02</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     4.41</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     8.95</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">    10.62</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     3.28</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     8.48</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.54</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.62</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    15.97</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    13.50</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.05</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.05</TD><TD class="mrc6c">     0.07</TD><TD class="mrc6c">     0.13</TD><TD class="mrc6c">     0.11</TD><TD class="mrc6c">     0.06</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.47</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.28</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    31.63</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    33.12</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.96</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">     2.31</TD><TD class="mrc6c">     2.35</TD><TD class="mrc6c">   229.67</TD><TD class="mrc6c">   233.96</TD><TD class="mrc6c">     1.73</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">    48.44</TD><TD class="mrc6c">    57.36</TD><TD class="mrc6c">   218.85</TD><TD class="mrc6c">   211.81</TD><TD class="mrc6c">   142.11</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">     0.35</TD><TD class="mrc6c">     0.35</TD><TD class="mrc6c">   502.51</TD><TD class="mrc6c">   509.07</TD><TD class="mrc6c">     0.41</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">    95.50</TD><TD class="mrc6c">    91.85</TD><TD class="mrc6c">   465.99</TD><TD class="mrc6c">   480.33</TD><TD class="mrc6c">   303.45</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">     6.19</TD><TD class="mrc6c">     6.17</TD><TD class="mrc6c">    69.21</TD><TD class="mrc6c">    68.56</TD><TD class="mrc6c">    22.91</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.18</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.15</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.63</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.19</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.73</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     2.97</TD><TD class="mrc6c">     2.96</TD><TD class="mrc6c">    12.87</TD><TD class="mrc6c">    12.23</TD><TD class="mrc6c">     5.62</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">     8.45</TD><TD class="mrc6c">     9.08</TD><TD class="mrc6c">    16.49</TD><TD class="mrc6c">    16.42</TD><TD class="mrc6c">    10.07</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.89</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.87</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.92</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.90</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.34</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   109.89</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   111.29</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.31</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.31</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    57.88</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.85</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.37</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    13.78</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    13.48</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.98</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.24</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.53</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.12</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.21</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.24</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">   150.37</TD><TD class="mrc6c">   150.26</TD><TD class="mrc6c">   192.06</TD><TD class="mrc6c">   187.41</TD><TD class="mrc6c">   170.69</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     6.35</TD><TD class="mrc6c">     6.77</TD><TD class="mrc6c">     8.65</TD><TD class="mrc6c">     8.47</TD><TD class="mrc6c">     6.85</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.78</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    13.21</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.58</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.52</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.59</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    83.24</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    83.13</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   380.22</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   378.69</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   150.58</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    38.18</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    33.35</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   119.46</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   118.53</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    58.16</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR><TH class="mrc7b"></TH><TH class="mrc7" colspan="5"></TH></TR> </TABLE>
 </DIV>

 <DIV class="tablediv" style="display:none;" id="mrcPipelineDiv1">
 <TABLE cellspacing = "0" cellpadding = "2" border = "0" class="mrcPipelineTableBorderClass" style="display:none;" id="mrcPipelineTable1">
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_2378</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">TEST INFO:<BR/>Num Cells<BR/>TestFileName (Cell0)<BR/><BR/><BR/><BR/>TestFileName (Cell1)<BR/><BR/><BR/><BR/>FrameType (Cell0)<BR/>FrameType (Cell1)</TD>
<TD class="mrc0c" colspan="1"><BR/>2
<BR/>fd/mu1_100mhz/<BR/>374/fd_testcon<BR/>fig_tst374.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>378/fd_testcon<BR/>fig_tst378.cfg<BR/><BR/>DDDSU<BR/>DDDSU</TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_2378</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc1">OPTIONS:<BR/>
  PDSCH split<BR/>PDSCH Symbol Proc<BR/>PDSCH Beam Weight split<BR/>
  PUSCH CE split<BR/>PUSCH MMSE split<BR/>PUSCH LLR split<BR/>PUSCH Beam Weight split<BR/>PUSCH CE Freq Interpolation<BR/>PUSCH CE Time Interpolation (Per Cell)<BR/>
  PUCCH split<BR/>SRS split<BR/>PDSCH Memset Opt<BR/>BBU Sleep Enable<BR/>
  FEC ENC split<BR/>FEC DEC split<BR/>Num FEC DEC iteration<BR/>FEC DEC early termination enabled<BR/>
  eBBUPool Queue<BR/>eBBUPool Context<BR/>eBBUPool Max Fetch<BR/>
  </TD>
<TD class="mrc1c" colspan="1"><BR/>
2<BR/>1<BR/>2<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>99, 4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>3<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 60207</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">2</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">10.0 / 5.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">10.0 / 5.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>1F0001F0</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_2378</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">35%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">35% on 10 C<BR/> <B style="color:blue;">(350%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="1">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_2378_MU1</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.92<BR/>(     0.46 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     2.22<BR/>(     1.11 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.45<BR/>(     0.22 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.54<BR/>(     0.27 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.18<BR/>(     0.09 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_2378_MU1</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       65%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       85%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">      104%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">      134%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">      152%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">      166%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency</TD><TD class="mrc6c">        8%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency</TD><TD class="mrc6c">       13%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency</TD><TD class="mrc6cl">       15%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency</TD><TD class="mrc6c">       13%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency</TD><TD class="mrc6c">       16%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency</TD><TD class="mrc6cl">       20%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="1">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_2378_MU1</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">    12.23</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">   340.34</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">    64.06</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    35.02</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">  1016.60</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">    29.23</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">    21.14</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">   226.04</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">   267.51</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">    90.81</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    25.96</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">    25.79</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">  2154.73</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_2378_MU1</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    15.68</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.28</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    32.08</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">    25.38</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     6.59</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    39.93</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    79.36</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">   221.05</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">     6.74</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">     5.49</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    19.27</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.16</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    24.45</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">   112.32</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">   196.26</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">   243.67</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">   384.95</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">    53.69</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.34</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     9.85</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">    14.83</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.28</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    29.23</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    21.14</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.23</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">   208.49</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     8.32</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.36</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   267.51</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    90.81</TD>  </TR>
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
  <TR id="4" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency Per Cell (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency Per Cell (% of TTI)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl" colspan="1">FD_2378</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       85%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 0</TD><TD class="mrc6cl" colspan="1">      104%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       39%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       51%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 1</TD><TD class="mrc6cl" colspan="1">       61%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">      134%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">      152%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">      166%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">      109%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">      132%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">      159%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">       13%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">       15%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">       13%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">       16%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">       20%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">       11%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">       19%</TD>  </TR>
  <TR id="4" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down per Cell per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down per Cell per TTI (in usecs)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c" colspan="1">FD_2378</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC00_GNB_DL_CFG (100) </TD><TD class="mrc6c" colspan="1">    12.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CFG (101) </TD><TD class="mrc6c" colspan="1">    18.78</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_CFG (141) </TD><TD class="mrc6c" colspan="1">    11.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    48.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_CRC (181) </TD><TD class="mrc6c" colspan="1">    15.50</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    36.47</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_CB_SETUP (221) </TD><TD class="mrc6c" colspan="1">    14.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.72</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_QUEUE (261) </TD><TD class="mrc6c" colspan="1">     3.47</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    52.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_SCRAMBLER (301) </TD><TD class="mrc6c" colspan="1">    26.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_RS (340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   106.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_RS (341) </TD><TD class="mrc6c" colspan="1">    51.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   321.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_SYMBOL_PROC (381) </TD><TD class="mrc6c" colspan="1">   121.04</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PDSCH_BEAM_FORMING (421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CSI_PROC (461) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     4.65</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PROC (501) </TD><TD class="mrc6c" colspan="1">     8.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_UCI_PROC (541) </TD><TD class="mrc6c" colspan="1">     7.74</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PRECODER (581) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PBCH_PROC (621) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    19.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_RESET_BUF (661) </TD><TD class="mrc6c" colspan="1">    19.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_POST (700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_POST (701) </TD><TD class="mrc6c" colspan="1">     0.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    31.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DMRS (741) </TD><TD class="mrc6c" colspan="1">    17.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   222.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB0 (781) </TD><TD class="mrc6c" colspan="1">     2.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   239.62</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB7 (821) </TD><TD class="mrc6c" colspan="1">   152.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_RNN_CALC (861) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   486.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB0 (901) </TD><TD class="mrc6c" colspan="1">     0.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   455.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB7 (941) </TD><TD class="mrc6c" colspan="1">   314.77</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    80.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DESCRAMBLE (981) </TD><TD class="mrc6c" colspan="1">    26.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    13.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CB_SETUP (1061) </TD><TD class="mrc6c" colspan="1">     7.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    13.04</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DECODER (1021) </TD><TD class="mrc6c" colspan="1">     6.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_TB (1100) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    16.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_TB (1101) </TD><TD class="mrc6c" colspan="1">    13.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     1.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_UCI_DECODER (1141) </TD><TD class="mrc6c" colspan="1">     1.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUCCH_RX (1181) </TD><TD class="mrc6c" colspan="1">    54.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    18.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PRACH_PROCESS (1221) </TD><TD class="mrc6c" colspan="1">    23.79</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_RX (1261) </TD><TD class="mrc6c" colspan="1">     9.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE (1300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   208.01</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE (1301) </TD><TD class="mrc6c" colspan="1">   208.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_CB_SETUP (1341) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_RUN_FUNC (1381) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE_POST (1421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_REPORT (1460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_REPORT (1461) </TD><TD class="mrc6c" colspan="1">     8.42</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.75</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_POST (1501) </TD><TD class="mrc6c" colspan="1">     9.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   387.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_TASK (1541) </TD><TD class="mrc6c" colspan="1">   147.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   122.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_TASK (1581) </TD><TD class="mrc6c" colspan="1">    58.78</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1621) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_ORAN (1661) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_IQ_COMPRESS (1701) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMPRESS (1741) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_COMPRESS (1781) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_COMPRESS (1821) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_SRS_IQ_DECOMPRESS (1861) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_CTRL_COMPRESS (1901) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_RS_COMPRESS (1941) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_DATA_COMPRESS (1981) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUSCH (2021) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUCCH (2061) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR><TH class="mrc7b"></TH><TH class="mrc7" colspan="1"></TH></TR> </TABLE>
 </DIV>

 <DIV class="tablediv"  id="mrcPipelineDiv2">
 <TABLE cellspacing = "0" cellpadding = "2" border = "0" class="mrcPipelineTableBorderClass"  id="mrcPipelineTable2">
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_3378</TD><TD class="mrc0tc" colspan="1">FD_3368</TD><TD class="mrc0tc" colspan="1">FD_3369</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">TEST INFO:<BR/>Num Cells<BR/>TestFileName (Cell0)<BR/><BR/><BR/><BR/>TestFileName (Cell1)<BR/><BR/><BR/><BR/>TestFileName (Cell2)<BR/><BR/><BR/><BR/>FrameType (Cell0)<BR/>FrameType (Cell1)<BR/>FrameType (Cell2)</TD>
<TD class="mrc0c" colspan="1"><BR/>3
<BR/>fd/mu1_100mhz/<BR/>378/fd_testcon<BR/>fig_tst378.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>378/fd_testcon<BR/>fig_tst378.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>378/fd_testcon<BR/>fig_tst378.cfg<BR/><BR/>DDDSU<BR/>DDDSU<BR/>DDDSU</TD>
<TD class="mrc0c" colspan="1"><BR/>3
<BR/>fd/mu1_100mhz/<BR/>376/fd_testcon<BR/>fig_tst376.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>377/fd_testcon<BR/>fig_tst377.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>377/fd_testcon<BR/>fig_tst377.cfg<BR/><BR/>DDDSU<BR/>DDDSU<BR/>DDDSU</TD>
<TD class="mrc0c" colspan="1"><BR/>3
<BR/>fd/mu1_100mhz/<BR/>369/fd_testcon<BR/>fig_tst369.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>377/fd_testcon<BR/>fig_tst377.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>377/fd_testcon<BR/>fig_tst377.cfg<BR/><BR/>DDDSU<BR/>DDDSU<BR/>DDDSU</TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_3378</TD><TD class="mrc1tc" colspan="1">FD_3368</TD><TD class="mrc1tc" colspan="1">FD_3369</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc1">OPTIONS:<BR/>
  PDSCH split<BR/>PDSCH Symbol Proc<BR/>PDSCH Beam Weight split<BR/>
  PUSCH CE split<BR/>PUSCH MMSE split<BR/>PUSCH LLR split<BR/>PUSCH Beam Weight split<BR/>PUSCH CE Freq Interpolation<BR/>PUSCH CE Time Interpolation (Per Cell)<BR/>
  PUCCH split<BR/>SRS split<BR/>PDSCH Memset Opt<BR/>BBU Sleep Enable<BR/>
  FEC ENC split<BR/>FEC DEC split<BR/>Num FEC DEC iteration<BR/>FEC DEC early termination enabled<BR/>
  eBBUPool Queue<BR/>eBBUPool Context<BR/>eBBUPool Max Fetch<BR/>
  </TD>
<TD class="mrc1c" colspan="1"><BR/>
2<BR/>1<BR/>2<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4, 4, 4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>3<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
2<BR/>1<BR/>2<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>99, 4, 4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>3<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
2<BR/>1<BR/>2<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>99, 4, 4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>9<BR/>1<BR/>
4<BR/>5<BR/>3<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 60207</TD><TD class="mrc1c" colspan="1">1 1 60207</TD><TD class="mrc1c" colspan="1">1 1 60207</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">3</TD><TD class="mrc1c" colspan="1">3</TD><TD class="mrc1c" colspan="1">3</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">8.0 / 4.0</TD><TD class="mrc1c" colspan="1">10.0 / 5.0</TD><TD class="mrc1c" colspan="1">8.0 / 4.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">8.0 / 4.0</TD><TD class="mrc1lc" colspan="1">10.0 / 5.0</TD><TD class="mrc1lc" colspan="1">8.0 / 4.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>0F0000F0</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>1F0001F0</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>0F0000F0</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="3">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_3378</TD><TD class="mrc2c" colspan="1">FD_3368</TD><TD class="mrc2c" colspan="1">FD_3369</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">46%</TD><TD class="mrc6" colspan="1">39%</TD><TD class="mrc6" colspan="1">33%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">46% on 8 C<BR/> <B style="color:blue;">(368%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">39% on 10 C<BR/> <B style="color:blue;">(390%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">33% on 8 C<BR/> <B style="color:blue;">(264%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="3">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_3378_MU1</TD><TD class="mrc2nc">FD_3368_MU1</TD><TD class="mrc2nc">FD_3369_MU1</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.67<BR/>(     0.34 <I>Phys</I> )</TD><TD class="mrc6">     0.68<BR/>(     0.34 <I>Phys</I> )</TD><TD class="mrc6">     0.46<BR/>(     0.23 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     1.36<BR/>(     0.68 <I>Phys</I> )</TD><TD class="mrc6">     1.57<BR/>(     0.79 <I>Phys</I> )</TD><TD class="mrc6">     0.97<BR/>(     0.49 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.51<BR/>(     0.25 <I>Phys</I> )</TD><TD class="mrc6">     0.48<BR/>(     0.24 <I>Phys</I> )</TD><TD class="mrc6">     0.46<BR/>(     0.23 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.33<BR/>(     0.17 <I>Phys</I> )</TD><TD class="mrc6">     0.39<BR/>(     0.19 <I>Phys</I> )</TD><TD class="mrc6">     0.21<BR/>(     0.10 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.13<BR/>(     0.06 <I>Phys</I> )</TD><TD class="mrc6">     0.14<BR/>(     0.07 <I>Phys</I> )</TD><TD class="mrc6">     0.09<BR/>(     0.05 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="3">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_3378_MU1</TD><TD class="mrc3cl">FD_3368_MU1</TD><TD class="mrc3cl">FD_3369_MU1</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       51%</TD><TD class="mrc6c">       73%</TD><TD class="mrc6c">       40%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       67%</TD><TD class="mrc6c">       94%</TD><TD class="mrc6c">       53%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">       88%</TD><TD class="mrc6cl">      116%</TD><TD class="mrc6cl">       66%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">      132%</TD><TD class="mrc6c">      140%</TD><TD class="mrc6c">       80%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">      145%</TD><TD class="mrc6c">      155%</TD><TD class="mrc6c">       86%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">      155%</TD><TD class="mrc6cl">      172%</TD><TD class="mrc6cl">       92%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">       10%</TD><TD class="mrc6c">        5%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency</TD><TD class="mrc6c">        8%</TD><TD class="mrc6c">       14%</TD><TD class="mrc6c">        8%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency</TD><TD class="mrc6cl">       12%</TD><TD class="mrc6cl">       16%</TD><TD class="mrc6cl">        9%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency</TD><TD class="mrc6c">        9%</TD><TD class="mrc6c">       13%</TD><TD class="mrc6c">        8%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency</TD><TD class="mrc6c">       12%</TD><TD class="mrc6c">       15%</TD><TD class="mrc6c">       10%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency</TD><TD class="mrc6cl">       17%</TD><TD class="mrc6cl">       17%</TD><TD class="mrc6cl">       11%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="3">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_3378_MU1</B></TD><TD class="mrc4c"><B>FD_3368_MU1</B></TD><TD class="mrc4c"><B>FD_3369_MU1</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">    18.06</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">   227.95</TD><TD class="mrc6c">   244.25</TD><TD class="mrc6c">   161.23</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">    34.27</TD><TD class="mrc6c">    47.26</TD><TD class="mrc6c">    27.29</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    28.64</TD><TD class="mrc6c">    26.12</TD><TD class="mrc6c">    18.58</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">   569.28</TD><TD class="mrc6c">   647.60</TD><TD class="mrc6c">   357.38</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">    55.33</TD><TD class="mrc6c">    80.97</TD><TD class="mrc6c">    80.58</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">    13.73</TD><TD class="mrc6c">    15.79</TD><TD class="mrc6c">    15.37</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">   254.59</TD><TD class="mrc6c">   240.15</TD><TD class="mrc6c">   231.63</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">   163.96</TD><TD class="mrc6c">   193.08</TD><TD class="mrc6c">   103.05</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">    63.31</TD><TD class="mrc6c">    70.88</TD><TD class="mrc6c">    43.09</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    32.56</TD><TD class="mrc6c">    29.95</TD><TD class="mrc6c">    27.39</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">    31.50</TD><TD class="mrc6c">    33.62</TD><TD class="mrc6c">    27.24</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">  1493.18</TD><TD class="mrc6ct">  1629.67</TD><TD class="mrc6ct">  1092.83</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="3">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_3378_MU1</TD><TD class="mrc5c">FD_3368_MU1</TD><TD class="mrc5c">FD_3369_MU1</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    21.07</TD><TD class="mrc6c">    17.16</TD><TD class="mrc6c">    15.86</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.49</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.78</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.53</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    16.85</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    21.91</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.88</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">    13.67</TD><TD class="mrc6c">    19.84</TD><TD class="mrc6c">    12.24</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     3.75</TD><TD class="mrc6c">     5.51</TD><TD class="mrc6c">     3.17</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    31.32</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    26.04</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    17.78</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    53.61</TD><TD class="mrc6c">    59.75</TD><TD class="mrc6c">    42.16</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">   143.02</TD><TD class="mrc6c">   158.46</TD><TD class="mrc6c">   101.29</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">     9.70</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">     8.36</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    21.08</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    21.52</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    16.14</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.15</TD><TD class="mrc6c">     0.14</TD><TD class="mrc6c">     0.10</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    14.90</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    17.17</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.75</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">     1.88</TD><TD class="mrc6c">    79.87</TD><TD class="mrc6c">    48.41</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">   156.02</TD><TD class="mrc6c">   125.86</TD><TD class="mrc6c">    92.21</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">     0.33</TD><TD class="mrc6c">   171.10</TD><TD class="mrc6c">    56.08</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">   362.86</TD><TD class="mrc6c">   220.03</TD><TD class="mrc6c">   131.95</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">    31.79</TD><TD class="mrc6c">    31.77</TD><TD class="mrc6c">    15.37</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.39</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.36</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.94</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     6.97</TD><TD class="mrc6c">     6.53</TD><TD class="mrc6c">     4.34</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">    14.28</TD><TD class="mrc6c">    12.23</TD><TD class="mrc6c">     9.30</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.51</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.80</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.61</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    55.33</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    80.97</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    80.58</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    13.73</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    15.79</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    15.37</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.90</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.21</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.03</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">   236.16</TD><TD class="mrc6c">   221.16</TD><TD class="mrc6c">   212.87</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     8.53</TD><TD class="mrc6c">     8.78</TD><TD class="mrc6c">     8.73</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.27</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.97</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   163.96</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   193.08</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   103.05</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    63.31</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    70.88</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    43.09</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="4" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency Per Cell (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="3">Processing Latency Per Cell (% of TTI)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl" colspan="1">FD_3378</TD><TD class="mrc3cl" colspan="1">FD_3368</TD><TD class="mrc3cl" colspan="1">FD_3369</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       45%</TD><TD class="mrc6c" colspan="1">       73%</TD><TD class="mrc6c" colspan="1">       40%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       57%</TD><TD class="mrc6c" colspan="1">       94%</TD><TD class="mrc6c" colspan="1">       53%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 0</TD><TD class="mrc6cl" colspan="1">       75%</TD><TD class="mrc6cl" colspan="1">      116%</TD><TD class="mrc6cl" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       50%</TD><TD class="mrc6c" colspan="1">       26%</TD><TD class="mrc6c" colspan="1">       25%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       67%</TD><TD class="mrc6c" colspan="1">       38%</TD><TD class="mrc6c" colspan="1">       33%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 1</TD><TD class="mrc6cl" colspan="1">       86%</TD><TD class="mrc6cl" colspan="1">       62%</TD><TD class="mrc6cl" colspan="1">       44%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       51%</TD><TD class="mrc6c" colspan="1">       27%</TD><TD class="mrc6c" colspan="1">       26%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       67%</TD><TD class="mrc6c" colspan="1">       39%</TD><TD class="mrc6c" colspan="1">       34%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 2</TD><TD class="mrc6cl" colspan="1">       88%</TD><TD class="mrc6cl" colspan="1">       63%</TD><TD class="mrc6cl" colspan="1">       47%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       99%</TD><TD class="mrc6c" colspan="1">      140%</TD><TD class="mrc6c" colspan="1">       80%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">      110%</TD><TD class="mrc6c" colspan="1">      155%</TD><TD class="mrc6c" colspan="1">       86%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">      118%</TD><TD class="mrc6cl" colspan="1">      172%</TD><TD class="mrc6cl" colspan="1">       92%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">      130%</TD><TD class="mrc6c" colspan="1">       56%</TD><TD class="mrc6c" colspan="1">       54%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">      143%</TD><TD class="mrc6c" colspan="1">       62%</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">      154%</TD><TD class="mrc6cl" colspan="1">       67%</TD><TD class="mrc6cl" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">      132%</TD><TD class="mrc6c" colspan="1">       58%</TD><TD class="mrc6c" colspan="1">       55%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">      145%</TD><TD class="mrc6c" colspan="1">       63%</TD><TD class="mrc6c" colspan="1">       61%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">      155%</TD><TD class="mrc6cl" colspan="1">       68%</TD><TD class="mrc6cl" colspan="1">       65%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        3%</TD><TD class="mrc6c" colspan="1">       10%</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        7%</TD><TD class="mrc6c" colspan="1">       14%</TD><TD class="mrc6c" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">       12%</TD><TD class="mrc6cl" colspan="1">       16%</TD><TD class="mrc6cl" colspan="1">        9%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        4%</TD><TD class="mrc6c" colspan="1">        1%</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        7%</TD><TD class="mrc6c" colspan="1">        2%</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">       12%</TD><TD class="mrc6cl" colspan="1">        4%</TD><TD class="mrc6cl" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        4%</TD><TD class="mrc6c" colspan="1">        1%</TD><TD class="mrc6c" colspan="1">        1%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        8%</TD><TD class="mrc6c" colspan="1">        2%</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">       12%</TD><TD class="mrc6cl" colspan="1">        4%</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        8%</TD><TD class="mrc6c" colspan="1">       13%</TD><TD class="mrc6c" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        9%</TD><TD class="mrc6c" colspan="1">       15%</TD><TD class="mrc6c" colspan="1">       10%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">       11%</TD><TD class="mrc6cl" colspan="1">       17%</TD><TD class="mrc6cl" colspan="1">       11%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        8%</TD><TD class="mrc6c" colspan="1">        2%</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">       11%</TD><TD class="mrc6c" colspan="1">        4%</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">       17%</TD><TD class="mrc6cl" colspan="1">        6%</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        9%</TD><TD class="mrc6c" colspan="1">        3%</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">       12%</TD><TD class="mrc6c" colspan="1">        4%</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">       17%</TD><TD class="mrc6cl" colspan="1">        6%</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down per Cell per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="3">Task Level Break Down per Cell per TTI (in usecs)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c" colspan="1">FD_3378</TD><TD class="mrc5c" colspan="1">FD_3368</TD><TD class="mrc5c" colspan="1">FD_3369</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC00_GNB_DL_CFG (100) </TD><TD class="mrc6c" colspan="1">    21.01</TD><TD class="mrc6c" colspan="1">    11.46</TD><TD class="mrc6c" colspan="1">     6.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CFG (101) </TD><TD class="mrc6c" colspan="1">    21.44</TD><TD class="mrc6c" colspan="1">    20.17</TD><TD class="mrc6c" colspan="1">    20.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CFG (102) </TD><TD class="mrc6c" colspan="1">    20.77</TD><TD class="mrc6c" colspan="1">    19.87</TD><TD class="mrc6c" colspan="1">    20.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    11.74</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.32</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     7.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_CFG (141) </TD><TD class="mrc6c" colspan="1">    11.47</TD><TD class="mrc6c" colspan="1">    14.46</TD><TD class="mrc6c" colspan="1">    13.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_CFG (142) </TD><TD class="mrc6c" colspan="1">    11.26</TD><TD class="mrc6c" colspan="1">    14.56</TD><TD class="mrc6c" colspan="1">    13.50</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    16.97</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    53.70</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    24.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_CRC (181) </TD><TD class="mrc6c" colspan="1">    17.08</TD><TD class="mrc6c" colspan="1">     5.99</TD><TD class="mrc6c" colspan="1">     5.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_CRC (182) </TD><TD class="mrc6c" colspan="1">    16.51</TD><TD class="mrc6c" colspan="1">     6.04</TD><TD class="mrc6c" colspan="1">     5.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    13.71</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    43.24</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    21.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_CB_SETUP (221) </TD><TD class="mrc6c" colspan="1">    13.72</TD><TD class="mrc6c" colspan="1">     8.14</TD><TD class="mrc6c" colspan="1">     7.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_CB_SETUP (222) </TD><TD class="mrc6c" colspan="1">    13.58</TD><TD class="mrc6c" colspan="1">     8.14</TD><TD class="mrc6c" colspan="1">     7.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.65</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    12.15</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     5.16</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_QUEUE (261) </TD><TD class="mrc6c" colspan="1">     3.73</TD><TD class="mrc6c" colspan="1">     2.20</TD><TD class="mrc6c" colspan="1">     2.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_QUEUE (262) </TD><TD class="mrc6c" colspan="1">     3.87</TD><TD class="mrc6c" colspan="1">     2.18</TD><TD class="mrc6c" colspan="1">     2.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    31.35</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    58.37</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    31.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_SCRAMBLER (301) </TD><TD class="mrc6c" colspan="1">    31.20</TD><TD class="mrc6c" colspan="1">     9.88</TD><TD class="mrc6c" colspan="1">    10.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_SCRAMBLER (302) </TD><TD class="mrc6c" colspan="1">    31.41</TD><TD class="mrc6c" colspan="1">     9.86</TD><TD class="mrc6c" colspan="1">    10.71</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_RS (340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    53.28</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   112.78</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    58.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_RS (341) </TD><TD class="mrc6c" colspan="1">    53.93</TD><TD class="mrc6c" colspan="1">    33.21</TD><TD class="mrc6c" colspan="1">    33.96</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_RS (342) </TD><TD class="mrc6c" colspan="1">    53.61</TD><TD class="mrc6c" colspan="1">    33.25</TD><TD class="mrc6c" colspan="1">    33.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   154.78</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   356.40</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   188.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_SYMBOL_PROC (381) </TD><TD class="mrc6c" colspan="1">   137.44</TD><TD class="mrc6c" colspan="1">    59.59</TD><TD class="mrc6c" colspan="1">    57.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_SYMBOL_PROC (382) </TD><TD class="mrc6c" colspan="1">   136.86</TD><TD class="mrc6c" colspan="1">    59.40</TD><TD class="mrc6c" colspan="1">    57.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PDSCH_BEAM_FORMING (421) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PDSCH_BEAM_FORMING (422) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CSI_PROC (461) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CSI_PROC (462) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.61</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PROC (501) </TD><TD class="mrc6c" colspan="1">     9.80</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PROC (502) </TD><TD class="mrc6c" colspan="1">     9.68</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.29</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_UCI_PROC (541) </TD><TD class="mrc6c" colspan="1">     8.36</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_UCI_PROC (542) </TD><TD class="mrc6c" colspan="1">     8.43</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PRECODER (581) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PRECODER (582) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PBCH_PROC (621) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PBCH_PROC (622) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    21.20</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    21.01</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_RESET_BUF (661) </TD><TD class="mrc6c" colspan="1">    21.44</TD><TD class="mrc6c" colspan="1">    22.01</TD><TD class="mrc6c" colspan="1">    19.83</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_RESET_BUF (662) </TD><TD class="mrc6c" colspan="1">    20.59</TD><TD class="mrc6c" colspan="1">    21.53</TD><TD class="mrc6c" colspan="1">    19.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_POST (700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.17</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.15</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_POST (701) </TD><TD class="mrc6c" colspan="1">     0.13</TD><TD class="mrc6c" colspan="1">     0.11</TD><TD class="mrc6c" colspan="1">     0.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_POST (702) </TD><TD class="mrc6c" colspan="1">     0.15</TD><TD class="mrc6c" colspan="1">     0.15</TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    15.06</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    31.72</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    16.70</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DMRS (741) </TD><TD class="mrc6c" colspan="1">    14.87</TD><TD class="mrc6c" colspan="1">     9.84</TD><TD class="mrc6c" colspan="1">     9.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DMRS (742) </TD><TD class="mrc6c" colspan="1">    14.78</TD><TD class="mrc6c" colspan="1">     9.95</TD><TD class="mrc6c" colspan="1">     9.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.34</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   234.49</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   139.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB0 (781) </TD><TD class="mrc6c" colspan="1">     1.69</TD><TD class="mrc6c" colspan="1">     2.61</TD><TD class="mrc6c" colspan="1">     2.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB0 (782) </TD><TD class="mrc6c" colspan="1">     1.60</TD><TD class="mrc6c" colspan="1">     2.50</TD><TD class="mrc6c" colspan="1">     2.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   158.28</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   248.83</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   155.70</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB7 (821) </TD><TD class="mrc6c" colspan="1">   156.15</TD><TD class="mrc6c" colspan="1">    65.01</TD><TD class="mrc6c" colspan="1">    61.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB7 (822) </TD><TD class="mrc6c" colspan="1">   153.62</TD><TD class="mrc6c" colspan="1">    63.75</TD><TD class="mrc6c" colspan="1">    59.44</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_RNN_CALC (861) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_RNN_CALC (862) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.61</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   512.46</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   167.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB0 (901) </TD><TD class="mrc6c" colspan="1">     0.20</TD><TD class="mrc6c" colspan="1">     0.49</TD><TD class="mrc6c" colspan="1">     0.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB0 (902) </TD><TD class="mrc6c" colspan="1">     0.17</TD><TD class="mrc6c" colspan="1">     0.33</TD><TD class="mrc6c" colspan="1">     0.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   386.10</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   456.04</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   198.93</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB7 (941) </TD><TD class="mrc6c" colspan="1">   350.60</TD><TD class="mrc6c" colspan="1">   101.56</TD><TD class="mrc6c" colspan="1">    97.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB7 (942) </TD><TD class="mrc6c" colspan="1">   351.87</TD><TD class="mrc6c" colspan="1">   102.48</TD><TD class="mrc6c" colspan="1">    98.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    29.55</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    79.73</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    30.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DESCRAMBLE (981) </TD><TD class="mrc6c" colspan="1">    32.93</TD><TD class="mrc6c" colspan="1">     7.64</TD><TD class="mrc6c" colspan="1">     7.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DESCRAMBLE (982) </TD><TD class="mrc6c" colspan="1">    32.89</TD><TD class="mrc6c" colspan="1">     7.95</TD><TD class="mrc6c" colspan="1">     7.74</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.23</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    12.70</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     5.75</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CB_SETUP (1061) </TD><TD class="mrc6c" colspan="1">     8.12</TD><TD class="mrc6c" colspan="1">     4.59</TD><TD class="mrc6c" colspan="1">     4.63</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CB_SETUP (1062) </TD><TD class="mrc6c" colspan="1">     7.81</TD><TD class="mrc6c" colspan="1">     4.79</TD><TD class="mrc6c" colspan="1">     4.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.12</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    12.59</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     5.95</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DECODER (1021) </TD><TD class="mrc6c" colspan="1">     7.44</TD><TD class="mrc6c" colspan="1">     3.46</TD><TD class="mrc6c" colspan="1">     3.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DECODER (1022) </TD><TD class="mrc6c" colspan="1">     7.33</TD><TD class="mrc6c" colspan="1">     3.53</TD><TD class="mrc6c" colspan="1">     3.46</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_TB (1100) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    13.21</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    15.70</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     7.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_TB (1101) </TD><TD class="mrc6c" colspan="1">    15.17</TD><TD class="mrc6c" colspan="1">    10.71</TD><TD class="mrc6c" colspan="1">    10.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_TB (1102) </TD><TD class="mrc6c" colspan="1">    14.47</TD><TD class="mrc6c" colspan="1">    10.29</TD><TD class="mrc6c" colspan="1">    10.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     1.45</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.96</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_UCI_DECODER (1141) </TD><TD class="mrc6c" colspan="1">     1.55</TD><TD class="mrc6c" colspan="1">     2.22</TD><TD class="mrc6c" colspan="1">     2.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_UCI_DECODER (1142) </TD><TD class="mrc6c" colspan="1">     1.54</TD><TD class="mrc6c" colspan="1">     2.23</TD><TD class="mrc6c" colspan="1">     2.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    60.93</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.73</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUCCH_RX (1181) </TD><TD class="mrc6c" colspan="1">    53.33</TD><TD class="mrc6c" colspan="1">   119.41</TD><TD class="mrc6c" colspan="1">   119.91</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUCCH_RX (1182) </TD><TD class="mrc6c" colspan="1">    51.74</TD><TD class="mrc6c" colspan="1">   119.79</TD><TD class="mrc6c" colspan="1">   118.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    16.41</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    18.40</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    15.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PRACH_PROCESS (1221) </TD><TD class="mrc6c" colspan="1">    16.37</TD><TD class="mrc6c" colspan="1">    16.52</TD><TD class="mrc6c" colspan="1">    15.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PRACH_PROCESS (1222) </TD><TD class="mrc6c" colspan="1">     8.40</TD><TD class="mrc6c" colspan="1">    12.44</TD><TD class="mrc6c" colspan="1">    14.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.16</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.51</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_RX (1261) </TD><TD class="mrc6c" colspan="1">    10.09</TD><TD class="mrc6c" colspan="1">    10.35</TD><TD class="mrc6c" colspan="1">    10.19</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_RX (1262) </TD><TD class="mrc6c" colspan="1">     9.45</TD><TD class="mrc6c" colspan="1">     9.76</TD><TD class="mrc6c" colspan="1">     9.74</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE (1300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   237.13</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   226.68</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   210.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE (1301) </TD><TD class="mrc6c" colspan="1">   237.19</TD><TD class="mrc6c" colspan="1">   222.88</TD><TD class="mrc6c" colspan="1">   216.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE (1302) </TD><TD class="mrc6c" colspan="1">   234.14</TD><TD class="mrc6c" colspan="1">   213.92</TD><TD class="mrc6c" colspan="1">   212.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_CB_SETUP (1341) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_CB_SETUP (1342) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_RUN_FUNC (1381) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_RUN_FUNC (1382) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE_POST (1421) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE_POST (1422) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_REPORT (1460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.67</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.48</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.73</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_REPORT (1461) </TD><TD class="mrc6c" colspan="1">     8.66</TD><TD class="mrc6c" colspan="1">     9.08</TD><TD class="mrc6c" colspan="1">     8.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_REPORT (1462) </TD><TD class="mrc6c" colspan="1">     8.27</TD><TD class="mrc6c" colspan="1">     8.79</TD><TD class="mrc6c" colspan="1">     8.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.14</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.71</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.51</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_POST (1501) </TD><TD class="mrc6c" colspan="1">    10.57</TD><TD class="mrc6c" colspan="1">    16.85</TD><TD class="mrc6c" colspan="1">    15.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_POST (1502) </TD><TD class="mrc6c" colspan="1">    10.10</TD><TD class="mrc6c" colspan="1">    16.35</TD><TD class="mrc6c" colspan="1">    15.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   163.36</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   392.81</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   126.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_TASK (1541) </TD><TD class="mrc6c" colspan="1">   164.16</TD><TD class="mrc6c" colspan="1">    93.41</TD><TD class="mrc6c" colspan="1">    91.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_TASK (1542) </TD><TD class="mrc6c" colspan="1">   164.37</TD><TD class="mrc6c" colspan="1">    93.03</TD><TD class="mrc6c" colspan="1">    91.08</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    63.73</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   129.67</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    49.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_TASK (1581) </TD><TD class="mrc6c" colspan="1">    63.18</TD><TD class="mrc6c" colspan="1">    41.38</TD><TD class="mrc6c" colspan="1">    39.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_TASK (1582) </TD><TD class="mrc6c" colspan="1">    63.03</TD><TD class="mrc6c" colspan="1">    41.60</TD><TD class="mrc6c" colspan="1">    39.75</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1621) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1622) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_ORAN (1661) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_ORAN (1662) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_IQ_COMPRESS (1701) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_IQ_COMPRESS (1702) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMPRESS (1741) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMPRESS (1742) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_COMPRESS (1781) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_COMPRESS (1782) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_COMPRESS (1821) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_COMPRESS (1822) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_SRS_IQ_DECOMPRESS (1861) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_SRS_IQ_DECOMPRESS (1862) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_CTRL_COMPRESS (1901) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_CTRL_COMPRESS (1902) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_RS_COMPRESS (1941) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_RS_COMPRESS (1942) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_DATA_COMPRESS (1981) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_DATA_COMPRESS (1982) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUSCH (2021) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUSCH (2022) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUCCH (2061) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUCCH (2062) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR><TH class="mrc7b"></TH><TH class="mrc7" colspan="3"></TH></TR> </TABLE>
 </DIV>

   \endhtmlonly
 <BR/><BR/>

 </DIV>
**/



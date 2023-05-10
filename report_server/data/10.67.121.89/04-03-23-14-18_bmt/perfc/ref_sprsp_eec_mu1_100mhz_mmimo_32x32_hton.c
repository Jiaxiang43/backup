/*******************************************************************************
 *
 * <COPYRIGHT_TAG>
 *
 *******************************************************************************/

/**
 * @brief Performance report for ref_sprsp_eec_mu1_100mhz_mmimo_32x32_hton
 * @file ref_sprsp_eec_mu1_100mhz_mmimo_32x32_hton.c
 * @author Intel Corporation
 **/


/**
 @page ref_sprsp_eec_mu1_100mhz_mmimo_32x32_hton 4th Generation Intel&reg; Xeon&reg; Scalable Processor Eec Mu1 100Mhz Mmimo 32X32 Hton

 <DIV style = "text-align:justify; ">

 <TABLE cellspacing = "0" cellpadding = "2" border = "1" class="mrcTableBorderClass">
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Test File Name:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_32x32_hton]</B><BR/>
   - sprsp_eec_mu1_100mhz_mmimo_32x32_hton.cfg<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">Platform Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_32x32_hton]</B><BR/>
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
   - <B>CPU MHz</B>:             3200.000<BR/>
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
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_32x32_hton]</B><BR/>
   - <B>Command Line Params</B>:BOOT_IMAGE=(hd1,gpt2)/vmlinuz-4.18.0-425.13.1.rt7.223.el8_7.x86_64 root=UUID=767de6a5-1af7-4d43-b6bf-71e99a5083a1 ro intel_iommu=on iommu=pt usbcore.autosuspend=-1 selinux=0 enforcing=0 nmi_watchdog=0 crashkernel=auto softlockup_panic=0 audit=0 mce=off hugepagesz=1G hugepages=60 hugepagesz=2M hugepages=0 default_hugepagesz=1G kthread_cpus=0-5,20-25 irqaffinity=0-5,20-25 skew_tick=1 isolcpus=managed_irq,domain,6-19,26-39 nohz_full=6-19,26-39 rcu_nocbs=6-19,26-39 rcu_nocb_poll intel_pstate=disable nohz=on nosoftlockup tsc=nowatchdog<BR/>
 </TD>
 </TR>
 <TR><TD style="padding:20px; padding-left:25px;" colspan="1"><B style="font-size:25px;">BIOS Details:<BR/></B></TD></TR> <TR>
 <TD style="padding-right:15px; vertical-align: text-top;">
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_32x32_hton]</B><BR/>
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
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_32x32_hton]</B><BR/>
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
<B style="font-size:17px;"><BR/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[sprsp_eec_mu1_100mhz_mmimo_32x32_hton]</B><BR/><BR/>
<DIV class="turbostat">
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;Core &nbsp;&nbsp;CPU Avg_MHz &nbsp;&nbsp;Busy% Bzy_MHz TSC_MHz &nbsp;&nbsp;IPC &nbsp;&nbsp;IRQ &nbsp;&nbsp;SMI &nbsp;&nbsp;POLL &nbsp;&nbsp;C1 &nbsp;&nbsp;C6 &nbsp;&nbsp;POLL% &nbsp;&nbsp;C1% &nbsp;&nbsp;C6% CPU%c1 CPU%c6 CoreTmp PkgTmp PkgWatt RAMWatt &nbsp;&nbsp;PKG_% &nbsp;&nbsp;RAM_%</B><BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- &nbsp;&nbsp;&nbsp;&nbsp;- </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;0.25 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.70 10887 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;22 14216 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.80 &nbsp;0.00 &nbsp;99.75 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;37 &nbsp;&nbsp;&nbsp;&nbsp;37 &nbsp;103.27 &nbsp;&nbsp;&nbsp;2.13 &nbsp;100.08 &nbsp;&nbsp;&nbsp;0.00<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;0 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;35 &nbsp;&nbsp;&nbsp;1.09 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.11 &nbsp;1958 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 1951 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 98.99 &nbsp;0.00 &nbsp;98.91 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34 &nbsp;&nbsp;&nbsp;&nbsp;37 &nbsp;103.07 &nbsp;&nbsp;&nbsp;2.12 &nbsp;&nbsp;99.89 &nbsp;&nbsp;&nbsp;0.00<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;20 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;0.24 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.03 &nbsp;&nbsp;347 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;529 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.79 &nbsp;0.00 &nbsp;99.76<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;&nbsp;1 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23 &nbsp;&nbsp;&nbsp;0.70 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.17 &nbsp;1135 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 2439 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.41 &nbsp;0.00 &nbsp;99.30 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;21 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;0.42 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.27 &nbsp;&nbsp;866 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1307 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.64 &nbsp;0.00 &nbsp;99.58<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;2 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;19 &nbsp;&nbsp;&nbsp;0.60 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.15 &nbsp;1081 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 2522 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.51 &nbsp;0.00 &nbsp;99.40 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;22 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;0.25 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.07 &nbsp;&nbsp;355 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;536 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.77 &nbsp;0.00 &nbsp;99.75<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp;3 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;0.25 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.17 &nbsp;&nbsp;216 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1194 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.80 &nbsp;0.00 &nbsp;99.75 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;23 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;52 &nbsp;&nbsp;&nbsp;1.64 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.52 &nbsp;&nbsp;749 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1137 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 98.41 &nbsp;0.00 &nbsp;98.36<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &nbsp;&nbsp;&nbsp;&nbsp;4 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;73 &nbsp;&nbsp;&nbsp;2.27 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;2.95 &nbsp;&nbsp;126 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;42 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.02 97.72 &nbsp;0.00 &nbsp;97.73 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;37<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &nbsp;&nbsp;&nbsp;24 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;55 &nbsp;&nbsp;&nbsp;1.71 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.47 &nbsp;&nbsp;772 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 1153 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 98.34 &nbsp;0.00 &nbsp;98.29<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &nbsp;&nbsp;&nbsp;&nbsp;5 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0.08 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;0.63 &nbsp;&nbsp;106 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;11 &nbsp;&nbsp;51 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.05 99.92 &nbsp;0.00 &nbsp;99.92 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;36<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &nbsp;&nbsp;&nbsp;25 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;0.39 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.20 &nbsp;&nbsp;848 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 1271 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.66 &nbsp;0.00 &nbsp;99.61<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 &nbsp;&nbsp;&nbsp;&nbsp;6 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.51 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 &nbsp;&nbsp;&nbsp;26 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.71 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;&nbsp;7 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.53 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;35<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 &nbsp;&nbsp;&nbsp;27 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.73 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;&nbsp;8 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.53 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 &nbsp;&nbsp;&nbsp;28 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.72 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;&nbsp;&nbsp;9 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3202 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.58 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 &nbsp;&nbsp;&nbsp;29 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;10 &nbsp;&nbsp;&nbsp;10 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3202 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;36<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;10 &nbsp;&nbsp;&nbsp;30 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;11 &nbsp;&nbsp;&nbsp;11 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.60 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;11 &nbsp;&nbsp;&nbsp;31 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.75 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;12 &nbsp;&nbsp;&nbsp;12 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.56 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;12 &nbsp;&nbsp;&nbsp;32 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.73 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;13 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;13 &nbsp;&nbsp;&nbsp;33 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.76 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;14 &nbsp;&nbsp;&nbsp;14 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.60 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;33<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;14 &nbsp;&nbsp;&nbsp;34 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.75 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;15 &nbsp;&nbsp;&nbsp;15 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;15 &nbsp;&nbsp;&nbsp;35 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3198 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.74 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;16 &nbsp;&nbsp;&nbsp;16 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.57 &nbsp;&nbsp;&nbsp;84 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;35<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;16 &nbsp;&nbsp;&nbsp;36 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.76 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;17 &nbsp;&nbsp;&nbsp;17 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.59 &nbsp;&nbsp;&nbsp;84 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;17 &nbsp;&nbsp;&nbsp;37 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3199 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.75 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;18 &nbsp;&nbsp;&nbsp;18 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3198 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.58 &nbsp;&nbsp;&nbsp;84 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;18 &nbsp;&nbsp;&nbsp;38 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3201 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.76 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;19 &nbsp;&nbsp;&nbsp;19 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.01 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;1.48 &nbsp;&nbsp;&nbsp;84 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.99 &nbsp;0.00 &nbsp;99.99 &nbsp;&nbsp;0.00 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;32<BR/>
<B style="color:rgb(0,153,198);">
&nbsp;&nbsp;&nbsp;&nbsp;19 &nbsp;&nbsp;&nbsp;39 </B>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 &nbsp;&nbsp;&nbsp;0.04 &nbsp;&nbsp;&nbsp;3200 &nbsp;&nbsp;&nbsp;1600 &nbsp;3.36 &nbsp;&nbsp;&nbsp;83 &nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;0.00 99.96 &nbsp;0.00 &nbsp;99.96<BR/>
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
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_1350</TD><TD class="mrc0tc" colspan="1">FD_1351</TD><TD class="mrc0tc" colspan="1">FD_1352</TD><TD class="mrc0tc" colspan="1">FD_1353</TD><TD class="mrc0tc" colspan="1">FD_1354</TD><TD class="mrc0tc" colspan="1">FD_1355</TD><TD class="mrc0tc" colspan="1">FD_1356</TD><TD class="mrc0tc" colspan="1">FD_1357</TD><TD class="mrc0tc" colspan="1">FD_1358</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">TEST INFO:<BR/>Num Cells<BR/>TestFileName (Cell0)<BR/><BR/><BR/><BR/>FrameType (Cell0)</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>350/fd_testcon<BR/>fig_tst350.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>351/fd_testcon<BR/>fig_tst351.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>352/fd_testcon<BR/>fig_tst352.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>353/fd_testcon<BR/>fig_tst353.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>354/fd_testcon<BR/>fig_tst354.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>355/fd_testcon<BR/>fig_tst355.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>356/fd_testcon<BR/>fig_tst356.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>357/fd_testcon<BR/>fig_tst357.cfg<BR/><BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>1
<BR/>fd/mu1_100mhz/<BR/>358/fd_testcon<BR/>fig_tst358.cfg<BR/><BR/>DDDSUUDDDD</TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_1350</TD><TD class="mrc1tc" colspan="1">FD_1351</TD><TD class="mrc1tc" colspan="1">FD_1352</TD><TD class="mrc1tc" colspan="1">FD_1353</TD><TD class="mrc1tc" colspan="1">FD_1354</TD><TD class="mrc1tc" colspan="1">FD_1355</TD><TD class="mrc1tc" colspan="1">FD_1356</TD><TD class="mrc1tc" colspan="1">FD_1357</TD><TD class="mrc1tc" colspan="1">FD_1358</TD>  </TR>
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
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD><TD class="mrc1c" colspan="1">1</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Dedicated SRS BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="9">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_1350</TD><TD class="mrc2c" colspan="1">FD_1351</TD><TD class="mrc2c" colspan="1">FD_1352</TD><TD class="mrc2c" colspan="1">FD_1353</TD><TD class="mrc2c" colspan="1">FD_1354</TD><TD class="mrc2c" colspan="1">FD_1355</TD><TD class="mrc2c" colspan="1">FD_1356</TD><TD class="mrc2c" colspan="1">FD_1357</TD><TD class="mrc2c" colspan="1">FD_1358</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">26%</TD><TD class="mrc6" colspan="1">23%</TD><TD class="mrc6" colspan="1">22%</TD><TD class="mrc6" colspan="1">22%</TD><TD class="mrc6" colspan="1">20%</TD><TD class="mrc6" colspan="1">19%</TD><TD class="mrc6" colspan="1">16%</TD><TD class="mrc6" colspan="1">15%</TD><TD class="mrc6" colspan="1">12%</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Dedicated SRS Cores</TD><TD class="mrc6" colspan="1">5%</TD><TD class="mrc6" colspan="1">5%</TD><TD class="mrc6" colspan="1">5%</TD><TD class="mrc6" colspan="1">5%</TD><TD class="mrc6" colspan="1">5%</TD><TD class="mrc6" colspan="1">5%</TD><TD class="mrc6" colspan="1">4%</TD><TD class="mrc6" colspan="1">4%</TD><TD class="mrc6" colspan="1">4%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">20% on 4 C<BR/> <B style="color:blue;">(80%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">18% on 4 C<BR/> <B style="color:blue;">(72%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">17% on 4 C<BR/> <B style="color:blue;">(68%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">17% on 4 C<BR/> <B style="color:blue;">(68%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">16% on 4 C<BR/> <B style="color:blue;">(64%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">15% on 4 C<BR/> <B style="color:blue;">(60%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">13% on 4 C<BR/> <B style="color:blue;">(52%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">12% on 4 C<BR/> <B style="color:blue;">(48%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">10% on 4 C<BR/> <B style="color:blue;">(40%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="9">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_1350_MU1</TD><TD class="mrc2nc">FD_1351_MU1</TD><TD class="mrc2nc">FD_1352_MU1</TD><TD class="mrc2nc">FD_1353_MU1</TD><TD class="mrc2nc">FD_1354_MU1</TD><TD class="mrc2nc">FD_1355_MU1</TD><TD class="mrc2nc">FD_1356_MU1</TD><TD class="mrc2nc">FD_1357_MU1</TD><TD class="mrc2nc">FD_1358_MU1</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.52<BR/>(     0.26 <I>Phys</I> )</TD><TD class="mrc6">     0.47<BR/>(     0.23 <I>Phys</I> )</TD><TD class="mrc6">     0.42<BR/>(     0.21 <I>Phys</I> )</TD><TD class="mrc6">     0.43<BR/>(     0.22 <I>Phys</I> )</TD><TD class="mrc6">     0.40<BR/>(     0.20 <I>Phys</I> )</TD><TD class="mrc6">     0.35<BR/>(     0.17 <I>Phys</I> )</TD><TD class="mrc6">     0.30<BR/>(     0.15 <I>Phys</I> )</TD><TD class="mrc6">     0.28<BR/>(     0.14 <I>Phys</I> )</TD><TD class="mrc6">     0.25<BR/>(     0.12 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     1.27<BR/>(     0.63 <I>Phys</I> )</TD><TD class="mrc6">     1.09<BR/>(     0.55 <I>Phys</I> )</TD><TD class="mrc6">     0.96<BR/>(     0.48 <I>Phys</I> )</TD><TD class="mrc6">     1.04<BR/>(     0.52 <I>Phys</I> )</TD><TD class="mrc6">     0.89<BR/>(     0.44 <I>Phys</I> )</TD><TD class="mrc6">     0.84<BR/>(     0.42 <I>Phys</I> )</TD><TD class="mrc6">     0.64<BR/>(     0.32 <I>Phys</I> )</TD><TD class="mrc6">     0.56<BR/>(     0.28 <I>Phys</I> )</TD><TD class="mrc6">     0.51<BR/>(     0.25 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.18<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.17<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.16<BR/>(     0.08 <I>Phys</I> )</TD><TD class="mrc6">     0.16<BR/>(     0.08 <I>Phys</I> )</TD><TD class="mrc6">     0.16<BR/>(     0.08 <I>Phys</I> )</TD><TD class="mrc6">     0.15<BR/>(     0.08 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.10<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.09<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.09<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.05<BR/>(     0.03 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.05<BR/>(     0.03 <I>Phys</I> )</TD><TD class="mrc6">     0.05<BR/>(     0.03 <I>Phys</I> )</TD><TD class="mrc6">     0.05<BR/>(     0.03 <I>Phys</I> )</TD><TD class="mrc6">     0.05<BR/>(     0.03 <I>Phys</I> )</TD><TD class="mrc6">     0.05<BR/>(     0.03 <I>Phys</I> )</TD><TD class="mrc6">     0.05<BR/>(     0.03 <I>Phys</I> )</TD><TD class="mrc6">     0.04<BR/>(     0.02 <I>Phys</I> )</TD><TD class="mrc6">     0.04<BR/>(     0.02 <I>Phys</I> )</TD><TD class="mrc6">     0.04<BR/>(     0.02 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="9">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_1350_MU1</TD><TD class="mrc3cl">FD_1351_MU1</TD><TD class="mrc3cl">FD_1352_MU1</TD><TD class="mrc3cl">FD_1353_MU1</TD><TD class="mrc3cl">FD_1354_MU1</TD><TD class="mrc3cl">FD_1355_MU1</TD><TD class="mrc3cl">FD_1356_MU1</TD><TD class="mrc3cl">FD_1357_MU1</TD><TD class="mrc3cl">FD_1358_MU1</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       37%</TD><TD class="mrc6c">       33%</TD><TD class="mrc6c">       29%</TD><TD class="mrc6c">       30%</TD><TD class="mrc6c">       28%</TD><TD class="mrc6c">       24%</TD><TD class="mrc6c">       21%</TD><TD class="mrc6c">       20%</TD><TD class="mrc6c">       18%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       49%</TD><TD class="mrc6c">       42%</TD><TD class="mrc6c">       37%</TD><TD class="mrc6c">       41%</TD><TD class="mrc6c">       35%</TD><TD class="mrc6c">       32%</TD><TD class="mrc6c">       28%</TD><TD class="mrc6c">       25%</TD><TD class="mrc6c">       22%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">       66%</TD><TD class="mrc6cl">       59%</TD><TD class="mrc6cl">       47%</TD><TD class="mrc6cl">       57%</TD><TD class="mrc6cl">       49%</TD><TD class="mrc6cl">       43%</TD><TD class="mrc6cl">       39%</TD><TD class="mrc6cl">       36%</TD><TD class="mrc6cl">       33%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       91%</TD><TD class="mrc6c">       78%</TD><TD class="mrc6c">       69%</TD><TD class="mrc6c">       72%</TD><TD class="mrc6c">       62%</TD><TD class="mrc6c">       55%</TD><TD class="mrc6c">       49%</TD><TD class="mrc6c">       44%</TD><TD class="mrc6c">       40%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       96%</TD><TD class="mrc6c">       84%</TD><TD class="mrc6c">       74%</TD><TD class="mrc6c">       81%</TD><TD class="mrc6c">       71%</TD><TD class="mrc6c">       63%</TD><TD class="mrc6c">       54%</TD><TD class="mrc6c">       50%</TD><TD class="mrc6c">       45%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">      100%</TD><TD class="mrc6cl">       90%</TD><TD class="mrc6cl">       79%</TD><TD class="mrc6cl">       88%</TD><TD class="mrc6cl">       75%</TD><TD class="mrc6cl">       67%</TD><TD class="mrc6cl">       58%</TD><TD class="mrc6cl">       55%</TD><TD class="mrc6cl">       51%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency</TD><TD class="mrc6c">        5%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        1%</TD><TD class="mrc6c">        1%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency</TD><TD class="mrc6c">        6%</TD><TD class="mrc6c">        5%</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        5%</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        2%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency</TD><TD class="mrc6cl">        7%</TD><TD class="mrc6cl">        6%</TD><TD class="mrc6cl">        4%</TD><TD class="mrc6cl">        6%</TD><TD class="mrc6cl">        4%</TD><TD class="mrc6cl">        3%</TD><TD class="mrc6cl">        4%</TD><TD class="mrc6cl">        3%</TD><TD class="mrc6cl">        3%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency</TD><TD class="mrc6c">        8%</TD><TD class="mrc6c">        6%</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        7%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        2%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency</TD><TD class="mrc6c">       10%</TD><TD class="mrc6c">        7%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        8%</TD><TD class="mrc6c">        5%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        4%</TD><TD class="mrc6c">        2%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency</TD><TD class="mrc6cl">       11%</TD><TD class="mrc6cl">        8%</TD><TD class="mrc6cl">        5%</TD><TD class="mrc6cl">        9%</TD><TD class="mrc6cl">        6%</TD><TD class="mrc6cl">        5%</TD><TD class="mrc6cl">        6%</TD><TD class="mrc6cl">        4%</TD><TD class="mrc6cl">        3%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="9">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_1350_MU1</B></TD><TD class="mrc4c"><B>FD_1351_MU1</B></TD><TD class="mrc4c"><B>FD_1352_MU1</B></TD><TD class="mrc4c"><B>FD_1353_MU1</B></TD><TD class="mrc4c"><B>FD_1354_MU1</B></TD><TD class="mrc4c"><B>FD_1355_MU1</B></TD><TD class="mrc4c"><B>FD_1356_MU1</B></TD><TD class="mrc4c"><B>FD_1357_MU1</B></TD><TD class="mrc4c"><B>FD_1358_MU1</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">    19.96</TD><TD class="mrc6c">    20.01</TD><TD class="mrc6c">    19.93</TD><TD class="mrc6c">    20.18</TD><TD class="mrc6c">    20.16</TD><TD class="mrc6c">    20.27</TD><TD class="mrc6c">    19.75</TD><TD class="mrc6c">    19.95</TD><TD class="mrc6c">    19.44</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">   172.58</TD><TD class="mrc6c">   164.65</TD><TD class="mrc6c">   147.52</TD><TD class="mrc6c">   138.78</TD><TD class="mrc6c">   133.41</TD><TD class="mrc6c">   116.81</TD><TD class="mrc6c">    89.56</TD><TD class="mrc6c">    85.22</TD><TD class="mrc6c">    74.68</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">    33.69</TD><TD class="mrc6c">    19.94</TD><TD class="mrc6c">    13.13</TD><TD class="mrc6c">    26.27</TD><TD class="mrc6c">    15.48</TD><TD class="mrc6c">    10.74</TD><TD class="mrc6c">    14.20</TD><TD class="mrc6c">     9.17</TD><TD class="mrc6c">     7.04</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    25.41</TD><TD class="mrc6c">    17.46</TD><TD class="mrc6c">    15.07</TD><TD class="mrc6c">    22.38</TD><TD class="mrc6c">    15.64</TD><TD class="mrc6c">    14.62</TD><TD class="mrc6c">    16.67</TD><TD class="mrc6c">    13.27</TD><TD class="mrc6c">    12.76</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">   477.04</TD><TD class="mrc6c">   393.28</TD><TD class="mrc6c">   331.68</TD><TD class="mrc6c">   363.58</TD><TD class="mrc6c">   298.27</TD><TD class="mrc6c">   270.57</TD><TD class="mrc6c">   220.15</TD><TD class="mrc6c">   187.24</TD><TD class="mrc6c">   161.73</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">   114.96</TD><TD class="mrc6c">   113.59</TD><TD class="mrc6c">   114.33</TD><TD class="mrc6c">   114.52</TD><TD class="mrc6c">   114.25</TD><TD class="mrc6c">   114.90</TD><TD class="mrc6c">    64.41</TD><TD class="mrc6c">    64.41</TD><TD class="mrc6c">    63.15</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">    10.63</TD><TD class="mrc6c">    10.63</TD><TD class="mrc6c">    10.32</TD><TD class="mrc6c">     9.83</TD><TD class="mrc6c">    10.33</TD><TD class="mrc6c">    10.12</TD><TD class="mrc6c">     9.95</TD><TD class="mrc6c">     9.44</TD><TD class="mrc6c">     9.51</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">    86.30</TD><TD class="mrc6c">    90.05</TD><TD class="mrc6c">    87.11</TD><TD class="mrc6c">    85.17</TD><TD class="mrc6c">    86.07</TD><TD class="mrc6c">    81.96</TD><TD class="mrc6c">    79.32</TD><TD class="mrc6c">    78.00</TD><TD class="mrc6c">    73.16</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">    48.03</TD><TD class="mrc6c">    49.02</TD><TD class="mrc6c">    48.98</TD><TD class="mrc6c">    47.81</TD><TD class="mrc6c">    48.27</TD><TD class="mrc6c">    47.67</TD><TD class="mrc6c">    43.14</TD><TD class="mrc6c">    43.18</TD><TD class="mrc6c">    23.01</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">    24.60</TD><TD class="mrc6c">    23.55</TD><TD class="mrc6c">    23.07</TD><TD class="mrc6c">    24.10</TD><TD class="mrc6c">    23.06</TD><TD class="mrc6c">    22.53</TD><TD class="mrc6c">    20.42</TD><TD class="mrc6c">    20.11</TD><TD class="mrc6c">    19.72</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    23.87</TD><TD class="mrc6c">    23.88</TD><TD class="mrc6c">    23.64</TD><TD class="mrc6c">    23.66</TD><TD class="mrc6c">    23.55</TD><TD class="mrc6c">    23.37</TD><TD class="mrc6c">    21.83</TD><TD class="mrc6c">    21.71</TD><TD class="mrc6c">    21.28</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">    16.25</TD><TD class="mrc6c">    15.69</TD><TD class="mrc6c">    15.33</TD><TD class="mrc6c">    15.52</TD><TD class="mrc6c">    14.84</TD><TD class="mrc6c">    14.75</TD><TD class="mrc6c">    10.35</TD><TD class="mrc6c">    10.16</TD><TD class="mrc6c">    10.23</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">  1053.32</TD><TD class="mrc6ct">   941.75</TD><TD class="mrc6ct">   850.11</TD><TD class="mrc6ct">   891.80</TD><TD class="mrc6ct">   803.33</TD><TD class="mrc6ct">   748.31</TD><TD class="mrc6ct">   609.75</TD><TD class="mrc6ct">   561.86</TD><TD class="mrc6ct">   495.71</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="9">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_1350_MU1</TD><TD class="mrc5c">FD_1351_MU1</TD><TD class="mrc5c">FD_1352_MU1</TD><TD class="mrc5c">FD_1353_MU1</TD><TD class="mrc5c">FD_1354_MU1</TD><TD class="mrc5c">FD_1355_MU1</TD><TD class="mrc5c">FD_1356_MU1</TD><TD class="mrc5c">FD_1357_MU1</TD><TD class="mrc5c">FD_1358_MU1</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    15.16</TD><TD class="mrc6c">    15.21</TD><TD class="mrc6c">    14.98</TD><TD class="mrc6c">    15.08</TD><TD class="mrc6c">    15.03</TD><TD class="mrc6c">    14.87</TD><TD class="mrc6c">    14.57</TD><TD class="mrc6c">    14.48</TD><TD class="mrc6c">    14.21</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.71</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.67</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.66</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.58</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.52</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.50</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.26</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.23</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.07</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    16.77</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.04</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.23</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.15</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.68</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.89</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.93</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.50</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.31</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">    12.59</TD><TD class="mrc6c">     8.39</TD><TD class="mrc6c">     6.13</TD><TD class="mrc6c">    10.26</TD><TD class="mrc6c">     6.76</TD><TD class="mrc6c">     5.31</TD><TD class="mrc6c">     6.32</TD><TD class="mrc6c">     4.37</TD><TD class="mrc6c">     3.60</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     4.32</TD><TD class="mrc6c">     2.51</TD><TD class="mrc6c">     1.77</TD><TD class="mrc6c">     3.86</TD><TD class="mrc6c">     2.05</TD><TD class="mrc6c">     1.55</TD><TD class="mrc6c">     1.94</TD><TD class="mrc6c">     1.31</TD><TD class="mrc6c">     1.13</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    23.44</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    18.83</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    14.16</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    19.21</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    15.34</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.64</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.51</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.25</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.37</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    44.89</TD><TD class="mrc6c">    44.97</TD><TD class="mrc6c">    45.62</TD><TD class="mrc6c">    37.02</TD><TD class="mrc6c">    37.87</TD><TD class="mrc6c">    38.08</TD><TD class="mrc6c">    31.23</TD><TD class="mrc6c">    31.53</TD><TD class="mrc6c">    30.59</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">   104.24</TD><TD class="mrc6c">   100.85</TD><TD class="mrc6c">    87.75</TD><TD class="mrc6c">    82.55</TD><TD class="mrc6c">    80.19</TD><TD class="mrc6c">    67.09</TD><TD class="mrc6c">    46.82</TD><TD class="mrc6c">    44.43</TD><TD class="mrc6c">    37.71</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">    10.36</TD><TD class="mrc6c">    10.47</TD><TD class="mrc6c">    10.49</TD><TD class="mrc6c">    10.45</TD><TD class="mrc6c">    10.56</TD><TD class="mrc6c">    10.55</TD><TD class="mrc6c">    10.29</TD><TD class="mrc6c">    10.28</TD><TD class="mrc6c">    10.04</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">     9.60</TD><TD class="mrc6c">     9.55</TD><TD class="mrc6c">     9.45</TD><TD class="mrc6c">     9.72</TD><TD class="mrc6c">     9.60</TD><TD class="mrc6c">     9.72</TD><TD class="mrc6c">     9.46</TD><TD class="mrc6c">     9.67</TD><TD class="mrc6c">     9.40</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.51</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.12</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.98</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.89</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.77</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.63</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.35</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.33</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     4.21</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.07</TD><TD class="mrc6c">     0.05</TD><TD class="mrc6c">     0.06</TD><TD class="mrc6c">     0.07</TD><TD class="mrc6c">     0.07</TD><TD class="mrc6c">     0.07</TD><TD class="mrc6c">     0.06</TD><TD class="mrc6c">     0.05</TD><TD class="mrc6c">     0.06</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    11.32</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.94</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.85</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.46</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.58</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.22</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.30</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.16</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.04</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">     1.99</TD><TD class="mrc6c">     2.03</TD><TD class="mrc6c">     1.95</TD><TD class="mrc6c">     2.06</TD><TD class="mrc6c">     2.05</TD><TD class="mrc6c">     1.99</TD><TD class="mrc6c">     1.88</TD><TD class="mrc6c">     1.91</TD><TD class="mrc6c">     1.79</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">   114.32</TD><TD class="mrc6c">   111.36</TD><TD class="mrc6c">   111.17</TD><TD class="mrc6c">    89.62</TD><TD class="mrc6c">    90.70</TD><TD class="mrc6c">    93.10</TD><TD class="mrc6c">    59.67</TD><TD class="mrc6c">    58.51</TD><TD class="mrc6c">    53.36</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">     0.34</TD><TD class="mrc6c">     0.36</TD><TD class="mrc6c">     0.30</TD><TD class="mrc6c">     0.35</TD><TD class="mrc6c">     0.29</TD><TD class="mrc6c">     0.28</TD><TD class="mrc6c">     0.26</TD><TD class="mrc6c">     0.26</TD><TD class="mrc6c">     0.25</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">   316.93</TD><TD class="mrc6c">   248.40</TD><TD class="mrc6c">   195.06</TD><TD class="mrc6c">   239.14</TD><TD class="mrc6c">   177.99</TD><TD class="mrc6c">   155.93</TD><TD class="mrc6c">   135.73</TD><TD class="mrc6c">   107.12</TD><TD class="mrc6c">    91.67</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">    30.44</TD><TD class="mrc6c">    18.51</TD><TD class="mrc6c">    10.64</TD><TD class="mrc6c">    21.25</TD><TD class="mrc6c">    15.89</TD><TD class="mrc6c">     8.31</TD><TD class="mrc6c">    13.51</TD><TD class="mrc6c">    10.47</TD><TD class="mrc6c">     5.75</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.98</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.69</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.40</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.31</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.23</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.28</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.83</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.82</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.09</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     6.09</TD><TD class="mrc6c">     3.61</TD><TD class="mrc6c">     2.84</TD><TD class="mrc6c">     5.48</TD><TD class="mrc6c">     2.76</TD><TD class="mrc6c">     2.75</TD><TD class="mrc6c">     3.47</TD><TD class="mrc6c">     2.09</TD><TD class="mrc6c">     2.07</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">    13.34</TD><TD class="mrc6c">    10.16</TD><TD class="mrc6c">     8.83</TD><TD class="mrc6c">    11.59</TD><TD class="mrc6c">     9.65</TD><TD class="mrc6c">     8.59</TD><TD class="mrc6c">     9.36</TD><TD class="mrc6c">     8.37</TD><TD class="mrc6c">     7.61</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.71</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.69</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.72</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.71</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.77</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.74</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.79</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.81</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     1.86</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   114.96</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   113.59</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   114.33</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   114.52</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   114.25</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   114.90</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    64.41</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    64.41</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    63.15</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.63</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.63</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.32</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.83</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.33</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.12</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.95</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.44</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.51</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.88</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.01</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.89</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.10</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.99</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.83</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.76</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.53</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">    77.76</TD><TD class="mrc6c">    81.28</TD><TD class="mrc6c">    78.53</TD><TD class="mrc6c">    76.70</TD><TD class="mrc6c">    77.42</TD><TD class="mrc6c">    73.51</TD><TD class="mrc6c">    71.03</TD><TD class="mrc6c">    69.84</TD><TD class="mrc6c">    65.48</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     2.66</TD><TD class="mrc6c">     2.76</TD><TD class="mrc6c">     2.58</TD><TD class="mrc6c">     2.58</TD><TD class="mrc6c">     2.55</TD><TD class="mrc6c">     2.46</TD><TD class="mrc6c">     2.45</TD><TD class="mrc6c">     2.40</TD><TD class="mrc6c">     2.16</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.67</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.51</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.29</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.56</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.05</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.94</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.78</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.97</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    48.03</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    49.02</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    48.98</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    47.81</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    48.27</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    47.67</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    43.14</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    43.18</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    23.01</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    24.60</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    23.55</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    23.07</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    24.10</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    23.06</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    22.53</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    20.42</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    20.11</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    19.72</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR><TH class="mrc7b"></TH><TH class="mrc7" colspan="9"></TH></TR> </TABLE>
 </DIV>

 <DIV class="tablediv" style="display:none;" id="mrcPipelineDiv1">
 <TABLE cellspacing = "0" cellpadding = "2" border = "0" class="mrcPipelineTableBorderClass" style="display:none;" id="mrcPipelineTable1">
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_2359</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">TEST INFO:<BR/>Num Cells<BR/>TestFileName (Cell0)<BR/><BR/><BR/><BR/>TestFileName (Cell1)<BR/><BR/><BR/><BR/>FrameType (Cell0)<BR/>FrameType (Cell1)</TD>
<TD class="mrc0c" colspan="1"><BR/>2
<BR/>fd/mu1_100mhz/<BR/>359/fd_testcon<BR/>fig_tst359.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>359/fd_testcon<BR/>fig_tst359.cfg<BR/><BR/>DDDSUUDDDD<BR/>DDDSUUDDDD</TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_2359</TD>  </TR>
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
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4, 4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 40207</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">2</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">4.0 / 2.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">3.0 / 1.5</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>03000020</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Dedicated SRS BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_2359</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">40%</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Dedicated SRS Cores</TD><TD class="mrc6" colspan="1">11%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">32% on 4 C<BR/> <B style="color:blue;">(128%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="1">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_2359_MU1</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.43<BR/>(     0.22 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.57<BR/>(     0.28 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.18<BR/>(     0.09 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.12<BR/>(     0.06 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.06<BR/>(     0.03 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_2359_MU1</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       39%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       56%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">       88%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       57%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       67%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">       73%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency</TD><TD class="mrc6c">        2%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency</TD><TD class="mrc6c">        4%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency</TD><TD class="mrc6cl">        6%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency</TD><TD class="mrc6c">        2%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency</TD><TD class="mrc6c">        3%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency</TD><TD class="mrc6cl">        3%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="1">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_2359_MU1</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">    21.81</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">   143.48</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">    18.04</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    14.80</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">   182.73</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">    70.51</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">    10.28</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">    91.83</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">    57.59</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">    29.83</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    24.76</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">    14.93</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">   680.59</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_2359_MU1</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    16.92</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.84</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.36</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">     7.35</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     2.32</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    17.35</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    38.89</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">    87.24</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">    11.37</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">    10.45</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.88</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.06</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.41</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">     2.35</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">    63.09</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">     0.25</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">   100.67</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">     5.89</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.30</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     2.30</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">     9.21</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.08</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    70.51</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.28</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     6.19</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">    82.86</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     2.77</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     7.98</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    57.59</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    29.83</TD>  </TR>
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
  <TR id="4" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency Per Cell (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="1">Processing Latency Per Cell (% of TTI)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl" colspan="1">FD_2359</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       38%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       56%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 0</TD><TD class="mrc6cl" colspan="1">       87%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       39%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       56%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 1</TD><TD class="mrc6cl" colspan="1">       88%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       46%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       53%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">       66%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       57%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       67%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">       73%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        6%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        2%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        3%</TD>  </TR>
  <TR id="4" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down per Cell per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="1">Task Level Break Down per Cell per TTI (in usecs)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c" colspan="1">FD_2359</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC00_GNB_DL_CFG (100) </TD><TD class="mrc6c" colspan="1">    17.31</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CFG (101) </TD><TD class="mrc6c" colspan="1">    16.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.14</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_CFG (141) </TD><TD class="mrc6c" colspan="1">     7.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_CRC (181) </TD><TD class="mrc6c" colspan="1">     8.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     7.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_CB_SETUP (221) </TD><TD class="mrc6c" colspan="1">     7.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.41</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_QUEUE (261) </TD><TD class="mrc6c" colspan="1">     2.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    17.04</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_SCRAMBLER (301) </TD><TD class="mrc6c" colspan="1">    17.66</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_RS (340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    39.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_RS (341) </TD><TD class="mrc6c" colspan="1">    38.71</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    87.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_SYMBOL_PROC (381) </TD><TD class="mrc6c" colspan="1">    87.40</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PDSCH_BEAM_FORMING (421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CSI_PROC (461) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    11.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PROC (501) </TD><TD class="mrc6c" colspan="1">    11.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_UCI_PROC (541) </TD><TD class="mrc6c" colspan="1">    10.63</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PRECODER (581) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PBCH_PROC (621) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_RESET_BUF (661) </TD><TD class="mrc6c" colspan="1">     6.87</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_POST (700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_POST (701) </TD><TD class="mrc6c" colspan="1">     0.05</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DMRS (741) </TD><TD class="mrc6c" colspan="1">     8.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB0 (781) </TD><TD class="mrc6c" colspan="1">     2.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    58.12</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB7 (821) </TD><TD class="mrc6c" colspan="1">    68.06</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_RNN_CALC (861) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB0 (901) </TD><TD class="mrc6c" colspan="1">     0.15</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   101.73</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB7 (941) </TD><TD class="mrc6c" colspan="1">    99.61</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     5.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DESCRAMBLE (981) </TD><TD class="mrc6c" colspan="1">     6.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.11</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CB_SETUP (1061) </TD><TD class="mrc6c" colspan="1">     3.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.26</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DECODER (1021) </TD><TD class="mrc6c" colspan="1">     2.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_TB (1100) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.13</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_TB (1101) </TD><TD class="mrc6c" colspan="1">     9.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_UCI_DECODER (1141) </TD><TD class="mrc6c" colspan="1">     2.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    75.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUCCH_RX (1181) </TD><TD class="mrc6c" colspan="1">    65.68</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PRACH_PROCESS (1221) </TD><TD class="mrc6c" colspan="1">    10.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.45</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_RX (1261) </TD><TD class="mrc6c" colspan="1">     5.94</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE (1300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    84.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE (1301) </TD><TD class="mrc6c" colspan="1">    81.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_CB_SETUP (1341) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_RUN_FUNC (1381) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE_POST (1421) </TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_REPORT (1460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_REPORT (1461) </TD><TD class="mrc6c" colspan="1">     2.63</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_POST (1501) </TD><TD class="mrc6c" colspan="1">     7.80</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    56.37</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_TASK (1541) </TD><TD class="mrc6c" colspan="1">    58.81</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    29.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_TASK (1581) </TD><TD class="mrc6c" colspan="1">    30.29</TD>  </TR>
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
  <TR id="0" style="font-size:15px;"><TD class="mrc0t">Test Number</TD><TD class="mrc0tc" colspan="1">FD_3359</TD><TD class="mrc0tc" colspan="1">FD_3353</TD>  </TR>
  <TR id="0" style="font-size:15px;">
  <TD class="mrc0">TEST INFO:<BR/>Num Cells<BR/>TestFileName (Cell0)<BR/><BR/><BR/><BR/>TestFileName (Cell1)<BR/><BR/><BR/><BR/>TestFileName (Cell2)<BR/><BR/><BR/><BR/>FrameType (Cell0)<BR/>FrameType (Cell1)<BR/>FrameType (Cell2)</TD>
<TD class="mrc0c" colspan="1"><BR/>3
<BR/>fd/mu1_100mhz/<BR/>359/fd_testcon<BR/>fig_tst359.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>359/fd_testcon<BR/>fig_tst359.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>359/fd_testcon<BR/>fig_tst359.cfg<BR/><BR/>DDDSUUDDDD<BR/>DDDSUUDDDD<BR/>DDDSUUDDDD</TD>
<TD class="mrc0c" colspan="1"><BR/>3
<BR/>fd/mu1_100mhz/<BR/>353/fd_testcon<BR/>fig_tst353.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>353/fd_testcon<BR/>fig_tst353.cfg<BR/><BR/>fd/mu1_100mhz/<BR/>353/fd_testcon<BR/>fig_tst353.cfg<BR/><BR/>DDDSUUDDDD<BR/>DDDSUUDDDD<BR/>DDDSUUDDDD</TD>
  </TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc1t">Test Number</TD><TD class="mrc1tc" colspan="1">FD_3359</TD><TD class="mrc1tc" colspan="1">FD_3353</TD>  </TR>
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
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4, 4, 4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD><TD class="mrc1c" colspan="1"><BR/>
1<BR/>1<BR/>1<BR/>
1<BR/>2<BR/>1<BR/>1<BR/>2<BR/>4, 4, 4<BR/>
2<BR/>1<BR/>1<BR/>1<BR/>
1<BR/>1<BR/>12<BR/>1<BR/>
4<BR/>4<BR/>2<BR/>
</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">PhyStart (Mode / Period / Count)</TD><TD class="mrc1c" colspan="1">1 1 40207</TD><TD class="mrc1c" colspan="1">1 1 40207</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">HyperThreading</TD><TD class="mrc1c" colspan="1">ON</TD><TD class="mrc1c" colspan="1">ON</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">LDPC Offload</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD><TD class="mrc1c" colspan="1">UNKNOWN</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Number of Cells</TD><TD class="mrc1c" colspan="1">3</TD><TD class="mrc1c" colspan="1">3</TD>  </TR>
  <TR id="0"><TD class="mrc1" style="font-size:15px;">Total BBU Cores Allocated (Logical / Physical Cores)</TD><TD class="mrc1c" colspan="1">6.0 / 3.0</TD><TD class="mrc1c" colspan="1">8.0 / 4.0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Pooled BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">5.0 / 2.5</TD><TD class="mrc1lc" colspan="1">7.0 / 3.5</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>07000060</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>0F0000E0</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">Dedicated SRS BBU Cores (Logical / Physical Cores)</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD><TD class="mrc1lc" colspan="1">1.0 / 0.5</TD>  </TR>
  <TR id="0"><TD class="mrc1l" style="font-size:15px;">64 bit Mask in Hex<BR/>Cores 0->63<BR/>&nbsp;</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD><TD class="mrc1lc" colspan="1">&nbsp;<BR/>00000000<BR/>00000010</TD>  </TR>
  <TR id="0"><TH class="mrc2" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Average Logical BBU Core Utilization (Normalized - in %)</TH>  <TH class="mrc2c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="2">Average Logical BBU Core Utilization (Normalized - in %)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2">Test Number</TD><TD class="mrc2c" colspan="1">FD_3359</TD><TD class="mrc2c" colspan="1">FD_3353</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Pooled Cores</TD><TD class="mrc6" colspan="1">39%</TD><TD class="mrc6" colspan="1">35%</TD>  </TR>
  <TR id="0"><TD class="mrc2" style="font-size:15px;">Dedicated SRS Cores</TD><TD class="mrc6" colspan="1">16%</TD><TD class="mrc6" colspan="1">17%</TD>  </TR>
  <TR id="0"><TD class="mrc2l" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">All Logical Cores<BR/>&nbsp;</TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">35% on 6 C<BR/> <B style="color:blue;">(210%)</B></TD><TD class="mrc6l" style="border-top: 2px solid RGB(0,0,0);" colspan="1">32% on 8 C<BR/> <B style="color:blue;">(256%)</B></TD>  </TR>
  <TR id="0"><TH class="mrc2n" style="font-size:15px;">Total Cores Needed (1 TTI based budget for processing the tasks)</TH>  <TH class="mrc2nc" style="font-size:15px;" colspan="2">Total Cores Needed (1 TTI based budget for processing the tasks)</TH></TR>
  <TR id="0" style="font-size:15px;"><TD class="mrc2n">Test Number</TD><TD class="mrc2nc">FD_3359_MU1</TD><TD class="mrc2nc">FD_3353_MU1</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.49<BR/>(     0.25 <I>Phys</I> )</TD><TD class="mrc6">     0.54<BR/>(     0.27 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.60<BR/>(     0.30 <I>Phys</I> )</TD><TD class="mrc6">     1.25<BR/>(     0.62 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL SRS Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.18<BR/>(     0.09 <I>Phys</I> )</TD><TD class="mrc6">     0.18<BR/>(     0.09 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL DL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.11<BR/>(     0.05 <I>Phys</I> )</TD><TD class="mrc6">     0.12<BR/>(     0.06 <I>Phys</I> )</TD>  </TR>
  <TR id="0"><TD class="mrc2n" style="font-size:15px;">TOTAL UL BeamForming Logical Cores (Per Cell) <BR/>&nbsp;</TD><TD class="mrc6">     0.06<BR/>(     0.03 <I>Phys</I> )</TD><TD class="mrc6">     0.06<BR/>(     0.03 <I>Phys</I> )</TD>  </TR>
  <TR id="1" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency - Avg across all Cells (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="2">Processing Latency - Avg across all Cells (% of TTI)</TH></TR>  <TR id="1"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl">FD_3359_MU1</TD><TD class="mrc3cl">FD_3353_MU1</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency</TD><TD class="mrc6c">       41%</TD><TD class="mrc6c">       40%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency</TD><TD class="mrc6c">       59%</TD><TD class="mrc6c">       60%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency</TD><TD class="mrc6cl">       90%</TD><TD class="mrc6cl">       98%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       56%</TD><TD class="mrc6c">       93%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA)</TD><TD class="mrc6c">       65%</TD><TD class="mrc6c">      103%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA)</TD><TD class="mrc6cl">       70%</TD><TD class="mrc6cl">      111%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA)</TD><TD class="mrc6c">        0%</TD><TD class="mrc6c">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA)</TD><TD class="mrc6cl">        0%</TD><TD class="mrc6cl">        0%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">        5%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency</TD><TD class="mrc6c">        5%</TD><TD class="mrc6c">        9%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency</TD><TD class="mrc6cl">        8%</TD><TD class="mrc6cl">       13%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency</TD><TD class="mrc6c">        2%</TD><TD class="mrc6c">        7%</TD>  </TR>
  <TR id="1" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency</TD><TD class="mrc6c">        3%</TD><TD class="mrc6c">       11%</TD>  </TR>
  <TR id="1" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency</TD><TD class="mrc6cl">        4%</TD><TD class="mrc6cl">       17%</TD>  </TR>
  <TR id="2" ><TH class="mrc4" style="font-size:15px;">High Level Break Down per Cell (in usecs)</TH>  <TH class="mrc4c" style="font-size:15px;" colspan="2">High Level Break Down per Cell (in usecs)</TH></TR>  <TR id="2"  style="font-size:15px;"><TD class="mrc4">Test Number</TD><TD class="mrc4c"><B>FD_3359_MU1</B></TD><TD class="mrc4c"><B>FD_3353_MU1</B></TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL CONTROL </TD><TD class="mrc6c">    21.77</TD><TD class="mrc6c">    21.65</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH </TD><TD class="mrc6c">   167.88</TD><TD class="mrc6c">   170.18</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PDSCH FEC </TD><TD class="mrc6c">    21.32</TD><TD class="mrc6c">    36.24</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH FEC </TD><TD class="mrc6c">    16.57</TD><TD class="mrc6c">    32.33</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUSCH </TD><TD class="mrc6c">   195.51</TD><TD class="mrc6c">   453.63</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PUCCH </TD><TD class="mrc6c">    69.92</TD><TD class="mrc6c">   116.61</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">PRACH </TD><TD class="mrc6c">    10.67</TD><TD class="mrc6c">    10.73</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">SRS </TD><TD class="mrc6c">    91.07</TD><TD class="mrc6c">    91.59</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">DL BEAM </TD><TD class="mrc6c">    57.08</TD><TD class="mrc6c">    59.46</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">UL BEAM </TD><TD class="mrc6c">    32.00</TD><TD class="mrc6c">    31.03</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">MAC-PHY API </TD><TD class="mrc6c">    26.49</TD><TD class="mrc6c">    27.92</TD>  </TR>
  <TR id="2" ><TD class="mrc4" style="font-size:15px;">OTHERS </TD><TD class="mrc6c">    18.14</TD><TD class="mrc6c">    22.80</TD>  </TR>
  <TR id="2" ><TD class="mrc4t" style="font-size:15px;">TOTAL</TD><TD class="mrc6ct">   728.42</TD><TD class="mrc6ct">  1074.17</TD>  </TR>
  <TR id="3" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="2">Task Level Break Down Averaged over all cells per TTI (in usecs)</TH></TR>  <TR id="3"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c">FD_3359_MU1</TD><TD class="mrc5c">FD_3353_MU1</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_CFG (100) </TD><TD class="mrc6c">    17.96</TD><TD class="mrc6c">    17.51</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.53</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.41</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.22</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    17.22</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c">     8.53</TD><TD class="mrc6c">    14.71</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c">     2.57</TD><TD class="mrc6c">     4.30</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    18.73</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    22.85</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PDSCH_RS (340) </TD><TD class="mrc6c">    44.39</TD><TD class="mrc6c">    44.42</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c">   104.75</TD><TD class="mrc6c">   102.91</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c">    11.33</TD><TD class="mrc6c">    11.20</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c">    10.44</TD><TD class="mrc6c">    10.45</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.64</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.76</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_POST (700) </TD><TD class="mrc6c">     0.08</TD><TD class="mrc6c">     0.07</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.09</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.14</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c">     2.51</TD><TD class="mrc6c">     2.55</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c">    72.21</TD><TD class="mrc6c">   112.48</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c">     0.33</TD><TD class="mrc6c">     0.35</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c">   102.47</TD><TD class="mrc6c">   286.18</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c">     6.63</TD><TD class="mrc6c">    37.69</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     3.62</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     8.76</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c">     2.47</TD><TD class="mrc6c">     7.62</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_PUSCH_TB (1100) </TD><TD class="mrc6c">    10.48</TD><TD class="mrc6c">    15.95</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.26</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     2.24</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    69.92</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">   116.61</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.67</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    10.73</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.98</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     5.89</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE (1300) </TD><TD class="mrc6c">    82.50</TD><TD class="mrc6c">    83.02</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_SRS_REPORT (1460) </TD><TD class="mrc6c">     2.60</TD><TD class="mrc6c">     2.67</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     9.42</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    12.97</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    57.08</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    59.46</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    32.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">    31.03</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c">     0.00</TD><TD class="mrc6c">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="3" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);">     0.00</TD>  </TR>
  <TR id="4" ><TH class="mrc3" style="font-size:15px; border-top: 2px solid RGB(0,0,0);">Processing Latency Per Cell (% of TTI)</TH>  <TH class="mrc3c" style="font-size:15px; border-top: 2px solid RGB(0,0,0);" colspan="2">Processing Latency Per Cell (% of TTI)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc3l">Test Number</TD><TD class="mrc3cl" colspan="1">FD_3359</TD><TD class="mrc3cl" colspan="1">FD_3353</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       40%</TD><TD class="mrc6c" colspan="1">       38%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 0</TD><TD class="mrc6c" colspan="1">       58%</TD><TD class="mrc6c" colspan="1">       58%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 0</TD><TD class="mrc6cl" colspan="1">       89%</TD><TD class="mrc6cl" colspan="1">       97%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       41%</TD><TD class="mrc6c" colspan="1">       38%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 1</TD><TD class="mrc6c" colspan="1">       59%</TD><TD class="mrc6c" colspan="1">       59%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 1</TD><TD class="mrc6cl" colspan="1">       89%</TD><TD class="mrc6cl" colspan="1">       97%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       41%</TD><TD class="mrc6c" colspan="1">       40%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL Processing Latency CC 2</TD><TD class="mrc6c" colspan="1">       59%</TD><TD class="mrc6c" colspan="1">       60%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL Processing Latency CC 2</TD><TD class="mrc6cl" colspan="1">       90%</TD><TD class="mrc6cl" colspan="1">       98%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       45%</TD><TD class="mrc6c" colspan="1">       91%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">       56%</TD><TD class="mrc6c" colspan="1">      100%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">       67%</TD><TD class="mrc6cl" colspan="1">      110%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       48%</TD><TD class="mrc6c" colspan="1">       92%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">       61%</TD><TD class="mrc6c" colspan="1">      102%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">       69%</TD><TD class="mrc6cl" colspan="1">      111%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">       56%</TD><TD class="mrc6c" colspan="1">       93%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">       65%</TD><TD class="mrc6c" colspan="1">      103%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">       70%</TD><TD class="mrc6cl" colspan="1">      111%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 0</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 1</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6c" colspan="1">        0%</TD><TD class="mrc6c" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max SRS Processing Latency (excludes OTA) CC 2</TD><TD class="mrc6cl" colspan="1">        0%</TD><TD class="mrc6cl" colspan="1">        0%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        4%</TD><TD class="mrc6c" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        7%</TD><TD class="mrc6cl" colspan="1">       13%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        3%</TD><TD class="mrc6c" colspan="1">        4%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        5%</TD><TD class="mrc6c" colspan="1">        8%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        7%</TD><TD class="mrc6cl" colspan="1">       12%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min DL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        3%</TD><TD class="mrc6c" colspan="1">        5%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg DL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        5%</TD><TD class="mrc6c" colspan="1">        9%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max DL FEC Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        8%</TD><TD class="mrc6cl" colspan="1">       13%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        2%</TD><TD class="mrc6c" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 0</TD><TD class="mrc6c" colspan="1">        3%</TD><TD class="mrc6c" colspan="1">       10%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 0</TD><TD class="mrc6cl" colspan="1">        4%</TD><TD class="mrc6cl" colspan="1">       16%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        2%</TD><TD class="mrc6c" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 1</TD><TD class="mrc6c" colspan="1">        3%</TD><TD class="mrc6c" colspan="1">       11%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 1</TD><TD class="mrc6cl" colspan="1">        4%</TD><TD class="mrc6cl" colspan="1">       16%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Min UL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        2%</TD><TD class="mrc6c" colspan="1">        7%</TD>  </TR>
  <TR id="4" ><TD class="mrc3" style="font-size:15px;">Avg UL FEC Link Latency CC 2</TD><TD class="mrc6c" colspan="1">        3%</TD><TD class="mrc6c" colspan="1">       11%</TD>  </TR>
  <TR id="4" ><TD class="mrc3l" style="font-size:15px;">Max UL FEC Link Latency CC 2</TD><TD class="mrc6cl" colspan="1">        4%</TD><TD class="mrc6cl" colspan="1">       17%</TD>  </TR>
  <TR id="4" ><TH class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);">Task Level Break Down per Cell per TTI (in usecs)</TH>  <TH class="mrc5c" style="font-size:15px; border-top: 2px solid RGB(0,0,0); border-bottom: 4px solid RGB(0,0,0);" colspan="2">Task Level Break Down per Cell per TTI (in usecs)</TH></TR>  <TR id="4"  style="font-size:15px;"><TD class="mrc5">Test Number</TD><TD class="mrc5c" colspan="1">FD_3359</TD><TD class="mrc5c" colspan="1">FD_3353</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC00_GNB_DL_CFG (100) </TD><TD class="mrc6c" colspan="1">    17.88</TD><TD class="mrc6c" colspan="1">    17.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CFG (101) </TD><TD class="mrc6c" colspan="1">    18.10</TD><TD class="mrc6c" colspan="1">    17.64</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CFG (102) </TD><TD class="mrc6c" colspan="1">    17.89</TD><TD class="mrc6c" colspan="1">    17.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_CFG (140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.78</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_CFG (141) </TD><TD class="mrc6c" colspan="1">     8.55</TD><TD class="mrc6c" colspan="1">    10.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_CFG (142) </TD><TD class="mrc6c" colspan="1">     8.26</TD><TD class="mrc6c" colspan="1">    10.35</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_CRC (180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.03</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    16.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_CRC (181) </TD><TD class="mrc6c" colspan="1">    10.17</TD><TD class="mrc6c" colspan="1">    16.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_CRC (182) </TD><TD class="mrc6c" colspan="1">    10.47</TD><TD class="mrc6c" colspan="1">    17.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_CB_SETUP (220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.40</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    14.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_CB_SETUP (221) </TD><TD class="mrc6c" colspan="1">     8.49</TD><TD class="mrc6c" colspan="1">    14.72</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_CB_SETUP (222) </TD><TD class="mrc6c" colspan="1">     8.70</TD><TD class="mrc6c" colspan="1">    14.93</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_TB_QUEUE (260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.67</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     4.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_TB_QUEUE (261) </TD><TD class="mrc6c" colspan="1">     2.56</TD><TD class="mrc6c" colspan="1">     4.41</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_TB_QUEUE (262) </TD><TD class="mrc6c" colspan="1">     2.47</TD><TD class="mrc6c" colspan="1">     4.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_SCRAMBLER (300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    18.81</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    23.10</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_SCRAMBLER (301) </TD><TD class="mrc6c" colspan="1">    18.75</TD><TD class="mrc6c" colspan="1">    22.84</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_SCRAMBLER (302) </TD><TD class="mrc6c" colspan="1">    18.62</TD><TD class="mrc6c" colspan="1">    22.62</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PDSCH_RS (340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    43.97</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    43.90</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PDSCH_RS (341) </TD><TD class="mrc6c" colspan="1">    44.71</TD><TD class="mrc6c" colspan="1">    44.36</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PDSCH_RS (342) </TD><TD class="mrc6c" colspan="1">    44.50</TD><TD class="mrc6c" colspan="1">    44.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_SYMBOL_PROC (380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   105.98</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   104.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_SYMBOL_PROC (381) </TD><TD class="mrc6c" colspan="1">   104.26</TD><TD class="mrc6c" colspan="1">   102.88</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_SYMBOL_PROC (382) </TD><TD class="mrc6c" colspan="1">   104.01</TD><TD class="mrc6c" colspan="1">   101.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PDSCH_BEAM_FORMING (420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PDSCH_BEAM_FORMING (421) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PDSCH_BEAM_FORMING (422) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_CSI_PROC (460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_CSI_PROC (461) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_CSI_PROC (462) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PROC (500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    11.48</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.98</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PROC (501) </TD><TD class="mrc6c" colspan="1">    11.37</TD><TD class="mrc6c" colspan="1">    11.24</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PROC (502) </TD><TD class="mrc6c" colspan="1">    11.14</TD><TD class="mrc6c" colspan="1">    11.38</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_UCI_PROC (540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.34</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_UCI_PROC (541) </TD><TD class="mrc6c" colspan="1">    10.49</TD><TD class="mrc6c" colspan="1">    10.52</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_UCI_PROC (542) </TD><TD class="mrc6c" colspan="1">    10.49</TD><TD class="mrc6c" colspan="1">    10.59</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_DCI_PRECODER (580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_DCI_PRECODER (581) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_DCI_PRECODER (582) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_PBCH_PROC (620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_PBCH_PROC (621) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_PBCH_PROC (622) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_RESET_BUF (660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.73</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_RESET_BUF (661) </TD><TD class="mrc6c" colspan="1">     8.97</TD><TD class="mrc6c" colspan="1">     9.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_RESET_BUF (662) </TD><TD class="mrc6c" colspan="1">     8.22</TD><TD class="mrc6c" colspan="1">     9.70</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_POST (700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.08</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_POST (701) </TD><TD class="mrc6c" colspan="1">     0.06</TD><TD class="mrc6c" colspan="1">     0.07</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_POST (702) </TD><TD class="mrc6c" colspan="1">     0.09</TD><TD class="mrc6c" colspan="1">     0.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DMRS (740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.06</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    12.03</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DMRS (741) </TD><TD class="mrc6c" colspan="1">     9.10</TD><TD class="mrc6c" colspan="1">    12.17</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DMRS (742) </TD><TD class="mrc6c" colspan="1">     9.11</TD><TD class="mrc6c" colspan="1">    12.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB0 (780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.74</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.77</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB0 (781) </TD><TD class="mrc6c" colspan="1">     2.46</TD><TD class="mrc6c" colspan="1">     2.50</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB0 (782) </TD><TD class="mrc6c" colspan="1">     2.33</TD><TD class="mrc6c" colspan="1">     2.39</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CE_SYMB7 (820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    68.99</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   113.33</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CE_SYMB7 (821) </TD><TD class="mrc6c" colspan="1">    72.23</TD><TD class="mrc6c" colspan="1">   113.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CE_SYMB7 (822) </TD><TD class="mrc6c" colspan="1">    75.41</TD><TD class="mrc6c" colspan="1">   110.56</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_RNN_CALC (860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_RNN_CALC (861) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_RNN_CALC (862) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB0 (900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.48</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.49</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB0 (901) </TD><TD class="mrc6c" colspan="1">     0.27</TD><TD class="mrc6c" colspan="1">     0.29</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB0 (902) </TD><TD class="mrc6c" colspan="1">     0.25</TD><TD class="mrc6c" colspan="1">     0.28</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_MMSE_SYMB7 (940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   101.74</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   284.92</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_MMSE_SYMB7 (941) </TD><TD class="mrc6c" colspan="1">   102.29</TD><TD class="mrc6c" colspan="1">   286.63</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_MMSE_SYMB7 (942) </TD><TD class="mrc6c" colspan="1">   103.37</TD><TD class="mrc6c" colspan="1">   286.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DESCRAMBLE (980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.46</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    37.02</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DESCRAMBLE (981) </TD><TD class="mrc6c" colspan="1">     6.49</TD><TD class="mrc6c" colspan="1">    37.97</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DESCRAMBLE (982) </TD><TD class="mrc6c" colspan="1">     6.95</TD><TD class="mrc6c" colspan="1">    38.09</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_CB_SETUP (1060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     3.55</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     8.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_CB_SETUP (1061) </TD><TD class="mrc6c" colspan="1">     3.60</TD><TD class="mrc6c" colspan="1">     8.82</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_CB_SETUP (1062) </TD><TD class="mrc6c" colspan="1">     3.71</TD><TD class="mrc6c" colspan="1">     8.68</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_DECODER (1020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.47</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     7.74</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_DECODER (1021) </TD><TD class="mrc6c" colspan="1">     2.46</TD><TD class="mrc6c" colspan="1">     7.58</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_DECODER (1022) </TD><TD class="mrc6c" colspan="1">     2.49</TD><TD class="mrc6c" colspan="1">     7.53</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_TB (1100) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    10.45</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    16.47</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_TB (1101) </TD><TD class="mrc6c" colspan="1">    10.43</TD><TD class="mrc6c" colspan="1">    15.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_TB (1102) </TD><TD class="mrc6c" colspan="1">    10.57</TD><TD class="mrc6c" colspan="1">    15.54</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUSCH_UCI_DECODER (1140) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.22</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.25</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUSCH_UCI_DECODER (1141) </TD><TD class="mrc6c" colspan="1">     2.30</TD><TD class="mrc6c" colspan="1">     2.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUSCH_UCI_DECODER (1142) </TD><TD class="mrc6c" colspan="1">     2.27</TD><TD class="mrc6c" colspan="1">     2.23</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PUCCH_RX (1180) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    72.02</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">   118.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PUCCH_RX (1181) </TD><TD class="mrc6c" colspan="1">    70.66</TD><TD class="mrc6c" colspan="1">   117.76</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PUCCH_RX (1182) </TD><TD class="mrc6c" colspan="1">    67.09</TD><TD class="mrc6c" colspan="1">   113.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_PRACH_PROCESS (1220) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    11.15</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    11.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_PRACH_PROCESS (1221) </TD><TD class="mrc6c" colspan="1">    10.60</TD><TD class="mrc6c" colspan="1">    10.34</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_PRACH_PROCESS (1222) </TD><TD class="mrc6c" colspan="1">    10.28</TD><TD class="mrc6c" colspan="1">    10.18</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_RX (1260) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.28</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     6.30</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_RX (1261) </TD><TD class="mrc6c" colspan="1">     5.88</TD><TD class="mrc6c" colspan="1">     5.78</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_RX (1262) </TD><TD class="mrc6c" colspan="1">     5.77</TD><TD class="mrc6c" colspan="1">     5.60</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE (1300) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    84.56</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    82.43</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE (1301) </TD><TD class="mrc6c" colspan="1">    83.98</TD><TD class="mrc6c" colspan="1">    81.85</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE (1302) </TD><TD class="mrc6c" colspan="1">    78.95</TD><TD class="mrc6c" colspan="1">    84.79</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_CB_SETUP (1340) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_CB_SETUP (1341) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_CB_SETUP (1342) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_FFT_RUN_FUNC (1380) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_FFT_RUN_FUNC (1381) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_FFT_RUN_FUNC (1382) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_CE_POST (1420) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_CE_POST (1421) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_CE_POST (1422) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_SRS_REPORT (1460) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.92</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     2.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_SRS_REPORT (1461) </TD><TD class="mrc6c" colspan="1">     2.56</TD><TD class="mrc6c" colspan="1">     2.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_SRS_REPORT (1462) </TD><TD class="mrc6c" colspan="1">     2.31</TD><TD class="mrc6c" colspan="1">     2.67</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_POST (1500) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     9.23</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    13.04</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_POST (1501) </TD><TD class="mrc6c" colspan="1">     9.46</TD><TD class="mrc6c" colspan="1">    12.99</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_POST (1502) </TD><TD class="mrc6c" colspan="1">     9.57</TD><TD class="mrc6c" colspan="1">    12.86</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_TASK (1540) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    56.54</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    59.32</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_TASK (1541) </TD><TD class="mrc6c" colspan="1">    58.15</TD><TD class="mrc6c" colspan="1">    59.48</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_TASK (1542) </TD><TD class="mrc6c" colspan="1">    56.55</TD><TD class="mrc6c" colspan="1">    59.57</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_TASK (1580) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    31.56</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">    30.89</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_TASK (1581) </TD><TD class="mrc6c" colspan="1">    32.08</TD><TD class="mrc6c" colspan="1">    31.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_TASK (1582) </TD><TD class="mrc6c" colspan="1">    32.37</TD><TD class="mrc6c" colspan="1">    31.21</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1620) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1621) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_PUCCH_BEAM_WEIGHT_TASK (1622) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_ORAN (1660) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_ORAN (1661) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_ORAN (1662) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_IQ_COMPRESS (1700) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_IQ_COMPRESS (1701) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_IQ_COMPRESS (1702) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMPRESS (1740) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMPRESS (1741) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMPRESS (1742) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_BEAM_WEIGHT_COMPRESS (1780) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_BEAM_WEIGHT_COMPRESS (1781) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_BEAM_WEIGHT_COMPRESS (1782) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_BEAM_WEIGHT_COMPRESS (1820) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_BEAM_WEIGHT_COMPRESS (1821) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_BEAM_WEIGHT_COMPRESS (1822) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_SRS_IQ_DECOMPRESS (1860) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_SRS_IQ_DECOMPRESS (1861) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_SRS_IQ_DECOMPRESS (1862) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_CTRL_COMPRESS (1900) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_CTRL_COMPRESS (1901) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_CTRL_COMPRESS (1902) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_RS_COMPRESS (1940) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_RS_COMPRESS (1941) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_RS_COMPRESS (1942) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_DL_OFDM_DATA_COMPRESS (1980) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_DL_OFDM_DATA_COMPRESS (1981) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_DL_OFDM_DATA_COMPRESS (1982) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUSCH (2020) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUSCH (2021) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUSCH (2022) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; border-top: 2px solid RGB(0,0,0); background-color:rgb(189, 215, 238);">CC00_GNB_UL_IQ_DECOMP_PUCCH (2060) </TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD><TD class="mrc6c" style="border-top: 2px solid RGB(0,0,0);" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC01_GNB_UL_IQ_DECOMP_PUCCH (2061) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR id="4" ><TD class="mrc5" style="font-size:15px; background-color:rgb(189, 215, 238);">CC02_GNB_UL_IQ_DECOMP_PUCCH (2062) </TD><TD class="mrc6c" colspan="1">     0.00</TD><TD class="mrc6c" colspan="1">     0.00</TD>  </TR>
  <TR><TH class="mrc7b"></TH><TH class="mrc7" colspan="2"></TH></TR> </TABLE>
 </DIV>

   \endhtmlonly
 <BR/><BR/>

 </DIV>
**/



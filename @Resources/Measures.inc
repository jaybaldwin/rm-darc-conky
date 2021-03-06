;•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
;Measures
;•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
[Mse_CPU]
Measure=CPU

[Mse_CPU1]
Measure=CPU
Processor=1

[Mse_CPU2]
Measure=CPU
Processor=2

[Mse_CPU3]
Measure=CPU
Processor=3

[Mse_CPU4]
Measure=CPU
Processor=4

[Mse_CPU5]
Measure=CPU
Processor=5

[Mse_CPU6]
Measure=CPU
Processor=6

[Mse_CPU7]
Measure=CPU
Processor=7

[Mse_CPU8]
Measure=CPU
Processor=8

[Mse_CPU9]
Measure=CPU
Processor=9

[Mse_CPU10]
Measure=CPU
Processor=10

[Mse_CPU11]
Measure=CPU
Processor=11

[Mse_CPU12]
Measure=CPU
Processor=12



[HWiNFO_CPU_Temp_webjay]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0002a00
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000006
HWiNFOType=CurrentValue

[HWiNFO_CPU_Temp_vamp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=0xf0002a00
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000006
HWiNFOType=CurrentValue


[Mse_TopCPUNames0]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll

; Indicates if this init entry should re-look at the process list
;      1 = Yes, 0 = No
;      If you do more than one config entry, only one needs to do the ReQuery
ReQuery=1

; Pipe-delimited processess to exclude from the list (can handle wildcards, use the % or * character)
; GlobalIgnoredProcesses is MORE efficient than SpecificIgnoredProcesses as it filters globally (at the Perfmon query)
; If you use GlobalIgnoredProcesses to filter, processes will be excluded from all measures using the 
GlobalIgnoredProcesses=Idle|*Total|rundll32|wscript|userinit|Memory Compression|Rainmeter|WmiPrvSe*|HWiNFO*

; Metric for which to determine top processes (CPU or Memory)
MetricType=CPU

; The top processes to find can be a single number (e.g. 0 = top one process) or a range (0-4 = top five processes)
ProcNums=0

; Format in which to return the results... any string including the following keys: %pName %pID %CPU %Memory
Format="%pName"

; A multiple of update timespans to actually perform the update (see http://rainmeter.net/cms/Tips-UsingUpdateDividerRate).
; Only pertinent when ReQuery = 1
UpdateDivider=2


[Mse_TopCPUNames1_4]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll

; Indicates if this init entry should re-look at the process list
;      1 = Yes, 0 = No
;      If you do more than one config entry, only one needs to do the ReQuery
ReQuery=0

; Pipe-delimited processess to exclude from the list (can handle wildcards, use the % or * character)
; SpecificIgnoredProcesses is LESS efficient than GlobalIgnoredProcesses as it filters per measure.
; The processes below will ONLY be filtered for MeasureTopCPU
; SpecificIgnoredProcesses can be used on any measure, regardless of ReQuery value
;SpecificIgnoredProcesses=Rainmeter|svchost*

; Metric for which to determine top processes (CPU or Memory)
MetricType=CPU

; The top processes to find can be a single number (e.g. 0 = top one process) or a range (0-4 = top five processes)
ProcNums=1-3

; Format in which to return the results... any string including the following keys: %pName %pID %CPU %Memory
;Format="%CPU%: %pName"
Format="%pName"


[Mse_TopCPUpid0]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=CPU
ProcNums=0
;Format="%CPU%: %pName"
Format="%pID"


[Mse_TopCPUpID1_4]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=CPU
ProcNums=1-3
;Format="%CPU%: %pName"
Format="%pID"


[Mse_TopCPU%0]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=CPU
ProcNums=0
;Format="%CPU%: %pName"
Format="%CPU%"


[Mse_TopCPU%1_4]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=CPU
ProcNums=1-3
;Format="%CPU%: %pName"
Format="%CPU%"



;Memory
;-----------
[Mse_RAMUsed]
Measure=PhysicalMemory 

[Mse_RAMFree]
Measure=PhysicalMemory 
InvertMeasure=1

[Mse_RAM_Total]
Measure=Calc
Formula=Mse_RAMFree + Mse_RAMUsed

[Mse_SWPUsed]
Measure=SwapMemory

[Mse_SWPFree]
Measure=SwapMemory
InvertMeasure=1

[Mse_SWPTotal]
Measure=Calc
Formula=Mse_SWPFree + Mse_SWPUsed




[Mse_TopMemoryNames0]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll

; Indicates if this init entry should re-look at the process list
;      1 = Yes, 0 = No
;      If you do more than one config entry, only one needs to do the ReQuery
ReQuery=0

; Pipe-delimited processess to exclude from the list (can handle wildcards, use the % or * character)
; GlobalIgnoredProcesses is MORE efficient than SpecificIgnoredProcesses as it filters globally (at the Perfmon query)
; If you use GlobalIgnoredProcesses to filter, processes will be excluded from all measures using the 
;GlobalIgnoredProcesses=Idle|*Total|rundll32|wscript|userinit

; Metric for which to determine top processes (CPU or Memory)
MetricType=Memory

; The top processes to find can be a single number (e.g. 0 = top one process) or a range (0-4 = top five processes)
ProcNums=0

; Format in which to return the results... any string including the following keys: %pName %pID %CPU %Memory
Format="%pName"

; A multiple of update timespans to actually perform the update (see http://rainmeter.net/cms/Tips-UsingUpdateDividerRate).
; Only pertinent when ReQuery = 1
UpdateDivider=2

[Mse_TopMemoryNames1_4]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll

; Indicates if this init entry should re-look at the process list
;      1 = Yes, 0 = No
;      If you do more than one config entry, only one needs to do the ReQuery
ReQuery=0

; Pipe-delimited processess to exclude from the list (can handle wildcards, use the % or * character)
; SpecificIgnoredProcesses is LESS efficient than GlobalIgnoredProcesses as it filters per measure.
; The processes below will ONLY be filtered for MeasureTopCPU
; SpecificIgnoredProcesses can be used on any measure, regardless of ReQuery value
;SpecificIgnoredProcesses=Rainmeter|svchost*

; Metric for which to determine top processes (CPU or Memory)
MetricType=Memory

; The top processes to find can be a single number (e.g. 0 = top one process) or a range (0-4 = top five processes)
ProcNums=1-3

; Format in which to return the results... any string including the following keys: %pName %pID %CPU %Memory
;Format="%CPU%: %pName"
Format="%pName"


[Mse_TopMemorypid0]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=Memory
ProcNums=0
;Format="%CPU%: %pName"
Format="%pID"


[Mse_TopMemorypID1_4]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=Memory
ProcNums=1-3
;Format="%CPU%: %pName"
Format="%pID"


[Mse_TopMemory%0]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=Memory
ProcNums=0
;Format="%CPU%: %pName"
Format="%Memory"


[Mse_TopMemory%1_4]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=0
MetricType=CPU
ProcNums=1-3
;Format="%CPU%: %pName"
Format="%Memory"








































[Mse_NetIn]
Measure=NetIn
Substitute="k":"K","m":"M","g":"G","t":"T"

[Mse_NetIn1]
Measure=Calc
Formula=Mse_NetIn*8/1024

[Mse_NetOut]
Measure=NetOut
Substitute="k":"K","m":"M","g":"G","t":"T"

[Mse_NetOut1]
Measure=Calc
Formula=Mse_NetOut*8/1024

[Mse_Time]
Measure=Time
Format=#TimeFormat#
;Substitute=#TimeSubstitute#

[Mse_Date]
Measure=Time
Format=#DateFormat#
;Substitute=#MonthName#

[Mse_Weekday]
Measure=Time
Format="%A"
;Substitute=#DayName#

[Mse_WinUptime]
Measure=Uptime
Format="%4!i!d %3!i!h %2!i!m %1!i!s"
DynamicVariables=1

[Mse_UserName]
Measure= Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=USER_NAME

[Mse_ComputerName]
Measure= Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=COMPUTER_NAME

[Mse_Screen_Size]
Measure= Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=SCREEN_SIZE

[Mse_OS]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=OS_VERSION

[Mse_CPU_Speed]
Measure=Plugin
Plugin=Plugins\PowerPlugin.dll
PowerState=MHZ

[Mse_CPU_Speed1]
Measure=Calc
Formula=Mse_CPU_Speed/1000


;Measure maximum CPU time for use in MaxValue in other measures
[Mse_CPU_Max]
Measure=Plugin
Plugin=Plugins\AdvancedCPU.dll


[Mse_CPU_Max_GHz]
Measure=Calc
Formula=Mse_CPU_Max/1000/1000

;Measure current CPU usage with MaxValue set
[Mse_CPU_Max_child]
Measure=Plugin
Plugin=Plugins\AdvancedCPU.dll
CPUExclude=Idle;Rainmeter
MaxValue=[Mse_CPU_Max]
DynamicVariables=1

;Measure CPU usage of top process with MaxValue set
[Mse_CPU_Top%]
Measure=Plugin
Plugin=Plugins\AdvancedCPU.dll
CPUExclude=Idle
TopProcess=1
MaxValue=[Mse_CPU_Max]
DynamicVariables=1

[Mse_Processes]
Measure=Plugin
Plugin=plugins\PerfMon.dll
PerfMonObject="System"
PerfMonCounter="Processes"
PerfMonInstance=""
PerfMonDifference=0

[Mse_TopProcessName]
Measure=Plugin
Plugin=Plugins\AdvancedCPU.dll
TopProcess=2
CPUExclude=Idle;Rainmeter


;Show CPU usage of top process as a percentage
[Mse_TopProcessUsage]
Measure=Plugin
Plugin=Plugins\AdvancedCPU.dll
TopProcess=1
CPUExclude=Idle

;[Mse_DiskIO]
;Measure=Plugin
;Plugin=PerfMon.dll
;PerfMonObject=LogicalDisk
;PerfMonCounter="Disk Bytes/sec"
;PerfMonInstance=_Total
;PerfMonInstance="C:"

[Mse_DiskIO_Read]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=PhysicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance=_Total

[Mse_DiskIO_Read_KB]
Measure=Calc
Formula=Mse_DiskIO_Read/1024

[Mse_DiskIO_Write]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=PhysicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance=_Total

[Mse_DiskIO_Write_KB]
Measure=Calc
Formula=Mse_DiskIO_Write/1024


[Mse_DiskIO_ReadC]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance=C:

[Mse_DiskIO_Read_KBC]
Measure=Calc
Formula=Mse_DiskIO_ReadC/1024/1024

[Mse_DiskIO_WriteC]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance=C:

[Mse_DiskIO_Write_KBC]
Measure=Calc
Formula=Mse_DiskIO_WriteC/1024/1024


[Mse_DiskIO_ReadD]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance=D:

[Mse_DiskIO_Read_KBD]
Measure=Calc
Formula=Mse_DiskIO_ReadD/1024/1024

[Mse_DiskIO_WriteD]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance=D:

[Mse_DiskIO_Write_KBD]
Measure=Calc
Formula=Mse_DiskIO_WriteD/1024/1024



[Mse_Domain]
Measure= Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=DOMAIN_NAME

[Mse_TCP]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=TCP
PerfMonCounter="Connections Active"
PerfMonInstance=_Total

[Mse_IP]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=IP_ADDRESS
SysInfoData=0

[Mse_IPv6]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=IP_ADDRESS
SysInfoData=0

[Mse_Netmask]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=NET_MASK
SysInfoData=1

[Mse_IPWeb]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=http://checkip.dyndns.org
RegExp="(?siU)<body>(.+)Address: (.+)</body>"
StringIndex=2
UpdateRate=300

[Mse_DNS]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=DNS_SERVER
SysInfoData=0

[Mse_Gateway]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=GATEWAY_ADDRESS
SysInfoData=1

[Mse_NetIn]
Measure=NetIn

[Mse_NetOut]
Measure=NetOut

[Mse_NetInCumulative]
Measure=NetIn
Cumulative=1

[Mse_NetOutCumulative]
Measure=NetOut
Cumulative=1

[Mse_RAM_Total]
Measure=PhysicalMemory
Total=1

[Mse_RAM_Used]
Measure=PhysicalMemory

[Mse_RAM_Free]
Measure=PhysicalMemory
InvertMeasure=1

[Mse_SWAP_Total]
Measure=SwapMemory
Total=1

[Mse_SWAP_Used]
Measure=SwapMemory

[Mse_SWAP_Free]
Measure=SwapMemory
InvertMeasure=1

[Mse_Acline]
Measure=Plugin
PlugIn=PlugIns\PowerPlugin 
PowerState=ACLINE
Substitute="0":"Battery","1":"A/C Outlet"

[Mse_BatStatus]
Measure=Plugin
PlugIn=PlugIns\PowerPlugin 
PowerState=STATUS

[Mse_BatLifetimeRemain]
Measure=Plugin
PlugIn=PlugIns\PowerPlugin 
PowerState=PERCENT

[Mse_BatLifetime]
Measure=Plugin
PlugIn=PlugIns\PowerPlugin 
PowerState=LIFETIME

[Mse_BatLifetimeUsed]
Measure=Plugin
PlugIn=PlugIns\PowerPlugin 
PowerState=PERCENT
InvertMeasure=1

[Mse_SpeedFan_Temp_CPU]
Measure=Plugin
Plugin=Plugins\SpeedFanPlugin.dll
SpeedFanType=TEMPERATURE
SpeedFanNumber=3

[Mse_SpeedFan_Temp_HDD]
Measure=Plugin
Plugin=Plugins\SpeedFanPlugin.dll
SpeedFanType=TEMPERATURE
SpeedFanNumber=0

[Mse_TotalC]
Measure=FreeDiskSpace
Drive=C:
Total=1

[Mse_FreeC]
Measure=FreeDiskSpace
Drive=C:

[Mse_UsedC]
Measure=FreeDiskSpace
Drive=C:
InvertMeasure=1

[Mse_TotalD]
Measure=FreeDiskSpace
Drive=D:
Total=1

[Mse_FreeD]
Measure=FreeDiskSpace
Drive=D:

[Mse_UsedD]
Measure=FreeDiskSpace
Drive=D:
InvertMeasure=1


;TODO: Top Memory Processes


[Header_Memory]
Meter=STRING
X=#Left_Align#
Y=30r
FontColor=#Color_Gray#
StringStyle=BOLD
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Top RAM:"
AntiAlias=#Default_Antialias#



[TopProcessRAMName0]
MeasureName=Mse_TopMemoryNames0
Meter=STRING
X=16
Y=16r
FontColor=#Color_Orange#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
;Text="%1"
AntiAlias=#Default_Antialias#



[TopProcessRAMpID0]
MeasureName=Mse_TopMemorypID0
;MeasureName=Mse_TopProcessUsage
Meter=STRING
X=200
Y=0r
FontColor=#Color_Orange#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Text="%1"
AntiAlias=#Default_Antialias#
Percentual=1
NumOfDecimals=1
;Scale=1200000



[TopProcessRAMLoad0]
MeasureName=Mse_TopMemory%0
;MeasureName=Mse_TopProcessUsage
Meter=STRING
X=300
Y=0r
FontColor=#Color_Orange#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Text="%1"
AntiAlias=#Default_Antialias#
Percentual=1
NumOfDecimals=1
;Scale=1200000


[TopProcessRAMName1_4]
MeasureName=Mse_TopMemoryNames1_4
Meter=STRING
X=16
Y=16r
FontColor=#Default_Color#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
;Text="%1"
AntiAlias=#Default_Antialias#


[TopProcessRAMpID1_4]
MeasureName=Mse_TopMemorypID1_4
;MeasureName=Mse_TopProcessUsage
Meter=STRING
X=200
Y=0r
FontColor=#Default_Color#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Text="%1"
AntiAlias=#Default_Antialias#
Percentual=1
NumOfDecimals=1
;Scale=1200000


[TopProcessRAMLoad1_4]
MeasureName=Mse_TopMemory%1_4
;MeasureName=Mse_TopProcessUsage
Meter=STRING
X=300
Y=0r
FontColor=#Default_Color#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Text="%1"
AntiAlias=#Default_Antialias#
Percentual=1
NumOfDecimals=0
;Scale=1200000
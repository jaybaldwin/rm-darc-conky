



[ProcessesText]
Meter=STRING
X=#Left_Align#
Y=32r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Processes:"
AntiAlias=#Default_Antialias#

[Processes]
MeasureName=Mse_Processes
Meter=STRING
X=80
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#



[Header_Process]
Meter=STRING
X=#Left_Align#
Y=35r
FontColor=#Color_Gray#
StringStyle=BOLD
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Top CPU:"
AntiAlias=#Default_Antialias#


[TopProcessName0]
MeasureName=Mse_TopCPUNames0
Meter=STRING
X=16
Y=16r
FontColor=#Color_Orange#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
;Text="%1"
AntiAlias=#Default_Antialias#


[TopProcesspID0]
MeasureName=Mse_TopCPUpID0
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


[TopProcessLoad0]
MeasureName=Mse_TopCPU%0
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


[TopProcessName1_4]
MeasureName=Mse_TopCPUNames1_4
Meter=STRING
X=16
Y=16r
FontColor=#Default_Color#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
;Text="%1"
AntiAlias=#Default_Antialias#

[TopProcesspID1_4]
MeasureName=Mse_TopCPUpID1_4
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


[TopProcessLoad1_4]
MeasureName=Mse_TopCPU%1_4
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


; [TopProcessName1]
; MeasureName=Mse_TopProcess
; Meter=STRING
; X=16
; Y=16r
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Text="%1"
; AntiAlias=#Default_Antialias#

; [TopProcessLoad1]
; MeasureName=Mse_TopProcess2
; Meter=STRING
; X=300
; Y=0r
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=RIGHT
; Text="%1%"
; AntiAlias=#Default_Antialias#
; NumOfDecimals=0
; Scale=100000


; [TopProcessName2]
; MeasureName=Mse_TopProcess
; Meter=STRING
; X=16
; Y=16r
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Text="%1"
; AntiAlias=#Default_Antialias#

; [TopProcessLoad2]
; MeasureName=Mse_TopProcess2
; Meter=STRING
; X=300
; Y=0r
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=RIGHT
; Text="%1%"
; AntiAlias=#Default_Antialias#
; NumOfDecimals=0
; Scale=100000


; [TopProcessName3]
; MeasureName=Mse_TopProcess
; Meter=STRING
; X=16
; Y=16r
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Text="%1"
; AntiAlias=#Default_Antialias#

; [TopProcessLoad3]
; MeasureName=Mse_TopProcess2
; Meter=STRING
; X=300
; Y=0r
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=RIGHT
; Text="%1%"
; AntiAlias=#Default_Antialias#
; NumOfDecimals=0
; Scale=100000

[Icon_CPU]
Meter=STRING
Text=
X=#Left_Align#
Y=33r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#

[Header_CPU]
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Header_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="CPU"
AntiAlias=#Default_Antialias#

[Seperator_CPU]
Meter=IMAGE
X=67
Y=#Separator_Y_Offset#
W=300
H=#Header_Bar_Size#
SolidColor=#Color_Header#



[CPU_Text]
Meter=STRING
X=#Left_Align#
Y=6r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#
Text="CPU:"

[CPU]
MeasureName=Mse_CPU
Meter=STRING
X=145
Y=0r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"

; TODO Fix CPU Temp
[SpeedFan_Temp_CPU]
Meter=STRING
; Web-Jay.  Make another for vamp.
MeasureName=HWiNFO_CPU_Temp_webjay
X=195
Y=0r
FontColor=#Default_Color#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=CENTER
StringStyle=#Default_Style#
AntiAlias=#Default_Antialias#
Text= %1°C

[CPU_Speed]
MeasureName=Mse_CPU_Speed1
Meter=STRING
X=300
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
Text=" %1 GHz"
AntiAlias=#Default_Antialias#
NumOfDecimals=2

[CPUHist0]
Meter=HISTOGRAM
MeasureName=Mse_CPU1
X=0
Y=8r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph0]
Meter=Line
MeasureName=Mse_CPU1
X=0r
Y=1r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU0]
MeasureName=Mse_CPU1
Meter=STRING
X=145
Y=10r
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#
StringAlign=RIGHT
NumOfDecimals=0
Text="%1%"


[CPUHist1]
Meter=HISTOGRAM
MeasureName=Mse_CPU2
X=190
Y=-10r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph1]
Meter=Line
MeasureName=Mse_CPU2
X=0r
Y=0r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU1]
MeasureName=Mse_CPU2
Meter=STRING
X=155
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"




[CPUHist2]
Meter=HISTOGRAM
MeasureName=Mse_CPU3
X=0
Y=5r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph2]
Meter=Line
MeasureName=Mse_CPU3
X=0r
Y=1r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU2]
MeasureName=Mse_CPU3
Meter=STRING
X=145
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"


[CPUHist3]
Meter=HISTOGRAM
MeasureName=Mse_CPU4
X=190
Y=-10r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph3]
Meter=Line
MeasureName=Mse_CPU4
X=0r
Y=0r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU3]
MeasureName=Mse_CPU4
Meter=STRING
X=155
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"




[CPUHist4]
Meter=HISTOGRAM
MeasureName=Mse_CPU5
X=0
Y=5r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph4]
Meter=Line
MeasureName=Mse_CPU5
X=0r
Y=1r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU4]
MeasureName=Mse_CPU5
Meter=STRING
X=145
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"


[CPUHist5]
Meter=HISTOGRAM
MeasureName=Mse_CPU6
X=190
Y=-10r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph5]
Meter=Line
MeasureName=Mse_CPU6
X=0r
Y=0r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU5]
MeasureName=Mse_CPU6
Meter=STRING
X=155
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"




[CPUHist6]
Meter=HISTOGRAM
MeasureName=Mse_CPU7
X=0
Y=5r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph6]
Meter=Line
MeasureName=Mse_CPU7
X=0r
Y=1r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU6]
MeasureName=Mse_CPU7
Meter=STRING
X=145
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"


[CPUHist7]
Meter=HISTOGRAM
MeasureName=Mse_CPU8
X=190
Y=-10r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph7]
Meter=Line
MeasureName=Mse_CPU8
X=0r
Y=0r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU7]
MeasureName=Mse_CPU8
Meter=STRING
X=155
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"



[CPUHist8]
Meter=HISTOGRAM
MeasureName=Mse_CPU9
X=0
Y=5r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph8]
Meter=Line
MeasureName=Mse_CPU9
X=0r
Y=1r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU8]
MeasureName=Mse_CPU9
Meter=STRING
X=145
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"


[CPUHist9]
Meter=HISTOGRAM
MeasureName=Mse_CPU10
X=190
Y=-10r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph9]
Meter=Line
MeasureName=Mse_CPU10
X=0r
Y=0r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU9]
MeasureName=Mse_CPU10
Meter=STRING
X=155
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"






[CPUHist10]
Meter=HISTOGRAM
MeasureName=Mse_CPU11
X=0
Y=5r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph10]
Meter=Line
MeasureName=Mse_CPU11
X=0r
Y=1r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU10]
MeasureName=Mse_CPU11
Meter=STRING
X=145
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"


[CPUHist11]
Meter=HISTOGRAM
MeasureName=Mse_CPU12
X=190
Y=-10r
W=110
H=20
PrimaryColor=244, 226, 2,128

[CPUGraph11]
Meter=Line
MeasureName=Mse_CPU12
X=0r
Y=0r
H=20
W=110
LineCount=1
LineColor=#Color_Gray#
HorizontalLine=1
AntiAlias=1
SolidColor=128,128,128,0
SolidColor2=128,128,128,0
GradientAngle=90


[CPU11]
MeasureName=Mse_CPU12
Meter=STRING
X=155
Y=10r
FontColor=#Default_Color#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=#Default_Antialias#
NumOfDecimals=0
Text="%1%"
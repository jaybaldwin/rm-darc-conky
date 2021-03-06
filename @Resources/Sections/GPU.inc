
[Icon_GPU]
Meter=STRING
Text=
X=#Left_Align#
Y=70r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#



[Header_GPU]
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Header_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="GPU"
AntiAlias=#Default_Antialias#

[Seperator_GPU]
Meter=IMAGE
X=55
Y=#Separator_Y_Offset#
W=300
H=#Header_Bar_Size#
SolidColor=#Color_Header#



; GPU0

[HWiNFOGPU0Name]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(: .*)$":""
UpdateDivider=30

[HWiNFOGPU0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Usage#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[HWiNFOGPU0Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[HWiNFOGPU0Fan]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Fan#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeterHWiNFOGPU0Label]
Meter=String
X=0
Y=5R
MeasureName=HWiNFOGPU0Name
; Below displays the whole GPU name
; example: NVIDIA Geforce GTX 660
Text="%1 Temp:"
;Text="GPU:"
MeterStyle=HWiNFOTextStyle
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#


[MeterHWiNFOGPU0TempValue]
Meter=String
MeasureName=HWiNFOGPU0Temp
X=300
Y=0r
Text="%1°C"
NumOfDecimals=0
StringAlign=RIGHT
MeterStyle=HWiNFOTextStyle
;FontColor=#HWiNFOColor2#
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#




[GPULoadText]
Meter=STRING
X=#Left_Align#
Y=#Next_Line#
;FontColor=#Default_Color#
StringAlign=LEFT
Text="Load:"
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#


[MeterHWiNFOGPU0UsageValue]
Meter=String
MeasureName=HWiNFOGPU0Usage
X=184
Y=0r
Text="%1%"
NumOfDecimals=0
StringAlign=RIGHT
;MeterStyle=HWiNFOTextStyle
;FontColor=#HWiNFOColor1#
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#


[MeterGPU0Graph]
Meter=Line
LineCount=3
MeasureName=HWiNFOGPU0Usage
MeasureName2=HWiNFOGPU0Temp
MeasureName3=HWiNFOGPU0Fan
Scale=1
Scale2=1
Scale3=1
MeterStyle=HWiNFOGraphStyle
X=188
Y=-6r
W=112
H=20

; [MeterHWiNFOGPU0UsageLabel]
; Meter=String
; X=0
; Y=3R
; Text=" Usage:"
; MeterStyle=HWiNFOTextStyle





; [MeterHWiNFOGPU0FanLabel]
; Meter=String
; X=3R
; Y=0r
; Text="Fan:"
; MeterStyle=HWiNFOTextStyle

; [MeterHWiNFOGPU0FanValue]
; Meter=String
; MeasureName=HWiNFOGPU0Fan
; X=1R
; Y=0r
; Text="%1%"
; NumOfDecimals=0
; MeterStyle=HWiNFOTextStyle
; FontColor=#HWiNFOColor3#


[Icon_RAM]
Meter=STRING
Text=
X=#Left_Align#
Y=40r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#



[Header_RAM]
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Header_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="MEMORY"
AntiAlias=#Default_Antialias#

[Seperator_RAM]
Meter=IMAGE
X=84
Y=#Separator_Y_Offset#
W=300
H=#Header_Bar_Size#
SolidColor=#Color_Header#



[RAMText]
Meter=STRING
X=#Left_Align#
Y=8r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="RAM:"
AntiAlias=#Default_Antialias#


[RAMUsed]
MeasureName=Mse_RAM_Used
Meter=STRING
X=184
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
Text="%1%"
AntiAlias=#Default_Antialias#
NumOfDecimals=0
AutoScale=1
Percentual=1
MaxValue=100



[RAMBar]
Meter=IMAGE
X=188
Y=4r
W=112
H=6
SolidColor=255, 255, 255, 48

[RAMUsedBar]
MeasureName=Mse_RAM_Used
Meter=BAR
X=188
Y=0r
W=112
H=6
BarColor=#Color_Graph#
BarOrientation=HORIZONTAL


[SwapText]
Meter=STRING
X=#Left_Align#
Y=#Next_Line#
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="SWAP:"
AntiAlias=#Default_Antialias#


[SwapUsed]
MeasureName=Mse_SWAP_Used
Meter=STRING
X=184
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
Text="%1%"
AntiAlias=#Default_Antialias#
NumOfDecimals=0
AutoScale=1
Percentual=1
MaxValue=100



[SWAPBar]
MeasureName=Mse_SWAP_Total
Meter=IMAGE
X=188
Y=4r
W=112
H=6
SolidColor=255, 255, 255, 48

[SWAPUsedBar]
MeasureName=Mse_SWAP_Used
Meter=BAR
X=188
Y=0r
W=112
H=6
BarColor=#Color_Graph#
BarOrientation=HORIZONTAL
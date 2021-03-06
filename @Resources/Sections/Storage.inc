
[Icon_Storage]
Meter=STRING
Text=
X=#Left_Align#
Y=40r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#



[Header_Storage]
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Header_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="STROAGE"
AntiAlias=#Default_Antialias#

[Seperator_Storage]
Meter=IMAGE
X=90
Y=#Separator_Y_Offset#
W=300
H=#Header_Bar_Size#
SolidColor=#Color_Header#



[DriveCText]
Meter=STRING
X=#Left_Align#
Y=8r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="SYSTEM (C):"
AntiAlias=#Default_Antialias#

[DriveCUsed]
MeasureName=Mse_UsedC
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

; [DriveCTotal]
; MeasureName=Mse_TotalC
; Meter=STRING
; X=50r
; Y=0r
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text=" / %1B"
; AntiAlias=#Default_Antialias#
; NumOfDecimals=2
; AutoScale=1

[DriveCBarTotal]
Meter=IMAGE
X=188
Y=4r
W=112
H=6
SolidColor=255, 255, 255, 48

[DriveCBarFree]
MeasureName=Mse_UsedC
Meter=BAR
X=188
Y=0r
W=112
H=6
BarColor=#Color_Graph#
BarOrientation=HORIZONTAL









[DiskIO_Read_Text]
Meter=STRING
X=5
Y=10r
FontColor=#Color_Green#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Read:"
AntiAlias=#Default_Antialias#
NumOfDecimals=
AutoScale=1

[DiskIO_Read]
MeasureName=Mse_DiskIO_Read_KBC
Meter=STRING
X=70
Y=0r
FontColor=#Color_Green#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#
NumOfDecimals=2
Text="%1 MB/s"
AutoScale=0
;StringStyle=BOLD

[DiskIO_Write_Text]
Meter=STRING
X=155
Y=0r
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Write:"
AntiAlias=#Default_Antialias#
NumOfDecimals=
AutoScale=1

[DiskIO_Write]
MeasureName=Mse_DiskIO_Write_KBC
Meter=STRING
X=300
Y=0r
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#
Text="%1 MB/s"
AutoScale=0
NumOfDecimals=2


; [SpeedFan_Temp_HDD_Text]
; Meter=STRING
; X=#Left_Align#
; Y=#Next_Line#
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; StringStyle=#Default_Style#
; AntiAlias=#Default_Antialias#
; Text="Temp HDD:"

; [SpeedFan_Temp_HDD]
; Meter=STRING
; MeasureName=Mse_SpeedFan_Temp_HDD
; X=80
; Y=0r
; FontColor=#Default_Color#
; Fontface=#Default_Fontface#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; StringStyle=#Default_Style#
; AntiAlias=#Default_Antialias#
; Text=%1 °C




[DriveDText]
Meter=STRING
X=#Left_Align#
Y=16r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="DATA (D):"
AntiAlias=#Default_Antialias#

[DriveDUsed]
MeasureName=Mse_UsedD
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

; [DriveDTotal]
; MeasureName=Mse_TotalD
; Meter=STRING
; X=50r
; Y=0r
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text=" / %1B"
; AntiAlias=#Default_Antialias#
; NumOfDecimals=2
; AutoScale=1

[DriveDBarTotal]
Meter=IMAGE
X=188
Y=4r
W=112
H=6
SolidColor=#Color_Graph_BG#

[DriveDBarFree]
MeasureName=Mse_UsedD
Meter=BAR
X=188
Y=0r
W=112
H=6
BarColor=#Color_Graph#
BarOrientation=HORIZONTAL


[DiskIO_Read_TextD]
Meter=STRING
X=5
Y=10r
FontColor=#Color_Green#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Read:"
AntiAlias=#Default_Antialias#
NumOfDecimals=
AutoScale=1

[DiskIO_ReadD]
MeasureName=Mse_DiskIO_Read_KBD
Meter=STRING
X=70
Y=0r
FontColor=#Color_Green#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#
NumOfDecimals=2
Text="%1 MB/s"
AutoScale=0
;StringStyle=BOLD

[DiskIO_Write_TextD]
Meter=STRING
X=155
Y=0r
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#
StringAlign=LEFT
Text="Write:"
NumOfDecimals=
AutoScale=1

[DiskIO_WriteD]
MeasureName=Mse_DiskIO_Write_KBD
Meter=STRING
X=300
Y=0r
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#
Text="%1 MB/s"
AutoScale=0
NumOfDecimals=2

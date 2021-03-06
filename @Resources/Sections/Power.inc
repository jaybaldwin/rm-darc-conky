
[Icon_Power]
Meter=STRING
Text=
X=#Left_Align#
Y=70r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#



[Header_Power]
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Header_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="POWER"
AntiAlias=#Default_Antialias#

[Seperator_Power]
Meter=IMAGE
X=75
Y=#Separator_Y_Offset#
W=300
H=#Header_Bar_Size#
SolidColor=#Color_Header#

[Power_AC_Text]
Meter=STRING
X=#Left_Align#
Y=#Next_Line#
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Source:"
AntiAlias=#Default_Antialias#

[Power_AC]
MeasureName=Mse_Acline
Meter=STRING
X=300
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#

[Power_Battery_Text]
Meter=STRING
X=#Left_Align#
Y=#Next_Line#
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Battery:"
AntiAlias=#Default_Antialias#

[Power_Battery]
MeasureName=Mse_BatLifetimeRemain
Meter=STRING
X=300
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
Text="%1%"
AntiAlias=#Default_Antialias#



; [Power_Battery_Status_Text]
; Meter=STRING
; X=#Left_Align#
; Y=#Next_Line#
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text="Status:"
; AntiAlias=#Default_Antialias#

; [Power_Battery_Status]
; MeasureName=Mse_BatStatus
; Meter=STRING
; X=80
; Y=0r
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; AntiAlias=#Default_Antialias#

; [Power_Battery_Lifetime_Text]
; Meter=STRING
; X=#Left_Align#
; Y=#Next_Line#
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text="Remaining:"
; AntiAlias=#Default_Antialias#

; [Power_Battery_Lifetime]
; MeasureName=Mse_BatLifetime
; Meter=STRING
; X=80
; Y=0r
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text="%1 h"
; AntiAlias=#Default_Antialias#


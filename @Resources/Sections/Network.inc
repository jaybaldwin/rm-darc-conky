
[Icon_Network]
Meter=STRING
Text=
X=#Left_Align#
Y=40r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#



[Header_Network]
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Gray#
StringStyle=#Header_Fontstyle#
Fontsize=#Header_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="NETWORK"
AntiAlias=#Default_Antialias#

[Seperator_Network]
Meter=IMAGE
X=90
Y=#Separator_Y_Offset#
W=300
H=#Header_Bar_Size#
SolidColor=#Color_Header#


[IPWebText]
Meter=STRING
X=#Left_Align#
Y=8r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Public IPv4 Address: "
AntiAlias=#Default_Antialias#

[IPWeb]
Meter=STRING
MeasureName=Mse_IPWeb
X=300
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#


[NetIPText]
Meter=STRING
X=#Left_Align#
Y=30r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="LAN IPv4 Address:"
AntiAlias=#Default_Antialias#

[NetIP]
MeasureName=Mse_IP
Meter=STRING
X=300
Y=0r
FontColor=#Default_Color#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
AntiAlias=#Default_Antialias#




[DomainText]
Meter=STRING
X=#Left_Align#
Y=#Next_Line#
FontColor=#Default_Color#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
StringStyle=#Default_Style#
Text="Domain:"
AntiAlias=#Default_Antialias#

[Domain]
Meter=STRING
MeasureName=Mse_Domain
X=300
Y=0r
FontColor=#Default_Color#
Fontface=#Default_Fontface#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
StringStyle=#Default_Style#
AntiAlias=#Default_Antialias#


; [Netmask_Text]
; Meter=STRING
; X=#Left_Align#
; Y=#Next_Line#
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text="Netmask:"
; AntiAlias=#Default_Antialias#

; [Netmask]
; MeasureName=Mse_Netmask
; Meter=STRING
; X=80
; Y=0r
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; AntiAlias=#Default_Antialias#

; [NetDNSText]
; Meter=STRING
; X=#Left_Align#
; Y=#Next_Line#
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text="DNS:"
; AntiAlias=#Default_Antialias#

; [NetDNS]
; MeasureName=Mse_DNS
; Meter=STRING
; X=80
; Y=0r
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; AntiAlias=#Default_Antialias#

; [NetGWText]
; Meter=STRING
; X=#Left_Align#
; Y=#Next_Line#
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; Text="GW:"
; AntiAlias=#Default_Antialias#

; [NetGW]
; MeasureName=Mse_Gateway
; Meter=STRING
; X=80
; Y=0r
; FontColor=#Default_Color#
; StringStyle=#Default_Style#
; Fontsize=#Default_Fontsize#
; StringAlign=LEFT
; Fontface=#Default_Fontface#
; AntiAlias=#Default_Antialias#

;[TCP_Text]
;Meter=STRING
;X=#Left_Align#
;Y=#Next_Line#
;FontColor=#Default_Color#
;StringStyle=#Default_Style#
;Fontsize=#Default_Fontsize#
;StringAlign=LEFT
;Fontface=#Default_Fontface#
;Text="Connections:"
;AntiAlias=#Default_Antialias#

;[TCP]
;MeasureName=Mse_TCP
;Meter=STRING
;X=80
;Y=0r
;FontColor=#Default_Color#
;StringStyle=#Default_Style#
;Fontsize=#Default_Fontsize#
;StringAlign=LEFT
;Fontface=#Default_Fontface#
;AntiAlias=#Default_Antialias#

[NetOutIcon]
Meter=STRING
Text=
X=#Left_Align#
Y=15r
FontColor=#Color_Red#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#

[NetOutText]
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Up:"
AutoScale=1
AntiAlias=#Default_Antialias#

[NetOut]
MeasureName=Mse_NetOut1
Meter=STRING
X=184
Y=0r
FontColor=#Color_Red#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
Text="%1 kbps"
AutoScale=0
AntiAlias=#Default_Antialias#

[NetOutGraph]
Meter=Line
MeasureName=Mse_NetOut
X=188
Y=4r
H=6
W=112
LineCount=1
LineColor=#Color_Red#
AntiAlias=1
AutoScale=1
;SolidColor=128,128,128,255
;SolidColor2=128,128,128,0
GradientAngle=90

[NetOutHist]
Meter=HISTOGRAM
MeasureName=Mse_NetOut
X=188
Y=0r
H=6
W=112
PrimaryColor=#Color_Red#

[NetInIcon]
Meter=STRING
Text=
X=#Left_Align#
Y=15r
FontColor=#Color_Green#
StringStyle=#Header_Fontstyle#
Fontsize=#Icon_Fontsize#
StringAlign=LEFT
Fontface=FontAwesome
AntiAlias=#Default_Antialias#

[NetInText]
MeasureName=Mse_NetIn
Meter=STRING
X=#Pad_Icon#
Y=0r
FontColor=#Color_Green#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=LEFT
Fontface=#Default_Fontface#
Text="Down:"
AutoScale=1
AntiAlias=#Default_Antialias#

[NetIn]
MeasureName=Mse_NetIn1
Meter=STRING
X=184
Y=0r
FontColor=#Color_Green#
StringStyle=#Default_Style#
Fontsize=#Default_Fontsize#
StringAlign=RIGHT
Fontface=#Default_Fontface#
Text="%1 kbps"
AutoScale=0
AntiAlias=#Default_Antialias#

[NetInGraph]
Meter=Line
MeasureName=Mse_NetIn
X=188
Y=4r
H=6
W=112
LineCount=1
LineColor=#Color_Green#
AntiAlias=1
AutoScale=1
;SolidColor=128,128,128,255
;SolidColor2=128,128,128,0
GradientAngle=90

[NetInHist]
Meter=HISTOGRAM
MeasureName=Mse_NetIn
X=188
Y=-1r
H=6
W=112
PrimaryColor=#Color_Green#
; SolidColor=#Color_Green#
; SolidColor2=128,128,128,0
; GradientAngle=0
[ButtonBase]
DynamicVariables=1
SolidColor=0,0,0,1
X=(8 * #Scale#)R
Y=r
W=(32 * #Scale#)
ImageTint=#PlayerMainColor#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint  #PlayerHoverColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint #PlayerMainColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]

[MeterPlayPause]
Meter=Image
ImageName=#@#Images\[MeasureStateButton]
X=([MeterBar:X] + ([MeterBar:W] / 2) - (32 * #Scale# / 2))
Y=R
MeterStyle=ButtonBase
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "PlayPause"]

[MeterNext]
Meter=Image
ImageName=#@#Images\Next.png
MeterStyle=ButtonBase 
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "Next"]

[MeterPrevious]
Meter=Image
ImageName=#@#Images\Previous.png
MeterStyle=ButtonBase 
X=((-32 * #Scale# * 2) + (-8 * 2 * #Scale#))r
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "Previous"]

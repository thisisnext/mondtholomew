[ButtonBase]
DynamicVariables=1
SolidColor=0,0,0,1
X=(8 * #Scale#)R
Y=r
Group=Mouse
Hidden=(1 - #MouseOver#)
W=(32 * #Scale#)
ImageTint=#PlayerMainColor#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint  #PlayerHoverColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint #PlayerMainColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]

[MeterPlayPause]
Meter=Image
ImageName=#@#Images\[MeasureStateButton]
X=((#CoverWidth# / 2 * #Scale#) - ((32 * #Scale#) / 2))
Y=((#CoverHeight# / 2 * #Scale#) - ((32 * #Scale#) / 2))
MeterStyle=ButtonBase
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "PlayPause"]

[MeterNext]
Meter=Image
ImageName=#@#Images\Next.png
X=([MeterPlayPause:X] + ((32 * #Scale#) / 2) + (32 * #Scale#))
MeterStyle=ButtonBase 
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "Next"]

[MeterPrevious]
Meter=Image
ImageName=#@#Images\Previous.png
MeterStyle=ButtonBase 
X=([MeterPlayPause:X] - ((32 * #Scale#) / 2) - (32 * #Scale#))
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "Previous"]

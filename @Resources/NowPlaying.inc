[NowPlaying]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=STATE

[MeasureStateButton]
Measure=String
String=[&NowPlaying]
Substitute="0":"Play.png","1":"Pause.png","2":"Play.png"
DynamicVariables=1

[MeasureTitle]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=TITLE

[MeasureProgress]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=PROGRESS

[MeasureDuration]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=DURATION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasurePosition]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=POSITION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasureArtist]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=ARTIST

[MeasureMinutesRemaining]
Measure=Calc
Formula=Trunc((MeasureDuration - MeasurePosition) / 60)
RegExpSubstitute=1
Substitute="^(.)$":"0\1"

[MeasureSecondsRemaining]
Measure=Calc
Formula=((MeasureDuration - MeasurePosition) % 60)
RegExpSubstitute=1
Substitute="^(.)$":"0\1"

[MeasureRemaining]
Measure=String
String=-[&MeasureMinutesRemaining]:[&MeasureSecondsRemaining]
DynamicVariables=1

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying
PlayerType=COVER

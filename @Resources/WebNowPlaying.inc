[Variables]
Separators=[\-|\x|\×|\•|\–|\\|\/|\|]
SeparatorPattern=\s?#Separators#?\s?
Artist=[MeasureArtist:EscapeRegExp]
Open=\(\[\{
Close=\)\]\}
RemoveArtist="(?i)^#Artist##SeparatorPattern#|#SeparatorPattern##Artist#$":""
RemoveAudioVideo="(?i)[#Open#][^#Open#]*?(?:video|audio)[^#Close#]*?[#Close#]\s?":""
StandardizeFeaturing="(?i)^[\,|\x|\&]\s?|^t\.\s|ft\.\s?|feat\.\s?|featuring\s?":"#__Featuring#"
MoveFeaturingToEnd="^(#__Featuring#.*)\s?#Separators#\s?(.*?)$":"\2 \1","^#__Featuring#\s?":""
Substitute1="#RemoveArtist#","#RemoveAudioVideo#","#StandardizeFeaturing#","#MoveFeaturingToEnd#"
Substitute0=

[WebNowPlaying]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE

[MeasureStateButton]
Measure=String
String=[&WebNowPlaying]
Substitute="0":"Play.png","1":"Pause.png","2":"Play.png"
DynamicVariables=1

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=PROGRESS

[MeasureDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=DURATION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasurePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=POSITION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=ARTIST
Substitute="":"N/A"

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=TITLE
RegExpSubstitute=1
Substitute=[#Substitute[#TitleExtraction]]
DynamicVariables=1

[MeasureRemaining]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=REMAINING
RegExpSubstitute=1
Substitute="(.*)":"-\1"

[MeasureCover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=COVER

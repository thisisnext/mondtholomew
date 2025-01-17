[Variables]
; ███████ ███████ ████████ ████████ ██ ███    ██  ██████  ███████ 
; ██      ██         ██       ██    ██ ████   ██ ██       ██      
; ███████ █████      ██       ██    ██ ██ ██  ██ ██   ███ ███████ 
;      ██ ██         ██       ██    ██ ██  ██ ██ ██    ██      ██ 
; ███████ ███████    ██       ██    ██ ██   ████  ██████  ███████
; It's recommened you use any text editor other than Notepad.
; eg. Notepad++, VSCode, NeoVim

; Preinstalled fonts: Anurati | Quicksand | Aquatico | Fira Sans
; You can also use any font you have installed on your system
ClockFont=Anurati
FontFace=Quicksand

; Force all string meters to be in UPPER, lower or Proper Case
; Upper | Lower | Proper | None (no modification)
StringCase=Upper

; Colors in R,G,B https://goo.gl/search/color+picker
; These colors are used in all Mondtholomew skins. Do not include an alpha value.
; If you only want to change a specific skins color, find it under that skins settings.
MainColor=255,255,255
AccentColor=255,255,255

;  ██████ ██       ██████   ██████ ██   ██ 
; ██      ██      ██    ██ ██      ██  ██  
; ██      ██      ██    ██ ██      █████   
; ██      ██      ██    ██ ██      ██  ██  
;  ██████ ███████  ██████   ██████ ██   ██

; Change the language used by the clock to display the week day and month text
; Use "en" for English and "Local" for your system's locale
; Read more: https://docs.rainmeter.net/manual/measures/time/#FormatLocale
; All valid language codes https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c
LanguageCode=en
; Change the Clock formats
; Use "%H : %M" for 24h time and "%I : %M %p" for 12h time
; Read more: https://docs.rainmeter.net/manual/measures/time/#FormatCodes
MeasureTimeFormat=- %I : %M %p -
; Date format. Refer to the previous link.
MeasureDateFormat=%d %B, %Y
; Day format. Refer to the previous link.
MeasureDayFormat=%A

; Clock color overrides
ClockBaseColor=#MainColor#,255
ClockAccentColor=#AccentColor#,255

; Clock inline effects. Applies accent color to digits.
; Read more: https://docs.rainmeter.net/manual/meters/string/inline/
ClockInlinePattern=.*
ClockInline=CharacterSpacing | (#ClockCharacterSpacing# * #Scale#) | (#ClockCharacterSpacing# * #Scale#)
DateInlinePattern=\d
DateInline=Color | #ClockAccentColor#
TimeInlinePattern=\d
TimeInline=Color | #ClockAccentColor#
ClockCharacterSpacing=6

; ██████  ██       █████  ██    ██ ███████ ██████  
; ██   ██ ██      ██   ██  ██  ██  ██      ██   ██ 
; ██████  ██      ███████   ████   █████   ██████  
; ██      ██      ██   ██    ██    ██      ██   ██ 
; ██      ███████ ██   ██    ██    ███████ ██   ██

; Where to get media information. WebNowPlaying tries to fetch information from the browser addon. NowPlaying gets data from a local media player.
; WebNowPlaying | NowPlaying
PlayerPlugin=WebNowPlaying

; Local player to get media information from. Only works with NowPlaying.
; https://docs.rainmeter.net/manual/measures/nowplaying/#playerlist
; AIMP | CAD | iTunes | Winamp | WMP 
PlayerName=CAD

; Player skin left and right information
; Start | Duration | Remaining | Position
PlayerLeft=Position
PlayerRight=Duration

; Character to insert between Artist and Title in the player skin.
; For a new line, use #CRLF#
ArtistTitleSeparator=" - "
; What to display when information is not available
NotAvailable="N/A"

; Toggles title extraction. Only works with WebNowPlaying.
; Useful when the title of the media has duplicated or unnecessary information.
; For example, the song "Fake Friends" posted on the YouTube channel "MANON" has the title "MANON / Fake Friends (Music Video)"
; Title extraction removes the duplicated artist name and "(Music Video)" from the information displayed
; TitleExtraction=0 -> MANON - MANON / Fake Friends (Music Video)
; TitleExtraction=1 -> MANON - Fake Friends
TitleExtraction=1

; Player color overrides
PlayerMainColor=#MainColor#
PlayerAccentColor=#AccentColor#
PlayerHoverColor=#PlayerAccentColor#
; Player alphas
ProgressDotHaloColor=#PlayerMainColor#,50
ProgressDotColor=#PlayerAccentColor#,150
ProgressLineBackgroundColor=#PlayerMainColor#,105
ProgressLineColor=#PlayerMainColor#,255

; Quirky little regex to highlight unusual chracters in media titles / artist names
PlayerInfoInlinePattern=[^\w|\[|\]|\(|\)|\{|\}|\-|\.|\,]
PlayerInfoInline=Color | #PlayerAccentColor#

;  ██████  ██████  ██    ██ ███████ ██████  
; ██      ██    ██ ██    ██ ██      ██   ██ 
; ██      ██    ██ ██    ██ █████   ██████  
; ██      ██    ██  ██  ██  ██      ██   ██ 
;  ██████  ██████    ████   ███████ ██   ██ 

; Dimensions (these are scaled by the skin specific scale variable)
CoverWidth=200
CoverHeight=#CoverWidth#

CoverCornerRounding=100
CoverOutlineWidth=2

; Cover colors
CoverOutlineColor=#MainColor#
CoverOutlineHoverColor=#AccentColor#

; For advanced users only. 
; Allows adding transform modifiers to the container shape and outline
CoverShapeModifiers=

; ██     ██ ███████  █████  ████████ ██   ██ ███████ ██████  
; ██     ██ ██      ██   ██    ██    ██   ██ ██      ██   ██ 
; ██  █  ██ █████   ███████    ██    ███████ █████   ██████  
; ██ ███ ██ ██      ██   ██    ██    ██   ██ ██      ██   ██ 
;  ███ ███  ███████ ██   ██    ██    ██   ██ ███████ ██   ██

; Weather color overrides
WeatherMainColor=#MainColor#
WeatherAccentColor=#AccentColor#
; Weather icon colors
WeatherIconColor=#WeatherMainColor#
WeatherIconAccent=#WeatherAccentColor#
; e Imperial | m Metric | h Hybrid
WeatherUnits=m
WeatherLanguageCode=en-US

; ██    ██ ██ ███████ ██    ██  █████  ██      ██ ███████ ███████ ██████  
; ██    ██ ██ ██      ██    ██ ██   ██ ██      ██    ███  ██      ██   ██ 
; ██    ██ ██ ███████ ██    ██ ███████ ██      ██   ███   █████   ██████  
;  ██  ██  ██      ██ ██    ██ ██   ██ ██      ██  ███    ██      ██   ██ 
;   ████   ██ ███████  ██████  ██   ██ ███████ ██ ███████ ███████ ██   ██

; Visualizer color overrides
VisualizerMainColor=#PlayerMainColor#
VisualizerAccentColor=#PlayerAccentColor#

; After changing Bands you will have to refresh the visualizer skin twice.
Bands=50
VisWidth=4.6
VisHeight=100
VisMinHeight=0
VisPaddingHorizontal=3
VisRounding=(#VisWidth# / 2)
; Fill color used when VisFade=0
VisFillColor=#VisualizerMainColor#
; Toggle gradient fill. 
VisFade=1
VisFadeStartColor=#VisualizerMainColor#,255
VisFadeEndColor=#VisualizerMainColor#,0
; Gradient start and end positions (0.0 - 1.0 as a percentage of the total height)
VisFadeStart=0
VisFadeEnd=0.8
; Gradient direction in degrees
VisFadeDirection=270

;  █████  ██    ██ ██████  ██  ██████  ██      ███████ ██    ██ ███████ ██      
; ██   ██ ██    ██ ██   ██ ██ ██    ██ ██      ██      ██    ██ ██      ██      
; ███████ ██    ██ ██   ██ ██ ██    ██ ██      █████   ██    ██ █████   ██      
; ██   ██ ██    ██ ██   ██ ██ ██    ██ ██      ██       ██  ██  ██      ██      
; ██   ██  ██████  ██████  ██  ██████  ███████ ███████   ████   ███████ ███████

Accuracy=5
Sensitivity=30
FFTAttack=0
FFTDecay=0
FreqMin=20
FreqMax=16000

; ██████  ███████  ██████ ██    ██  ██████ ██      ███████     ██████  ██ ███    ██ 
; ██   ██ ██      ██       ██  ██  ██      ██      ██          ██   ██ ██ ████   ██ 
; ██████  █████   ██        ████   ██      ██      █████       ██████  ██ ██ ██  ██ 
; ██   ██ ██      ██         ██    ██      ██      ██          ██   ██ ██ ██  ██ ██ 
; ██   ██ ███████  ██████    ██     ██████ ███████ ███████     ██████  ██ ██   ████

; Recycle bin color overrides
BinMainColor=#MainColor#
BinAccentColor=#AccentColor#

; ██ ███    ██ ████████ ███████ ██████  ███    ██  █████  ██      
; ██ ████   ██    ██    ██      ██   ██ ████   ██ ██   ██ ██      
; ██ ██ ██  ██    ██    █████   ██████  ██ ██  ██ ███████ ██      
; ██ ██  ██ ██    ██    ██      ██   ██ ██  ██ ██ ██   ██ ██      
; ██ ██   ████    ██    ███████ ██   ██ ██   ████ ██   ██ ███████ 

; Edit #@#Language.inc to change most text in the skin

; Acceptable values: https://en.wikipedia.org/wiki/Real_number
ScrollMouseIncrement=0.0

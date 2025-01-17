; Optimal AudioLevel setup
; Thanks to @kodikuu for the math

[Variables]
FPS=60
SkipBands=1

; Get the current audio devices sampling rate
[MeasureSamplingRate]
Measure=Plugin
Plugin=AudioLevel
Type=Format
RegExpSubstitute=1
Substitute="(Hz.*)$":""
UpdateDivider=-1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
DynamicVariables=1
FFTSize=(Floor([MeasureSamplingRate] * #Accuracy# / #FPS#))
FFTOverlap=(Floor([MeasureSamplingRate] * (#Accuracy# - 1) / #FPS#))
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Bands=(#Bands# + #SkipBands#)
FreqMin=#FreqMin#
FreqMax=#FreqMax#

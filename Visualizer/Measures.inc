[MeasureBandFactory]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=BandMeasures.inc
Number=#Bands#
SectionName=MeasureBand%%
Option0=Measure
Value0=Plugin
Option1=Plugin
Value1=AudioLevel
Option2=Parent
Value2=MeasureAudio
Option3=Type
Value3=Band
Option4=BandIdx
Value4={%% + 1}

[MeterBandFactory]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=BandMeters.inc
Number=#Bands#
SectionName=%%
Option0=Meter
Value0=Shape
Option1=MeterStyle
Value1=BarStyle

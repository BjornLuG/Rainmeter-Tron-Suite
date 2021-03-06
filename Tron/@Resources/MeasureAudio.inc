
[Variables]
Multiplier=8
; Higher Multiplier will increase the pulse value and may cause the glow be more white-ish

; The options below can be tweaked to your likings, for more information check this link
; https://docs.rainmeter.net/manual/plugins/audiolevel/
[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
RMSAttack=300
RMSDecay=300
RMSGain=1.0
PeakAttack=0
PeakDecay=0
PeakGain=1
FFTSize=0
FFTAttack=0
FFTDecay=50
FreqMin=20
FreqMax=16000
Sensitivity=35

[AudioValue]
Measure=Calc
Formula=(MeasureAudio*#Multiplier#)

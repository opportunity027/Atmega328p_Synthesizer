# Atmega328p_Synthesizer
A custom-implemented, multifunctional, lightweight synthesizer for the Atmega328p
# What this
A small synthesizer program that runs on the Arduino IDE
It implements waveform generation using a digital direct synthesizer capable of producing waveforms of any frequency, as well as a fixed 6+6+6 algorithm with serial-parallel operators.
Additionally, a noise generator using a single-channel linear feedback shift register is available.

Fully independent ADSR envelope implementation and dynamic parameter adjustment are supported for each of the 13 channels of the modular and carrier operators.

By writing waveform data from the IDE, the program can operate standalone, enabling independent playback.

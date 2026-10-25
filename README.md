# Stylophone_PCB

A 20 key PCB Stylophone made using the 10 cent CH32V003 RISC-V microcontroller. It uses the FM8002A to amplify the signal to drive a small speaker. The whole thing is USB powered and functions like the real thing.

I made this to get better with audio circuits and also as a part of my week 3 submission to Half Life.

## PCB Design

The PCB is a simple 2 Layer design. The project is powered with the Type-c USB port and uses the CH32V003 to read the key inputs and play audio accordingly. A resistor ladder is used to read all of the key presses. All of the parts are meant to be soldered to the PCB. All of the PCB files can be found in the [PCB_Files](/PCB_Files/) folder. There you can find the BOM for the PCB.

For anyone interested here is the schematic:

## Firmware

One of the crystal pins has been used for the ADC function. Thankfully the PlatformIO Extension takes care of that and you can just upload the code.

All of the code is located in the [src folder](/src/).

## Installation

1. Clone or download the repository.
2. Initialize the PlatformIO extension.
3. Connect the WCH LINK-E programmer.
4. Select the "Stylophone_PCB" environment.
5. Upload the firmware and enjoy!

## BOM

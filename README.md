# Stylophone_PCB

A 20 key PCB Stylophone made using the 10 cent CH32V003 RISC-V microcontroller. It uses the FM8002A to amplify the signal to drive a small speaker. The whole thing is USB powered and functions like the real thing.

I made this to get better with audio circuits and also as a part of my week 3 submission to Half Life.

|           Front Picture           |          Back Picture           |
|-----------------------------------|---------------------------------|
| ![front](/Pic/PCB_v1.0_Front.png) | ![back](/Pic/PCB_v1.0_Back.png) |

## PCB Design

The PCB is a simple 2 Layer design. The project is powered with the Type-c USB port and uses the CH32V003 to read the key inputs and play audio accordingly. A resistor ladder is used to read all of the key presses. All of the parts are meant to be soldered to the PCB. All of the PCB files can be found in the [PCB_Files](/PCB_Files/) folder. There you can also find the BOM for the PCB.

![PCB](/Pic/PCB_PCB1_2026-10-25.png)

For anyone interested here is the schematic:
![Schematic](/Pic/SCH_Schematic1_1-Main_2026-10-25.svg)

## Assembly

After soldering all of the SMD components to the PCB the last step is to solder the speaker to the two pads under the "Speaker" text.

![speaker_pointed](/Pic/Speaker_Pointed.png)

After that just connect a crocodile clip or a stylus to the Stylus pad and enjoy!

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

Please note that the Shipping Price is an estimate and that the speaker/alligator clips have a minimum purchasing quantity.

|Item                                                                |Qty|Supplier|Cost/item        |Total Cost|link                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|--------------------------------------------------------------------|---|--------|-----------------|----------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|PCB                                                                 |1  |JLCPCB  |$4.00            |$4.00     |[JLCPCB](https://jlcpcb.com)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|SMD Components from LCSC(Please upload the PCB BOM to their website)|1  |LCSC    |$11.09(Estimated)|$11.09    |[LCSC](https://www.lcsc.com)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|8Ohm 2W Speaker (MOQ 6)                                             |6  |Amazon  |$5.99            |$5.99     |[Amazon](https://www.amazon.com/Speaker-Speakers-Compatible-Loudspeaker-Player/dp/B09YGDQV3Z?dib=eyJ2IjoiMSJ9.XRlwq4aRr53c_VgFm-AgjVmQo5NQJMBVYeguncecNMOKHnQJtnIorLA1ujB9do7R8tPvB0hbkTzPzA7oCoxYO-G3rN91bHB73Y3NlueFTHTzA3WrqEzE7UBIzdsk2Cy4mHxeZmS5d6NIwh9OckDZWSg4iy6w0nmfbgNrw3mGFT1mQW5sIGrlOMiOugbWrpOxZ9MmifAcs06jthEOJYNtxN2myjcfORo81coHxYUT_P0.iV-f2XB980xOU5cP5ZEchtETmL4Zn3gDk6DS0jDspNM&dib_tag=se&keywords=8+ohm+2+watt+speaker&qid=1792944598&sr=8-1)                                                                                                                    |
|Alligator Clips (MOQ 10)                                            |10 |Amazon  |$4.99            |$4.99     |[Amazon](https://www.amazon.com/Alligator-Electrical-Crocodile-Connector-Connection/dp/B096S2JXYW?crid=6Z8I3PVLOI2K&dib=eyJ2IjoiMSJ9.F_IVHiqqpkF4XaNrwmlRPgWK2ChpHf2lryFAM7IwFwmhEpQ9wtnjM3m6OhSSyPdco_E562VHzXhJYwMMRBFS3P4ogXc-FVbofS5kblhsQSDfKRqtcLGY5VnygIFD-yboiZS2-SfGoiEJ_QBb8Dth6KGyM0JHeW0svts1dMPg3g_Y1-z69sin7rZwfhTiPSOFS8xjkVM9kz278drfdZmfItabA1n93rtKPlr4L8gHPHd3xPbGTZev-8HcH0JBVsiVkDWr-8bixdWZKQfbVHXvDKpz0PQorKqxv_Bk4OIv-fk.JZCZ1z0sTP_4TS9ldNbNA7QrGJNyHLNExw5E7iiHGyE&dib_tag=se&keywords=crocodile+clip&qid=1792944782&sprefix=crocodile+clo%2Caps%2C519&sr=8-10)|
|Estimated total shipping                                            |1  |        |                 |$20.00    |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|Estimated TOTAL                                                     |   |        |                 |$46.07    |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |

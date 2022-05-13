# Project Report

               The objective of the project is to initiate the automatic wiper action by sensing the intensity of the rain or snow
               and thus increasing or decreasing the wiper speed accordingly. This automatic wiper system has a sensing unit, a 
               controller which has 'STM32F407VG' Microcontroller at its core and a motor unit which moves the arm of the wiper 
               thus facilitating the wiping action.

## Features

               The project's key features are :
               * It can control wiper action without human intervention.
               * It is reliable and easy to configure.
               * It offers three different modes of control - low speed, medium speed, high speed.
               
               
## Identifying the Requirements
      Technologies and Tools Used:
      
               * Development Tool: Github Website.
               * IDE Used : STM32CubeIDE.
               * Languages Used: C Language, Makefile.
               * Toolchain : GNU.
               * Emulator : Qemu.
               * Packages : Xpack packages (Windows Build Tools, Open OCD, Qemu).
               * Environment : Windows Subsytem for Linux (WSL).
               
## Highlevel Requirements
|HLR_ID|Description|Status|
|:--:|:--:|:--:|
|HLR_1|The Red LED is on to indicate the Ignition Key position at ACC |Implemented|
|HLR_2|LEDs come on in desired pattern at set frequency replicating speed control of wiper arm|Implemented|
|HLR_3|The Red LED is off to indicate the Ignition Key position at Lock|Implemented|

    
## Lowlevel Requirements
|HLR_ID|LLR_ID|Description|Status|
|:--:|:--:|:--:|:--:|
|HLR_2|LLR_01|LEDs come on in desired pattern at set frequency at 1 Hz(low speed)|Implemented|
||LLR_02|LEDs come on in desired pattern at set frequency at 4 Hz(medium speed)|Implemented|
||LLR_03|LEDs come on in desired pattern at set frequency at 8 Hz(high speed)|Implemented|               
               
## Author

- [@ITSMEUNICK-21](https://www.github.com/ITSMEUNICK-21)



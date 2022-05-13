# Description
* Wiper control system designed uses STM32F407VG as the main controller, which senses the severity of rain or snow and helps in varying the speeds of wiper     accordingly without any manual intervention.

# Features
* It can control wiper action without human intervention.
* It is reliable and easy to configure.
* It offers three different modes of control - low speed, medium speed, high speed.
   
# Highlevel Requirements
|HLR_ID|Description|Status|
|:--:|:--:|:--:|
|HLR_1|The Red LED is on to indicate the Ignition Key position at ACC |Implemented|
|HLR_2|LEDs come on in desired pattern at set frequency replicating speed control of wiper arm|Implemented|
|HLR_3|The Red LED is off to indicate the Ignition Key position at Lock|Implemented|

    
# Lowlevel Requirements
|HLR_ID|LLR_ID|Description|Status|
|:--:|:--:|:--:|:--:|
|HLR_2|LLR_01|LEDs come on in desired pattern at set frequency at 1 Hz(low speed)|Implemented|
||LLR_02|LEDs come on in desired pattern at set frequency at 4 Hz(medium speed)|Implemented|
||LLR_03|LEDs come on in desired pattern at set frequency at 8 Hz(high speed)|Implemented|


# SWOT Analysis
![]()

# 4W's & 1H
* **What**  : Automatic Wiper Control System using the microcontroller STM32F407VG.
* **When**  : When the visibility of the road is compromised due to rain, snow, dust.
* **Where** : On the windshield of the vehicle.
* **Why**   : To improve the visibility of the road, to prevent accidents and to ensure safe travel.
* **How**   : By designing an embedded system controller to control the wiper arm action according to severity of conditions without human intervention.

# References

* https://www.st.com/resource/en/datasheet/stm32f407vg.pdf
* https://www.st.com/resource/en/reference_manual/rm0090-stm32f405415-stm32f407417-stm32f427437-and-stm32f429439-advanced-armbased-32bit-mcus-stmicroelectronics.pdf
* https://www.st.com/resource/en/data_brief/stm32f4discovery.pdf
* https://www.st.com/content/ccc/resource/technical/layouts_and_diagrams/schematic_pack/group1/0f/91/8b/39/b3/78/4d/c4/MB997-F407VGT6-B02_Schematic/files/MB997-F407VGT6-B02_Schematic.pdf/jcr:content/translations/en.MB997-F407VGT6-B02_Schematic.pdf

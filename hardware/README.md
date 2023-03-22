# Loadboard Hardware
# Overview
This board was designed in Altium Designer. Thus, all the associated files can only be openned in Altium Designer.
Some basic description can be given regarding the LoadBoard PCB, one of them being the size of the board. The PCB is 40.64mmx60.96mm (wxl) from tip of the board:
 ![LC_PCB TIP_size](2023-03-20-17-42-47.png)

And from mounting it is just 30.48mmx50.80mm (wxl):
 ![LC_PCB MH_size](2023-03-20-17-40-10.png) 

Another important aspect of this board is the layers. Board consist of two layers namely top and bottom.

Manufacturing should not be a problem, since, all the requirements for it has been fultilled by the board. Optimal track-width used for the board is 10mil this is enough since, signal transmission distance is not that long and overall current needed is that high(around 300mA). 

Saturn diagnostigs go here:

# Connections
Connectors are also one of the important components on the board. Overall two types of connectors were used on this project namely goldpin and JSTx4 connectors. Below respected connections were given.


Goldpin connector pin description:

| No# | PIN_NAME    | PIN_DESCRIPTION                |
| :-- | ----------- | ------------------------------ |
| 1   | GND         | Ground connection              |
| 2   | 5V          | 5V power supply pin            |
| 3   | 3V3         | 3V3 power supply pin           |
| 4   | ESP_IO15    | GPIO15, Busy: Programming mode |
| 5   | ESP_IO2     | GPIO2, Busy: Programming mode  |
| 6   | ESP_RST     | RESET pin                      |
| 7   | ESP_RX      | UART RX communication pin      |
| 8   | ESP_TX      | UART TX communication pin      |
| 9   | ESP_I2C_SCL | I2C serial clock pin           |
| 10  | ESP_I2C_SDA | I2C serial data pin            |

JST-B4B connector(ADC connectors):

| No# | PIN_NAME | PIN_DESCRIPTION |
| :-- | -------- | --------------- |
|     |          |                 |
|     |          |                 |
# Schematic
Schematic of the board is rather simple and easy to read. It consist of 5 ICs(integrated circuit) 5 connectors and other components such as switches and mounting-holes. All of this will be discussed later on the document. Schematic review:
![Schematic](2023-03-20-18-51-30.png)
## MCU
Microcontroller is the essential part of this board.
## Buttons
Overall, two buttons were used for the purpose of controlling the modes of FLASH and UART-DOWNLOAD. This modes are possible with specific configuration of GPIO pins:

<p align='center'>
<img src=2023-03-22-00-30-15.png>
</p>

SW1: Is used specifically for IO0 since, it is the main pin that is being changed from GND to 3V3(High).

SW2: Is used for enable 'EN' pin functionality, since, it is need to turn on and off MCU everytime mode is changed, this can easily be done by such botton.

NOTE: 10K ohm pull-up/pull-down resistors were added to named pins in schematic.
## Loadcell amplifiers
...
## Temperature sensors
...
## Voltage Regulator
...
## Voltage Reference
...

# PCB
## Front layer
...
## Back layer
...
## Manufacturing requirements
(Description about layer stack, minimal trace width and distance etc.., basically if it can be manufactured in JLCPCB)

# BOM
(Table with Bill Of Materials)
# 21D_SimpleLora_test
A project to test the Node [SimpleLoRa](https://github.com/nBlocksStudioNodes/nblocks_simplelora).

The Shematic Design repository is here: [21D_SimpleLoRa_test_SchDESIGN](https://github.com/nBlocksStudioApps/21D_SimpleLoRa_test_SchDESIGN)


## Design
We are using a multi board Design: Nodes 'A' are for the transmitting board and Nodes 'B' for the Receiving board.
The Transmitting board sends a new counter value every 5sec and the Receiving board prints that value to the serial port.

<p align="center">
<img
src="img/01.PNG"
width = 800
/>
</p>

## Setup
n-Blocks PRO series boards allow fast and compact prototyping.
We are using 
 *  2x n-PRO-40 Lora boards
 *  2x n-PRO-24 pinstrip breakout boards
 *  1x n-PRO-DAP to connect the Receiver board to PC USB.

 <img
src="img/07.PNG"
height = 250
/> <img
src="img/06.PNG"
height = 250
/> <img
src="img/02.PNG"
height = 250
/> 


## Receiver 
The Receiver board is connected to PC terminal  via the n-PRO-DAP board USB interface. The received characters are printed in the screen. In every transmission we see the next value of the transmitted Counter content.
<p align="center">
<img
src="img/03.PNG"
width = 400
/>
</p>


## RX and TX builds
Using the nBlocksStudio assist, we have created 2 builds, one for RX board and one for TX board. Each contains a binary file to be programmed to Microcontroller flash memory

<img
src="img/08.PNG"
width = 200
/> <img
src="img/05.PNG"
width = 600
/>

## Flash programming
In this example we are using `SM32 ST-Link Utility` software to program the Microprocessor Flash memory. TX / RX board is programmed with the respective binary file  
<p align="center">
<img
src="img/04.PNG"
width = 600
/>
</p>

## Tests
 *  TX every 5s :heavy_check_mark:
 *  TX every 1s :heavy_check_mark: 
 *  Receive and print TX Counter up to 100 :heavy_check_mark: 
 *  Leds are ON for 4ms :heavy_check_mark:
 *  TX_led and RX_led seem about synchronized to naked eye :heavy_check_mark:

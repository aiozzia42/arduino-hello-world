# Arduino UNO R3
Board information:
- Board model: Arduino UNO R3 (CH340G USB version)
- Microcontroller: ATmega328P-AU (SMD version)

## Installation
- Install [Arduino IDE](https://www.arduino.cc/en/software/#ide)
- Make sure the `Arduino AVR Boards` hardware package by Arduino is installed (it should already be preinstalled): Tools -> Board -> Boards Manager -> search for the package -> Install

## Usage
Prepare the board:
- Plug the board into an USB port
- Select the board: Tools -> Board -> `Arduino AVR Boards` -> `Arduino UNO`
- Select the port: Tools -> Port -> the one that shows up, for example COM3

Compile and upload:
- Make sure the serial monitor is closed (if not, the upload can fail because the port can be busy)
- Click the `Verify` button to compile the code
- Click the `Upload` button to compile the code and upload it to the board
- Open the serial monitor and make sure the appropriate `baud` is selected (here it should be 115200)

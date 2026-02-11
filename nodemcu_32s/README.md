# NodeMCU-32S
Board information:
- Board model: NodeMCU-32S
- Microcontroller: ESP32

## Installation
- Install [Arduino IDE](https://www.arduino.cc/en/software/#ide)
- Add the Espressif ESP32 hardware package source in preferences: File -> Preferences -> Settings -> Additional boards manager URLs -> Add `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json` (if there are multiple URLs, separate them with commas)
- Install the `esp32` hardware package by Espressif Systems: Tools -> Board -> Boards Manager -> search for the package -> Install

## Usage
Prepare the board:
- Plug the board into an USB port
- Select the board: Tools -> Board -> `esp32` -> `NodeMCU-32S` (if not available, select `ESP32 Dev Module`)
- Select the port: Tools -> Port -> the one that shows up, for example COM3

Compile and upload:
- Make sure the serial monitor is closed (if not, the upload can fail because the port can be busy)
- Click the `Verify` button to compile the code
- Click the `Upload` button to compile the code and upload it to the board
- Open the serial monitor and make sure the appropriate `baud` is selected (here it should be 115200)

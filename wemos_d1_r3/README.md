# NodeMCU-32S
Board information:
- Board model: WeMos D1 R3
- Microcontroller: ESP8266

## Installation
Software installation:
- Install [CH340 Driver](https://www.wemos.cc/en/latest/ch340_driver.html)
- Install [Python](https://www.python.org/downloads/)
- Install [Arduino IDE](https://www.arduino.cc/en/software/#ide)

Setup in Arduino IDE:
- Add the ESP8266 hardware package source in preferences: File -> Preferences -> Settings -> Additional boards manager URLs -> Add `https://arduino.esp8266.com/stable/package_esp8266com_index.json` (if there are multiple URLs, separate them with commas)
- Install the `esp8266` hardware package by ESP8266 Community: Tools -> Board -> Boards Manager -> search for the package -> Install

Source: [WeMos D1 official page](https://www.wemos.cc/en/latest/tutorials/d1/get_started_with_arduino_d1.html)

## Usage
Prepare the board:
- Plug the board into an USB port
- Select the board: Tools -> Board -> `esp8266` -> `LOLIN(WEMOS) D1 R2 & mini`
- Select the port: Tools -> Port -> the one that shows up, for example COM3

Compile and upload:
- Make sure the serial monitor is closed (if not, the upload can fail because the port can be busy)
- Click the `Verify` button to compile the code
- Click the `Upload` button to compile the code and upload it to the board
- Open the serial monitor and make sure the appropriate `baud` is selected (here it should be 115200)

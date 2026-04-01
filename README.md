## Keypad Library for Arduino - DIYables_Keypad
This library is designed for Arduino, ESP32, ESP8266... to work the keypad. It is created by DIYables to work with DIYables keypad, but also work with other brand keypad. Please consider purchasing [keypad 3x4](https://www.amazon.com/dp/B0BXKKV9QN) and [keypad 4x4](https://www.amazon.com/dp/B0BXKM8XB4)  from DIYables to support our work.


![Keypad](https://diyables.io/images/products/keypad-kit.jpg)



Product Link
----------------------------
* [Keypad 3x4](https://diyables.io/products/keypad-3x4)
* [Keypad 4x4](https://diyables.io/products/keypad-4x4)


Features
----------------------------
* Works with any hardware platform that supports Arduino API. It also works with Arduino Uno R4 WiFi and Minima


Available Functions
----------------------------
* DIYables_Keypad(char *keymap, byte *rowPins, byte *columnPins, byte numRows, byte numCols);
* char getKey();
* void setDebounceTime(unsigned long time);


Available Examples
----------------------------
* Keypad_3x4
* Keypad_4x4

Tested Hardware
----------------------------

| Board                   | Tested |
|-------------------------|:------:|
| Arduino Uno R3          |   ✅   |
| [DIYables STEM V3 *(works like Arduino Uno R3)*](https://diyables.io/products/diyables-stem-v3-fully-compatible-with-arduino-uno-r3) |   ✅   |
| Arduino Uno R4 WiFi     |   ✅   |
| [DIYables STEM V4 IoT *(works like Arduino Uno R4 WiFi)*](https://diyables.io/products/diyables-stem-v4-iot-fully-compatible-with-arduino-uno-r4-wifi) |   ✅   |
| [DIYables STEM V4B IoT *(works like Arduino Uno R4 WiFi)*](https://diyables.io/products/diyables-stem-v4b-iot-development-board-compatible-with-arduino-uno-r4-wifi-ra4m1-32-bit-arm-cortex-m4-with-esp32-s3-wifi-bluetooth-usb-c-for-learning-prototyping-education) |   ✅   |
| Arduino Uno R4 Minima   |   ✅   |
| [DIYables STEM V4 Edu *(works like Arduino Uno R4 Minima)*](https://diyables.io/stem-v4-edu) |   ✅   |
| Arduino Mega            |   ✅   |
| [DIYables MEGA2560 R3 *(works like Arduino Mega 2560 Rev3)*](https://diyables.io/atmega2560-board) |   ✅   |
| Arduino Due             |   ✅    |
| Arduino Giga            |   ✅    |
| [DIYables ESP32 S3, Uno-form factor](https://diyables.io/products/esp32-s3-development-board-with-esp32-s3-wroom-1-n16r8-wifi-bluetooth-uno-compatible-form-factor-works-with-arduino-ide) |   ✅   |
| Other boards            |   —    |


References
----------------------------
* [DIYables_Keypad Library Reference](https://arduinogetstarted.com/reference/library/diyables-keypad-library)




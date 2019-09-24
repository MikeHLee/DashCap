#!/bin/bash

cd /home/pi/rpi-rgb-led-matrix/utils
sudo timeout 5 /home/pi/rpi-rgb-led-matrix/utils/led-image-viewer $1 --led-rows=32 --led-cols=64 --led-gpio-mapping=adafruit-hat


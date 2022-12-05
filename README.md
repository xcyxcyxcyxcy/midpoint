# Midpoint
# Code
## Working

The main function of our project is to make the ultrasonic distance sensor and people detection work together and use WIFI module to upload and save the imformation. So we are modifying the people detection example of PICO-4ML and the ultrasonic distance detection example of the IR distance sensor.The original code:

[people_detection_main.cpp](https://github.com/xcyxcyxcyxcy/midpoint/blob/main/code/main.cpp)

[ultrasonic_distance_sensor.cpp](https://github.com/xcyxcyxcyxcy/midpoint/blob/main/code/objectExample.cpp).

[WIFI module](https://learn.adafruit.com/adafruit-airlift-featherwing-esp32-wifi-co-processor-featherwing/circuitpython-wifi)

## In-progress

We are working on the code that using the distance sensor to arouse the people detection function of the PICO-4ML when the distance between our system and people is less than 30 centimeters. So we are trying to combine the two code [people_detection_main.cpp](https://github.com/xcyxcyxcyxcy/midpoint/blob/main/code/main.cpp) and [ultrasonic_distance_sensor.cpp](https://github.com/xcyxcyxcyxcy/midpoint/blob/main/code/objectExample.cpp).

- Partly working code:
[code](https://github.com/xcyxcyxcyxcy/midpoint/blob/main/code/detection%20distance.cpp)

- Fully broken code:
[code](https://github.com/xcyxcyxcyxcy/midpoint/blob/main/code/mainx.cpp)

## Libraries

- [people detection](https://github.com/xcyxcyxcyxcy/midpoint/tree/main/code/person_detection)
- [Ultrasonic](https://github.com/xcyxcyxcyxcy/midpoint/tree/main/code/Pico-Ultrasonic-main)

## Reference

- [people detection starter code](https://github.com/ArduCAM/pico-tflmicro)
- [Ultrasonic starter code](https://github.com/KleistRobotics/Pico-Ultrasonic)
- [WIFI module starter code](https://learn.adafruit.com/adafruit-airlift-featherwing-esp32-wifi-co-processor-featherwing/circuitpython-wifi)

# media
## materials

- 

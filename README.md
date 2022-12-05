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

# Media
## Materials

- PICO-4ML

<div align=center><img width="300" height="300" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/9205B808-AE8E-4A3E-985E-10D12316B3E9.jpeg"/></div>

- IR distance sensor

<div align=center><img width="300" height="300" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/339DAB9A-5A32-430B-9B17-41B928659B7B.jpeg"/></div>

- AIRLIFT

<div align=center><img width="300" height="300" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/5C22C1B9-155A-41EF-980A-2F1319CD9352.jpeg"/></div>

- Adafruit STEMMA Speaker

<div align=center><img width="400" height="300" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/30F387CE-3AB7-4563-BA39-9DAC05BBD92B.jpeg"/></div>

- Populated breadboards

<div align=center><img width="400" height="300" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/WechatIMG105.jpeg"/></div>

## Design

- Sketches
<div align=center><img width="800" height="600" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/WechatIMG110.jpeg"/></div>

## Troubleshooting

Now we can use distance sensor to trigger the camera in PICO-4ML successfully for one time and we are modifying the code to realize the loop.

- Terminal screenshots
<div align=center><img width="800" height="200" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/WechatIMG480.png"/></div>

## Demos

- If the distance between objects and sensor is less than 30CM, the bulbs andn buzzer will turn on.

[video](https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/对方正在长头发🌚%202022-12-12%2016.16.51.mp4)

- Distance sensor can trigger the camera in PICO-4ML successfully for one time.
<div align=center><img width="800" height="200" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/WechatIMG480.png"/></div>

# Diagram

<div align=center><img width="800" height="400" src="https://github.com/xcyxcyxcyxcy/midpoint/blob/main/image/图片%201.png"/></div>



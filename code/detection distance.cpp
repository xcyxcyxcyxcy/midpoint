#include "main_functions.h"
#include "pico/stdio.h"
#include "pico/stdlib.h"
#include "ultrasonic.h"
#include "hardware/uart.h"
#include "ultrasonicObject.h"
#include "hardware/clocks.h"
#include <cstdio>
int trigPin = 2;
int echoPin = 3;


// This is the default main used on systems that have the standard C entry
// point. Other devices (for example FreeRTOS or ESP32) that have different
// requirements for entry code (like an app_main function) should specialize
// this main.cc file in a target-specific subfolder.
int main(int argc, char *argv[]) {
stdio_init_all();
gpio_init(7);
setup();
gpio_set_dir(7, GPIO_OUT);
while (true) { 
      loop();
      Ultrasonic myUltrasonic(trigPin, echoPin);   
      printf("\n %d cm\n", myUltrasonic.getCM()); 
      if (myUltrasonic.getCM() <= 30)
        { loop();
          gpio_put(7, 1);
       sleep_ms(10); 
       }
        else
        {gpio_put(7, 0);
        sleep_ms(100);}
  }
}
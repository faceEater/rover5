/*
  Interface.h - Library for driving the rover5 robot platform with custom motor drivers.
  Created by Connor H. Crenshaw, November 3, 2012.
  released under the GPL, version 2 or higher
*/

#ifndef Interface_h
#define Interface_h

#include "Arduino.h"

class Motors //Interfaces with motor drivers
{
  public:
    Motors (int pin_a, int pin_b, int pin_c, int pin_d); //Attach dual connorMotorDrives to these pins
    void drive(unsigned char direction);
  private:
    int _pins[4];
};
class Encoders //Interfaces with encoders
{
};
class Xbee //Decodes and encodes messages for wireless transmission
{
};
class Rpi //Comunicates with the raspberry pi
{
};
class System //Handles power management, protection, etc. Includes calibration/configuration constants
{
};
#endif

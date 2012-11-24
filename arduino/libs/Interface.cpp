/*
  Interface.cpp - Library for driving the rover5 robot platform with custom motor drivers.
  Created by Connor H. Crenshaw, November 3, 2012.
  released under the GPL, version 2 or higher
*/

#include "Arduino.h"
#include "Interface.h"

Motors::Motors(int pin_a, int pin_b, int pin_c, int pin_d) //Attach dual H-bridges to these pins
{
  _pins={pin_a,pin_b,pin_c,pin_d};
}

void Motors::drive(unsigned char direction)       //value,mode*4 - mode 0 is drive, value 1 is forward           
{
    for(int i=0;i<4;i++){
        unsigned char mask = (0b11000000 >> (i*2));      //advance to the next set of values
        unsigned char data = (direction&mask)>>(6-i*2); //mask off bits we dont need
        unsigned char mode = (data&0b00000010)>>1;       //seperate out the mode bit
        unsigned char value = data&0b00000001;           //seperate out the value bit
        if (mode){                                     //set pin mode
            pinMode(_pins[i],INPUT);
        }
        else{
            pinMode(_pins[i],OUTPUT);
        }
        if (value){                                    //set pin value
            digitalWrite(_pins[i],HIGH);
        }
        else{
            digitalWrite(_pins[i],LOW);
        }
    }
        
}



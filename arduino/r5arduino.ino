#include <Interface.h>
Motors motors(13,12,11,10);
void setup(){
}
void loop(){
  motors.drive(0b10111011);
  delay(1000);
  motors.drive(0b00000000);
  delay(1000);
  motors.drive(0b10111110);
  delay(1000);
  motors.drive(0b00000000);
  delay(1000);
}  

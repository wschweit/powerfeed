#include "speed_control.h"

SpeedControl::SpeedControl(int speedInPort, int minSpeed, int maxSpeed) {
  speedInPort_ = speedInPort;
  minSpeed_ = minSpeed;
  maxSpeed_ = maxSpeed;
}

int SpeedControl::getSpeed() {
  //TODO
    int speedPinValue = analogRead(IN_SPEED_Y_PIN);
    return map(speedPinValue, 0, 1023, minSpeed_, maxSpeed_); 

//  return maxSpeed_;
}

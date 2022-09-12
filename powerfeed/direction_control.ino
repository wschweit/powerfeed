
#include "direction_control.h"

DirectionControl::DirectionControl(int direction1Pin, int direction2Pin){
  direction1Pin_ = direction1Pin;
  direction2Pin_ = direction2Pin;
}

Direction DirectionControl::getDirection() {
  //TODO: read pins and decide direction

    int dir1 = digitalRead(direction1Pin_);
    int dir2 = digitalRead(direction2Pin_);
  
    if(dir1 == dir2) {
      return Direction::NONE;
    }
  
    return dir1 == HIGH ? Direction::DIRECTION_1 : Direction::DIRECTION_2;
  //return Direction::DIRECTION_1;
}

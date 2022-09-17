#include "direction_limit.h"

DirectionLimit::DirectionLimit(int switchPin, Direction limitedDirection, DirectionSource* limitedSource) {
  switchPin_ = switchPin;
  limitedDirection_ = limitedDirection;
  limitedSource_ = limitedSource;  
}


Direction DirectionLimit::getDirection() {
  Direction direction = limitedSource_->getDirection();

  int switchValue = digitalRead(switchPin_);
  if(switchValue == HIGH && direction == limitedDirection_) {
    return Direction::NONE;
  }
  return direction;
}

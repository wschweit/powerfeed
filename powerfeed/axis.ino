#include "axis.h"

Axis::Axis(String label, DirectionSource* directionSource, SpeedControl* speedControl, StepperMotor* stepperMotor) {
  label_ = label;
  directionSource_ = directionSource;
  speedControl_ = speedControl;
  stepperMotor_ = stepperMotor;
}

void Axis::initialize() {
 //TODO ?
}

void Axis::loop() {

  int speed = speedControl_->getSpeed();
  Direction direction = directionSource_->getDirection();

  if(direction == Direction::NONE) {
    speed = 0;
  } 

  stepperMotor_->step(direction, speed);
}

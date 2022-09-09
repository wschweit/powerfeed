#include "axis.h"

Axis::Axis(String label, DirectionControl* directionControl, SpeedControl* speedControl, StepperMotor* stepperMotor) {
  label_ = label;
  directionControl_ = directionControl;
  speedControl_ = speedControl;
  stepperMotor_ = stepperMotor;
}

void Axis::initialize() {
 //TODO ?
}

void Axis::loop() {

  int speed = speedControl_->getSpeed();
  Direction direction = directionControl_->getDirection();

  if(direction == Direction::NONE) {
    speed = 0;
  } 

  stepperMotor_->step(direction, speed);
}

#include "pins.h"
#include "stepper_motor.h"


StepperMotor::StepperMotor(int minStepDelay, int directionPin, int stepPin) {
  minStepDelay_ = minStepDelay;
  directionPin_ = directionPin;
  stepPin_ = stepPin;
}

void StepperMotor::step(Direction direction, int speed) {
  if(speed == 0) {
    delayMicroseconds(2*minStepDelay_);
    return;
  }
  
  //Set direction
  digitalWrite(directionPin_, direction == Direction::DIRECTION_1 ? DIR_1_VALUE : DIR_2_VALUE);
  
  unsigned long stepDelay = minStepDelay_ * (double) SPEED_SCALE_MAX / speed;

  digitalWrite(stepPin_, HIGH);
  delayMicroseconds(stepDelay);
  digitalWrite(stepPin_, LOW);
  delayMicroseconds(stepDelay);
}

#ifndef _H_STEPPER_MOTOR_H_INCLUDED_
#define _H_STEPPER_MOTOR_H_INCLUDED_

#include "direction.h"

class StepperMotor {
private:
  int minStepDelay_;
  int directionPin_;
  int stepPin_;

public:
  StepperMotor(int minStepDelay, int directionPin, int stepPin);

  void step(Direction direction, int speed);
};


#endif

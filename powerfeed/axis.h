#ifndef _H_AXIS_H_INCLUDED_
#define _H_AXIS_H_INCLUDED_

#include <string.h>
#include "direction_control.h"
#include "speed_control.h"
#include "stepper_motor.h"


class Axis {
  private:
  
  String label_;
  DirectionControl* directionControl_;
  SpeedControl* speedControl_;
  StepperMotor* stepperMotor_;  
  
  public:
  Axis(String label, DirectionControl* directionControl, SpeedControl* speedControl, StepperMotor* stepperMotor);

  void initialize();
  void loop();

};


#endif

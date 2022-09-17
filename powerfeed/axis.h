#ifndef _H_AXIS_H_INCLUDED_
#define _H_AXIS_H_INCLUDED_

#include <string.h>
#include "direction_source.h"
#include "speed_control.h"
#include "stepper_motor.h"


class Axis {
  private:
  
  String label_;
  DirectionSource* directionSource_;
  SpeedControl* speedControl_;
  StepperMotor* stepperMotor_;  
  
  public:
  Axis(String label, DirectionSource* directionSource, SpeedControl* speedControl, StepperMotor* stepperMotor);

  void initialize();
  void loop();

};


#endif

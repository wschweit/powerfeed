//Code for power feed using a stepper motor, pot for speed, and 2 way switch for direction
//Version 0.0.1

#include "pins.h"
#include "axis.h"
#include "direction_control.h"
#include "speed_control.h"


DirectionControl* yDirectionControl = new DirectionControl(IN_LEFT_Y_PIN, IN_RIGHT_Y_PIN);
SpeedControl* ySpeedControl = new SpeedControl(IN_SPEED_Y_PIN, SPEED_SCALE_MIN, SPEED_SCALE_MAX);
StepperMotor* yStepperMotor = new StepperMotor(MIN_STEP_DELAY_Y, OUT_DIRECTION_Y_PIN, OUT_STEP_Y_PIN);

Axis yAxis("Y", yDirectionControl, ySpeedControl, yStepperMotor);

void setup() {
  // Declare pins as output:
  initializePins();
  yAxis.initialize();
  
}

void loop() {

  yAxis.loop();

}
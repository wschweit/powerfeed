//Code for power feed using a stepper motor, pot for speed, and 2 way switch for direction
//Version 0.0.1

#include "pins.h"
#include "button.h"
#include "axis.h"
#include "direction_control.h"
#include "direction_limit.h"
#include "speed_control.h"

Button onButton(ON_BUTTON_PIN);
DirectionControl* yDirectionControl = new DirectionControl(IN_LEFT_Y_PIN, IN_RIGHT_Y_PIN);
DirectionLimit* yLeftLimit = new DirectionLimit(IN_LEFT_Y_LIMIT_PIN, Direction::DIRECTION_1, yDirectionControl);
DirectionLimit* yRightLimit = new DirectionLimit(IN_RIGHT_Y_LIMIT_PIN, Direction::DIRECTION_2, yLeftLimit);
SpeedControl* ySpeedControl = new SpeedControl(IN_SPEED_Y_PIN, SPEED_SCALE_MIN, SPEED_SCALE_MAX);
StepperMotor* yStepperMotor = new StepperMotor(MIN_STEP_DELAY_Y, OUT_DIRECTION_Y_PIN, OUT_STEP_Y_PIN);

Axis yAxis("Y", yRightLimit, ySpeedControl, yStepperMotor);

void setup() {
  // Declare pins as output:
  initializePins();
  yAxis.initialize();
  
}

void loop() {
  if(!onButton.isEnabled()) {
    return;
  }
  yAxis.loop();

}

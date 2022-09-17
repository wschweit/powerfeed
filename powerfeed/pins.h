#ifndef _H_PINS_H_INCLUDED_
#define _H_PINS_H_INCLUDED_

#define OUT_DIRECTION_Y_PIN 12
#define OUT_STEP_Y_PIN 13
#define IN_SPEED_Y_PIN A0
#define IN_LEFT_Y_PIN 5
#define IN_RIGHT_Y_PIN 3
#define IN_LEFT_Y_LIMIT_PIN 6
#define IN_RIGHT_Y_LIMIT_PIN 7

#define ON_BUTTON_PIN 7

#define MIN_STEP_DELAY_Y 50

#define DIR_1_VALUE HIGH
#define DIR_2_VALUE LOW

#define SPEED_SCALE_MIN 0
#define SPEED_SCALE_MAX 65

void initializePins();

#endif

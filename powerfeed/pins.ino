
#include "pins.h"

void initializePins() {

  pinMode(OUT_STEP_Y_PIN, OUTPUT);
  pinMode(OUT_DIRECTION_Y_PIN, OUTPUT);
  pinMode(IN_LEFT_Y_PIN, INPUT_PULLUP);
  pinMode(IN_RIGHT_Y_PIN, INPUT_PULLUP);
}

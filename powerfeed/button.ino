#include "button.h"

Button::Button(int pin) {
  pin_ = pin;
  pushed_ = false; 
  enabled_ = false; 
}

bool Button::isEnabled() {
  int pushed = digitalRead(pin_);

  //TODO might need a delay for button bounce
  if(pushed && !pushed_) {
    //Button just went down
    enabled_ = !enabled_;
  } else if(!pushed && pushed_) {
    //Button went up
    pushed_ = false;
  }

  return enabled_;
}

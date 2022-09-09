#ifndef _H_SPEED_CONTROL_H_INCLUDED_
#define _H_SPEED_CONTROL_H_INCLUDED_


class SpeedControl {
private:
  int minSpeed_;
  int maxSpeed_;
  int speedInPort_;

public:
  SpeedControl(int speedInPort, int minSpeed, int maxSpeed);

  int getSpeed();
  
};

#endif

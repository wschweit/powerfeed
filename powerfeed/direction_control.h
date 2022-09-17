#ifndef _H_DIRECTION_CONTROL_H_INCLUDED_
#define _H_DIRECTION_CONTROL_H_INCLUDED_

#include "direction.h"
#include "direction_source.h"

class DirectionControl : public DirectionSource {
private:

  int direction1Pin_;
  int direction2Pin_;


public:
  DirectionControl(int direction1Pin, int direction2Pin);

  Direction getDirection();
  
};


#endif

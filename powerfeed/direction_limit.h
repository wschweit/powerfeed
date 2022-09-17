#ifndef _H_DIRECTION_LIMIT_H_INCLUDED_
#define _H_DIRECTION_LIMIT_H_INCLUDED_

#include "direction_source.h"

class DirectionLimit : public DirectionSource {
private:
  int switchPin_;
  Direction limitedDirection_;
  DirectionSource* limitedSource_;

public:
  DirectionLimit(int switchPin, Direction limitedDirection, DirectionSource* limitedSource);
  Direction getDirection();
};


#endif

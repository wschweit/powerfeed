#ifndef _H_BUTTON_H_INCLUDED_
#define _H_BUTTON_H_INCLUDED_


class Button {
private:
  int pin_;
  bool pushed_;
  bool enabled_;

public:

  Button(int pin);

  bool isEnabled();
};



#endif

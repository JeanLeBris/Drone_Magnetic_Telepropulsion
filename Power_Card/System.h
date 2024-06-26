#ifndef SYSTEM_H
#define SYSTEM_H

#include <Arduino.h>
#include "Coil.h"
#include "Joystick.h"
#include "Constants.h"

class System {
  public:
    System();
    void begin();
    // void getPosition();
    void updateData();
    void updatePowerFromJoystickTest(int num);
    void updatePowerFromJoystick();
    void printPower();
    void updateCoils();
    void remanence(int coil_number);

    Coil coils[8];
    Joystick joystick;
    
    int control_mode;
    
  private:

};

#endif

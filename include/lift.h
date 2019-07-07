#ifndef LIFT_H
#define LIFT_H

#include "main.h"
#include "okapi/api.hpp"

const int LEFTLIFT_MOTOR = 11;
const int RIGHTLIFT_MOTOR = 1;

class Arm {
public:
  ChassisControllerIntegrated lift = AsyncControllerFactory::create(LEFTLIFT_MOTOR,
     RIGHTLIFT_MOTOR, AbstractMotor::gearset::green);
  ControllerButton = presetButtons[3] = {
      ControllerButton(ControllerDigital::down),
      ControllerButton(ControllerDigital::right),
      ControllerButton(ControllerDigital::up)
  };
};
#endif

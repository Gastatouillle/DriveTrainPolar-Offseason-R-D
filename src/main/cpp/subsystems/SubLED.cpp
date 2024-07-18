// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/SubLED.h"

SubLED::SubLED() = default;

// This method will be called once per scheduler run
void SubLED::Periodic() {
    _blinkin.SetColour(2);
}

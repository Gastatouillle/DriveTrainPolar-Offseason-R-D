// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

namespace canid{
    constexpr int DriveBaseFrontRightDrive = 1; //done
    constexpr int DriveBaseFrontRightTurn = 2;
    constexpr int DriveBaseFrontRightEncoder = 3; //done

    constexpr int DriveBaseFrontLeftDrive = 4;
    constexpr int DriveBaseFrontLeftTurn = 5; //6
    constexpr int DriveBaseFrontLeftEncoder = 6;
        
    constexpr int DriveBaseBackRightDrive = 7; //done
    constexpr int DriveBaseBackRightTurn = 8;
    constexpr int DriveBaseBackRightEncoder = 9; //done

    constexpr int DriveBaseBackLeftDrive = 10; //done
    constexpr int DriveBaseBackLeftTurn = 11;
    constexpr int DriveBaseBackLeftEncoder = 12; //done
}

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace OperatorConstants {

inline constexpr int kDriverControllerPort = 0;

}  // namespace OperatorConstants

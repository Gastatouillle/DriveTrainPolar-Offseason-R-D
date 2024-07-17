#pragma once
#include <frc/motorcontrol/PWMSparkMax.h>
#include <frc/AddressableLED.h>

class BlinkinHelper : public frc::PWMSparkMax, wpi::Sendable {
    public:
        /**
        *Create a rev blinkin to make interaction simpler
        * @param PWMPortID
        *
        */
       BlinkinHelper(int PWMPortID);

       void SetColour(int PWMValue);
};

class AddressableHelper : public frc::AddressableLED, wpi::Sendable {
    public:
        /**
         * Create an addressable led to make interaction simpler
         * @param PWMPortID
         * @param PWMPortID
        */
        AddressableHelper(int PWMPortID, int LEDLength = 60);

        void SetColour(int PWMValue);
};
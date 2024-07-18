#pragma once
#include <frc/motorcontrol/PWMSparkMax.h>
#include <frc/AddressableLED.h>

class BlinkinHelper : public frc::PWMSparkMax{
    public:
        /**
        *Create a rev blinkin to make interaction simpler
        * @param DeviceID
        *
        */
       BlinkinHelper(int DeviceID);

       /**
        * Control Blinkin with a PWM value 0-255
        * @param PWMValue 
       */

       void SetColour(int PWMValue);
};

class AddressableHelper : public frc::AddressableLED{
    public:
        /**
         * Create an addressable led to make interaction simpler
         * @param DeviceID
         * @param LEDLength
        */
        AddressableHelper(int DeviceID, std::size_t LEDLength = 60);
        std::array<frc::AddressableLED::LEDData, LEDLength> _buffer;

        /**
         * Control the colour of the leds with a RGB value 0-255 for each R,G,B
         * @param R
         * @param G
         * @param B
        */

        void SetColour(int R, int G, int B);
};
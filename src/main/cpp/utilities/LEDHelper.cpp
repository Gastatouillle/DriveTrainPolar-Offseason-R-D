#include <utilities/LEDHelper.h>

BlinkinHelper::BlinkinHelper(int DeviceID) :  frc::PWMSparkMax(DeviceID){}

void BlinkinHelper::SetColour(int PWMValue){
    PWMSparkMax::Set(PWMValue);
}

AddressableHelper::AddressableHelper(int DeviceID, std::size_t LEDLength = 60) : frc::AddressableLED(DeviceID){
    SetLength(LEDLength);
    SetData(_buffer);
}
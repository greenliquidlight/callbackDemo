#include <DemoClass.h>

void DemoClass::printNumberInDec(int number) 
{
    std::cout << "Class Member - Number: " << number << "\n";
}

void DemoClass::printNumberInHex(int number) 
{
    std::cout << "Class Member - Number: 0x" << std::hex << number << "\n";
}

void DemoClass::setCallback(std::function<void(int)> callback) 
{
    callbackFunction = callback;
}

void DemoClass::runCallback(int number) 
{
    callbackFunction(number);
}

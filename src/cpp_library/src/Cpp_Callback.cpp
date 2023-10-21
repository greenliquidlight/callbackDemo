#include <Cpp_Callback.h>

void Cpp_Callback::printNumberInDec(int number) 
{
    std::cout << "Class Member - Number: " << number << "\n";
}

void Cpp_Callback::printNumberInHex(int number) 
{
    std::cout << "Class Member - Number: 0x" << std::hex << number << "\n";
}

void Cpp_Callback::setCallback(std::function<void(int)> callback) 
{
    callbackFunction = callback;
}

void Cpp_Callback::runCallback(int number) 
{
    callbackFunction(number);
}

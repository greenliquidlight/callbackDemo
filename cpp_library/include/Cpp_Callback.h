#ifndef CPP_CALLBACK_H
#define CPP_CALLBACK_H

#include <iostream>
#include <functional>

using namespace std;

class Cpp_Callback 
{
    public:
        void printNumberInDec(int number);
        void printNumberInHex(int number);
        void setCallback(std::function<void(int)> callback);
        void runCallback(int number);

    private:
        std::function<void(int)> callbackFunction;
};
#endif // CPP_CALLBACK_H

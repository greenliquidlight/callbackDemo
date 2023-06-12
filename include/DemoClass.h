#ifndef DEMOCLASS_H
#define DEMOCLASS_H

#include <iostream>
#include <functional>

using namespace std;

class DemoClass 
{
    public:
        void printNumberInDec(int number);
        void printNumberInHex(int number);
        void setCallback(std::function<void(int)> callback);
        void runCallback(int number);

    private:
        std::function<void(int)> callbackFunction;
};
#endif // DEMOCLASS_H
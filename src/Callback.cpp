#include <stdio.h>
#include <CallbackDemo.h>

#ifdef NO_CLASS
// local function pointer that will be used to call the callback function
static CallbackFunction callbackFunction = nullptr;

// Print a number to the console
void printNumberInDec(int number)
{
    printf("Number: %d\n", number);
}

// Prints a number to the console in hex
void printNumberInHex(int number)
{
    printf("Number: 0x%x\n", number);
}

// Function that takes a function pointer as an argument and 
// set the callback function to the one passed in
void setCallback(CallbackFunction callback)
{
    callbackFunction = callback;
}

void runCallback(int number)
{
    callbackFunction(number);
}

// Use for test?
int main(int argc, char* argv[])
{
    // Set the callback function to printNumberInDec
    setCallback(&printNumberInDec);

    // Call the callback function
    runCallback(10);       

    // Set the callback function to printNumberInHex
    setCallback(&printNumberInHex);

    // Call the callback function
    runCallback(10);

    return 0;
}
#else
#include <DemoClass.h>

int main() {
    DemoClass myClass;
    
    // Set the callback function to printNumberInDec using a lambda function
    myClass.setCallback([&](int number) { myClass.printNumberInDec(number); });

    // Call the callback function
    myClass.runCallback(10);

    // Set the callback function to printNumberInHex
    myClass.setCallback([&](int number) { myClass.printNumberInHex(number); });

    // Call the callback function
    myClass.runCallback(10);

    return 0;
}

#endif
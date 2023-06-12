#include <stdio.h>
#include <CallbackDemo.h>

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

int main(int argc, char* argv[])
{
    // Set the callback function to printNumberInDec
    setCallback(&printNumberInDec);

    // Call the callback function
    callbackFunction(10);       

    // Set the callback function to printNumberInHex
    setCallback(&printNumberInHex);

    // Call the callback function
    callbackFunction(10);

    return 0;
}

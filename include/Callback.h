#ifndef CALLBACK_DEMO_H
#define CALLBACK_DEMO_H

// uncomment this line to use the class version
// #define NO_CLASS

#ifdef NO_CLASS
typedef void (*CallbackFunction)(int);

// Simple function that prints a number to the console
void printNumberInDec(int number);

// Simple function that prints a number to the console in hex
void printNumberInHex(int number);

// Function that takes a function pointer as an argument and 
// set the callback function to the one passed in
void setCallback(CallbackFunction callback);

#endif // NO_CLASS

#endif // CALLBACK_DEMO_H
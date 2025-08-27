#ifndef MY_SERIAL_H // Include guard to prevent multiple inclusions of this header file
#define MY_SERIAL_H

#include <Arduino.h>

void SerialBegin();     // Function to initialize the serial communication
void SerialDataPrint(); // Function to print the data to the Serial Monitor
void SerialDataRead(); // Function to print the data to the Serial Monitor
void parseCommand(const String &msg); // Function to parse the command received from the Serial Monitor

#endif
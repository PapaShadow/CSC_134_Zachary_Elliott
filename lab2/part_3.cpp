//@author: Zachary Elliott
//@date: 08-27-25
//@purpose: Lab 2 part 3, calculates voltage

// #include is a runtime directive
#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace

int calcVoltage(int current, int resistance); // function prototype

int main() // main function where the program starts execution
{
    int current = 10,
        resist = 2,
        voltage;

    voltage = calcVoltage(current, resist); // call function pass in variables

    std::cout << "Given a current of " << current << " amps and a resitance of " << resist
        << " ohms, the calculated voltage is " << voltage << " volts." << std::endl; // display result

    return 0; // returns 0 to indicate successful execution
}

int calcVoltage(int current, int resistance)
{
    return current * resistance;
}
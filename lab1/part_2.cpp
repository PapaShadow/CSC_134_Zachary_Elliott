//@author: Zachary Elliott
//@date: 08-27-25
//@purpose: Lab 1 Part 2, divide by zero

#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace

int main() // main function where the program starts execution
{
    double num1 = 15.5, zero = 0; // initialize variables, ensure to add .0 to make sure they are doubles

    double sum = num1 / zero; // do the math

    cout << "The result of " << num1 << " divided by " << zero << " is " << sum << endl; // display output using cout

    return 0; // returns 0 to indicate successful execution
}
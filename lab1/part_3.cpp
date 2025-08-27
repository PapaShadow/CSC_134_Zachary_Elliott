//@author: Zachary Elliott
//@date: 08-27-25
//@purpose: Lab 1 Part 3

#include <cmath> // calls the cmath library for mathematical functions
#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace

int main() // main function where the program starts execution
{
    double num1 = 13; // initalize variable

    double sum = sqrt(num1); // call sqrt funtion to do easy square root

    cout << "The result of the square root of " << num1 << " is " << sum << endl; // spit out result

    return 0; // returns 0 to indicate successful execution
}
// Lab 2 Part 2
// Course: CSC 134
// Name: Zachary Elliott
// Date: 08-27-25

#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace

int main() // main function where the program starts execution
{
    double  distance = 400.0, time = 4.0;
    
    double  velocity = distance / time; // math

    cout << "The velocity calculated by traveling " << distance << " miles within "
        << time << " hours is " << velocity << "mph."; // display result

    return 0; // returns 0 to indicate successful execution
}
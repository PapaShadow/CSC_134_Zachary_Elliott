// Lab 2 Part 1
// Course: CSC 134
// Name: Zachary Elliott
// Date: 08-27-25

#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace

int main() // main function where the program starts execution
{
    double velocity = 80.0, time = 2.0;
    
    double distance = velocity * time; // math

    cout << "The distance traveled while going " << velocity << "mph for "
        << time << " hours is " << distance << " miles."; // display result

    return 0; // returns 0 to indicate successful execution
}
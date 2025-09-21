//@author: Zachary Elliott
//@date: 09-15-25
//@purpose: Week 5 lab 1, find out if user entered numbers make a 3-4-5 triangle
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // initialize height and length based off of requirements
    double height = 4.0,
           length = 3.0;

    // make PI a constant because it never changes
    const double PI = 3.14159265358979323846;

    // calculate theta in degrees
    // then round the entire thing to 2 decimal places
    // parentheses are important here
    // round will take it to the nearest whole number 
    // by multiplying by 100 before rounding and dividing by 100 after
    // we just shift the decimal point over 2 places
    double theta = std::round((atan2(height, length) * (180.0/PI)) * 100.0) / 100.0;

    if (theta == 53.13)
    {
        std::cout << "This is a 3-4-5 triangle!" << std::endl;
    }
    else
    {
        std::cout << "This is not a 3-4-5 triangle." << std::endl;
    }

    return 0; 
}
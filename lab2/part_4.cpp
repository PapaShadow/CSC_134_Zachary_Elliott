//@author: Zachary Elliott
//@date: 08-27-25
//@purpose: Lab 2 part 4, calculates force

// #include is a runtime directive
#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace

double calcForce(double mass, double accel); // function prototype

int main() // main function where the program starts execution
{
    //declare variables
    double mass = 10.0,
           accel = 9.81,
           force;

    force = calcForce(mass, accel); // call function pass in variables

    std::cout << "Given a mass of " << mass << "kg and an acceletarion of " << accel
        << "m/s^2, the calculated force is " << force << std::endl; // display result

    return 0; // returns 0 to indicate successful execution
}

double calcForce(double mass, double accel)
{
    return mass * accel;
}
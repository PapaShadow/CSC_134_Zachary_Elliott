//@author: Zachary Elliott
//@date: 08-27-25
//@purpose: Lab 2 Part 1 and 2, finds distance and velocity based off of specifified variables

#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace


// Function prototypes
// prototypes must be declared before main
// declaration order matters
int calculateDistance(int, int);
int findVelocity(int, int);

int main() // main function where the program starts execution
{
    // declare variables for calc-distance
    int velocity = 80.0, 
        time = 2.0,
        distance;
    
    int velocity2,
        time2 = 4,
        distance2 = 400;

    distance = calculateDistance(velocity, time); // call funtion pass in variables

    velocity2 = findVelocity(distance2, time2); // call function pass in variables

    std::cout << "The distance traveled while going " << velocity << "mph for "
        << time << " hours is " << distance << " miles." << std::endl; // display result for calc-distance

    std::cout << "The velocity calculated by traveling " << distance2 << " miles within "
        << time2 << " hours is " << velocity2 << "mph." << std::endl; // display result for find-velocity

    return 0; // returns 0 to indicate successful execution
}

int calculateDistance(int velocity,int time)
{
    return velocity * time;
}

int findVelocity(int distance, int time)
{
    return distance / time;
}

//@author: Zachary Elliott
//@date: 09-25
//@purpose: Lab 3, finds a new average if temps go up 2%

#include <iostream> //calls the iostream library for input and output operations
using namespace std; //calls the standard namespace

// Function prototypes
double find_new_average(double, double);

int main() //main function
{
    double new_york = 85,
            denver = 88,
            phoenix = 106,
            avg_increase = 1.02;

    std::cout << "The new average temp for New York after a 2% increase is "
        << find_new_average(new_york, avg_increase) << " degrees." << std::endl;
    
    std::cout << "The new average temp for Denver after a 2% increase is "
        << find_new_average(denver, avg_increase) << " degrees." << std::endl;
    
    std::cout << "The new average temp for Phoenix after a 2% increase is "
        << find_new_average(phoenix, avg_increase) << " degrees." << std::endl;

    return 0;
}

double find_new_average(double temp, double increase)
{
    return temp * increase;
}
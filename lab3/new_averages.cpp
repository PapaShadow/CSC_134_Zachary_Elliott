//@author: Zachary Elliott
//@date: 09-03-25
//@purpose: Week 3 lab, finds a new average if temps go up 2%

#include <iostream> //calls the iostream library for input and output operations
#include <string> //calls the string library for string operations
#include <iomanip> //calls the iomanip library for output formatting
#include <sstream> //calls the sstream library for string stream operations
using namespace std; //calls the standard namespace

// Function prototype
double find_new_average(double, double);

string display_avg(string, double);

int main() //main function
{
    //Set variables
    double new_york_avg = 85,
            denver_avg = 88,
            phoenix_avg = 106,
            avg_increase = 1.02; // 1.02 as the increase to reduce amount of math needed

    string new_york = "New York",
           denver = "Denver",
           phoenix = "Phoenix";        

    // Display results by calling fucntion in the output. 
    // New variable not neccesary here
    // new variable could be useful if we needed to keep the new average.
    /*
    std::cout << "The new average temp for New York after a 2% increase is "
        << find_new_average(new_york_avg, avg_increase) << " degrees." << std::endl;
    
    std::cout << "The new average temp for Denver after a 2% increase is "
        << find_new_average(denver_avg, avg_increase) << " degrees." << std::endl;
    
    std::cout << "The new average temp for Phoenix after a 2% increase is "
        << find_new_average(phoenix_avg, avg_increase) << " degrees." << std::endl;
    */

    // using a function to display information, makes everything cleaner
    // challegen is formatting the output to 2 decimal places
    std::cout << display_avg(new_york, find_new_average(new_york_avg, avg_increase)) << std::endl;
    std::cout << display_avg(denver, find_new_average(denver_avg, avg_increase)) << std::endl;
    std::cout << display_avg(phoenix, find_new_average(phoenix_avg, avg_increase)) << std::endl;

    return 0;
}

// function, set as double since we are working with percentages
// and tempatures and those can all be decimals.
double find_new_average(double temp, double increase)
{
    // by setting incease to 1.02 we just multipley, dont have to multiply by 0.02 and add
    return temp * increase;
}

string display_avg(string city, double new_avg)
{
    // return a string with the city and new average
    // to_string converts the double to a string for concatenation
    // to_string comes from the string library
    return "The new average temp for " + city + " after a 2% increase is "
        + to_string(new_avg) + " degrees.";
}
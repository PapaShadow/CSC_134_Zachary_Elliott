//@author: Zachary Elliott
//@date: 09-16-25
//@purpose: Week 5 lab 4, a program that loops until the user enters the correct number
#include <iostream>

using namespace std;

// function prototype
bool checkInput(double);

int main()
{
    // initialive user variable as double
    // also forces the loop to start siince it is not the right value
    double userDegree = 0.0;
    

    // loop until the user gets it right
    // uses not equals because i prefer it
    // calls function to check inout
    while (checkInput(userDegree) != true)
    {
        std::cout << "Please guess a tempature: ";
        std::cin >> userDegree;
    }

    // output success message
    std:: cout << "The tempature has been successfully set, thank you!" << std::endl;
    std:: cout << "This is a little warm for me, I'll be outside." << std::endl;

    return 0;
}

// simple bool function to do our check
bool checkInput(double userDegree)
{
    // correct temp is a constant
    double const CORRECT_TEMP = 212.34;
    // bool variable to pass around
    bool guessCorrect = false;

    if (userDegree != CORRECT_TEMP)
    {
        guessCorrect = false;
    }
    else
    {
        guessCorrect = true;
    }

    return guessCorrect;
}
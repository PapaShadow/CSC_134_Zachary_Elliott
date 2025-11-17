//@author: Zachary Elliott
//@date: 11-17-25
//@purpose: Week 14 lab 1, start of functions, creates a simple void function

#include <iostream>
#include <string>
using namespace std;

void displayWelcome();

int main()
{
    displayWelcome();

    return 0;
}

void displayWelcome()
{
    std::cout << "==============================\n" << "C++ Function Demonstration\n" << "==============================";
}
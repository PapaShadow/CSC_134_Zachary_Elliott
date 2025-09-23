//@author: Zachary Elliott
//@date: 09-22-25
//@purpose: Week 6 lab 1, simple for loop that counts 10 times

#include <iostream>
using namespace std;

int main()
{
    // variable to hold users max count request
    int userCount = 0;

    std::cout << "Please enter how many times you want it to loop: " ;
    std::cin >> userCount;

    // i starts at 0 should count 0- however much the user enters.
    for(int i = 0; i < userCount; i++)
    {
        // prints out current index which is defined as i
        std::cout << "Current count: " << i << std::endl;
    }

    return 0;
}
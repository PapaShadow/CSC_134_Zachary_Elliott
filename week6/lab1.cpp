//@author: Zachary Elliott
//@date: 09-22-25
//@purpose: Week 6 lab 1, simple for loop that counts 10 times

#include <iostream>
using namespace std;

int main()
{
    //create max count, not neccesary but good idea for future uses
    int const MAX_COUNT = 10;

    // i starts at 0 should count 0-9
    for(int i = 0; i < MAX_COUNT; i++)
    {
        // prints out current index which is defined as i
        std::cout << "Current count: " << i << std::endl;
    }

    return 0;
}
//@author: Zachary Elliott
//@date: 09-22-25
//@purpose: Week 6 lab 3, simple for loop
//  it will cycle 100 times while adding to an accumulator
//  it will display the accumulator at the end of the loop

#include <iostream>
using namespace std;

int main()
{
    //create max count, not neccesary but good idea for future uses
    // like for this lab XD
    int const MAX_COUNT = 100;

    // initialize loop counter starting at 0
    int counter = 0;

    // for counter that will count 0-99
    for(int i = 0; i < MAX_COUNT; i++)
    {
        // prints out current index which is defined as i
        std::cout << "Current count: " << i << std::endl;
        counter ++;
    }

    std::cout << "The accumulator value is: " << counter << std::endl;

    return 0;
}
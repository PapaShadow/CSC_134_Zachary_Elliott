//@author: Zachary Elliott
//@date: 09-22-25
//@purpose: Week 6 lab 4, simple for loop that counts backwards from 100

#include <iostream>
using namespace std;

int main()
{
    //create max count, not neccesary but good idea for future uses
    // useful again here, thanks me from like an hour ago!
    int const MAX_COUNT = 100;

 
    for(int i = MAX_COUNT; i <= 0; i--)
    {
        // prints out current index which is defined as i
        std::cout << "Current count: " << i << std::endl;
    }

    return 0;
}
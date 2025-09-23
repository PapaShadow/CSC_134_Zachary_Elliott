//@author: Zachary Elliott
//@date: 09-23-25
//@purpose: Week 6 lab 6, a for loop that will loop 50times
// each interation will see a sum of a counter and an addition variable

#include <iostream>

using namespace std;

int main()
{
    //create max count just for peace of mind
    int const MAX_COUNT = 50;

    int sumOp = 0;
    int adder = 10;

    // for loop that will iterate 100 times starting at 0
    for(int i = 0; i < MAX_COUNT; i++)
    {
        sumOp += (i + adder);
        std::cout << "Current sum: " << sumOp << std::endl;
    }

    return 0;
}
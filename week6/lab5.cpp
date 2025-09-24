//@author: Zachary Elliott
//@date: 09-23-25
//@purpose: Week 6 lab 5, this will use a for loop to print a table
//  the table will have 0-100 with their square root equivalent

#include <iostream>
#include <cmath>
using namespace std;

int doMath(int);

int main()
{
    //create max count just for peace of mind
    int const MAX_COUNT = 100;
    
    // variable to start loop at
    int minNum = 0;

    //this first so it doesnt repeat a 100 times over
    std::cout << "Number | Number Squared" << std::endl;
    std::cout << "------------------------" << std::endl;

    // for loop that will iterate 100 times starting at 0
    for(int i = minNum; i < MAX_COUNT; i++)
    {
        // formatted closely to need.
        // calls function to get the square root of i
        std::cout << i << "           " << doMath(i) << std::endl;
    }

    return 0;
}

//function to square the index
int doMath(int number)
{
    int result = 0;

    result = number * number;

    return result;
}
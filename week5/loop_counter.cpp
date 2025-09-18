//@author: Zachary Elliott
//@date: 09-17-25
//@purpose: Week 5 lab 5, create a loop to count 100 times
#include <iostream>
using namespace std;

int main()
{
    // loop counter to start at 0
    int counter = 0;
    int const TEN = 10;
    int const ZERO = 0;

    // set loop max to constant
    // makes it easier to change later if needed
    int const MAX = 100;

    // while loop to count to 100 using not equals
    while (counter != MAX)
    {
        // just some flavor output to show progress
        if (counter %TEN == ZERO && counter != ZERO)
        {
            std::cout << "I can count in tens see: " << counter << std::endl;
        }

        counter++;
    }
    
    // spit out results of loop
    std::cout << "The loop is over, it ran " << counter << " times." << std::endl;
    std::cout << "Sadly I can only count to " << MAX << std::endl;
    std::cout << "Much better then the infinite loop you had us do" << std::endl;

    return 0;
}
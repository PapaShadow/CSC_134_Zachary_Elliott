//@author: Zachary Elliott
//@date: 09-15-25
//@purpose: Week 5 lab 2, committing a programming sin by creating an infinite loop
#include <iostream>

int main()
{
    //create count variable
    int count = 0;

    //infinite loop
    //no counter
     while (count <= 1)
     {
        std::cout << "This will never end." << std::endl;
     }

    return 0;
}
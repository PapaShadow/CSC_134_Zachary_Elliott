//@author: Zachary Elliott
//@date: 11-19-25
//@purpose: Week 14 lab 4 function call to loop depending on loop count variable

#include <iostream>
#include <string>
using namespace std;

void loop(int);

int main()
{
    int loopCount = 100;

    loop(loopCount);

    std::cout << "Completed Loop Function";

    return 0;
}

void loop(int counter)
{
    for(int i = 0; i < counter; i++)
    {
        std::cout << i << std::endl;
    }
}
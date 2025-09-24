//@author: Zachary Elliott
//@date: 09-23-25
//@purpose: Week 6 lab 7, accepts an int as input from the user and will
//      display the inputs multiplication table up to 12

#include <iostream>

using namespace std;

int getUserInt();

int doMultiplication(int, int);

int main()
{
    //create max count just for peace of mind
    int const MAX_COUNT = 12;

    
    int userValue = getUserInt();
    int multipleResult = 0;

    std::cout << "Your Number | Multiple | Result " << std::endl;
    std::cout << "--------------------------------" << std::endl;

    // for loop that will iterate 100 times starting at 0
    for(int i = 0; i <= MAX_COUNT; i++)
    {

        std::cout << userValue << "       " << i << "       " 
            << doMultiplication(userValue, i) << std::endl;
    }

    return 0;
}

int getUserInt()
{
   int userInt = 0;

   std::cout << "Please enter a whole number :" ;
   std::cin >> userInt;

   return userInt;
}

int doMultiplication(int userValue, int index)
{
    return userValue * index;
}
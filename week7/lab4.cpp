//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 4, Write a program that prints a chessboard pattern of asterisks and spaces using nested for-loops.

#include <iostream>
using namespace std;

//function prototype
int getUserInput();

int main()
{
    //constant for some things
   int const START = 1;
   int const ZERO = 0;
   int const EVEN = 2;

   //initiate user input and set it to a function
   int rowCount = getUserInput();
   
   //outer loop for line count
   for (int a = START; a <= rowCount; a++ )
   {
      for(int b = START; b <= rowCount; b++)
      {
        //use if statement to test if current iteration is even or odd
        //if even we print *
        //if not we use a space to "skip"
        if ((a+b) % EVEN == ZERO)
        {
            std::cout << "*";
        }
        else
        {
            std::cout << " ";
        }
      }
      //once we loop internally however many times and we jump out we make a new line
      //after new line we add 1 to "a" and go again
      std::cout << std::endl;
   }
   return ZERO;
}

// simple function to get user input to count rows
int getUserInput()
{
    int userCount = 0;

    std::cout << "Please enter the number of rows: ";
    std::cin >> userCount;

    return userCount;
}
//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 3, a program that prints a square pattern of asterisks using nested for-loops. 
//The side length of the square should be specified by the user

#include <iostream>
using namespace std;

int getUserInput();


int main()
{
    // max and min values as constants
   int const START = 1;

   int rowCount = getUserInput();

   // outer loop to track multiplying number
   for (int a = START; a <= rowCount; a++ )
   {
    // inner loop gets us the second multiplying number
      for(int b = START; b <= rowCount; b++)
      {
        std::cout << "*";
      }
      // once we loop internally 10 times and we jump out we make a new line
      // after new line we add 1 to a and go again
      std::cout << std::endl;
   }

   return 0;
}

int getUserInput()
{
    int userCount = 0;

    std::cout << "Please enter the number of rows: ";
    std::cin >> userCount;

    return userCount;
}
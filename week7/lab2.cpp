//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 2, Write a program that prints a right triangle of stars using nested-for loops. 
//  The number of rows should be specified by the user.


#include <iostream>
using namespace std;

int getUserInput();

int main()
{
    // constant for 1
   int const START = 1;
   int rowCount = getUserInput();
   
   // outer loop for line count
   for (int a = START; a <= rowCount; a++ )
   {

    // setting b <= a lets us control how many * are printed
    // so if a is 1 then in the inner loop we get one *
    // if it is 2 then 2 * etc
      for(int b = START; b <= a; b++)
      {
        
        std::cout << "*";
      }
      // once we loop internally however many times and we jump out we make a new line
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
//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 1, nested for loop to print the multiplication table 1-10

#include <iostream>
using namespace std;

int main()
{
    // max and min values as constants
   int const MAX = 10;
   int const START = 1;
   
   // outer loop to track multiplying number
   for (int a = START; a <= MAX; a++ )
   {
    // inner loop gets us the second multiplying number
      for(int b = START; b <= MAX; b++)
      {
        // this will multiply b*a then tab over
        // this happens until b is = 10 then we jump out and restart outer loop
        std::cout << (b * a) << "\t";
      }
      // once we loop internally 10 times and we jump out we make a new line
      // after new line we add 1 to a and go again
      std::cout << std::endl;
   }

   
   
   return 0;
}
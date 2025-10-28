/*
continue using what you have learned about arrays and write a C++ program to initialize 
a 1-D array with 5 integer values and sum those values and print the total to the console.
*/

//@author: Zachary Elliott
//@date: 10-27-25
//@purpose: Week 11 lab 1 part 2, program will sum 5 int values in an array and print to console

#include <iostream>
//#include <cctype>
//#include <sstream>
#include <fstream>
//#include <iomanip>

using namespace std;

void outPutResult(int);

int main()
{
    //array size constant
    int const SIZE = 5;

    int total = 0;

    double integerArray[SIZE] {1, 2, 3, 4, 5};

    //array for loop to go through the array and add up the total
    for (double grade : integerArray)
    {
        total += grade;
    }

    //output results
    outPutResult(total);

    return 0;
}

//method to spit out result to keep main clean
void outPutResult(int total)
{
    std::cout << "The total for the array is: " << total << std::endl;
}

//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 5, a program that prints a square pattern of asterisks using nested for-loops. 
//The side length of the square should be specified by the user

#include <iostream>
#include <iomanip>
using namespace std;

//saving these for future reference
//growing bored of typing std::cout over and over
//std::ostream& outStart = std::cout;
//this doesnt work the same for std::endl
//more research is needed
//std::ostream& endl = std::endl;

int main()
{  
    double const INCREASE = 1.06;
    int const START = 1;
    //double startingCost = 250000.00;
    int const FINAL_YEAR = 5;
    double finalCost = 0;
    double newCost = 250000.00;
    string lines = "------------------------";

    std::cout << "Year\t" << "New Price" << std::endl;
    std::cout << lines << std::endl;

    for(int i = START; i <= FINAL_YEAR; i++)
    {
        newCost *= INCREASE;

        std::cout << i << "\t" << fixed << setprecision(2) << newCost << std::endl;

        if(newCost > finalCost)
        {
            finalCost = newCost;
        }
    }
    std::cout << lines << std::endl;
    std::cout << "Final Cost by year " << FINAL_YEAR << ": " << finalCost << std::endl;

   return 0;
}
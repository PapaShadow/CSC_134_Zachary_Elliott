//@author: Zachary Elliott
//@date: 09-15-25
//@purpose: Week 5 lab 3, determine grade based on user entry

#include <iostream>
using namespace std;

#include <cmath> // for average calculation

// prototype
double calcAverage(double grades[], int size);

int main()
{
    // make variables and initialize
    double average = 0.0;
    const int SIZE = 10; // hoard code size, Can always use this later to make array more dynamic
    double gradeArray[SIZE]; // define array

    // for loop to get user grades
   for (int i = 0; i < 10; i++)
   {
        // add +1 to i so it reads as grade 1, grade 2, etc
        // sticks user input into the array index that matches i
        std::cout << "Please enter grade " << (i+1) << ":";
        std::cin >> gradeArray[i];
   }

    average = calcAverage(gradeArray, SIZE);

    std::cout << "The average of the grades is: " << average << std::endl;
    
    return 0;
}

double calcAverage(double grades[], int size)
{
    double sum = 0.0;

    // loop through array and add all values together
    // stores values into sum while adding it each time
    for (int i = 0; i < size; i++)
    {
        sum += grades[i];
    }
    // returns sum divided by size as a double
    // have to cast size as a double to make sure it is a double on ouput
    return sum / static_cast<double>(size);
}


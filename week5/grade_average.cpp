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
    double average = 0.0;
    const int SIZE = 10;
    double gradeArray[SIZE];

   for (int i = 1; i <= 10; i++)
   {
        std::cout << "Please enter grade " << i << ":";
        std::cin >> gradeArray[i];
   }

    average = calcAverage(gradeArray, 10);

    std::cout << "The average of the grades is: " << average << std::endl;
    
    return 0;
}

double calcAverage(double grades[], int size)
{
    double sum = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum += grades[i];
    }
    return sum / static_cast<double>(size);
}


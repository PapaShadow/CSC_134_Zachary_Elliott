//@author: Zachary Elliott
//@date: 11-19-25
//@purpose: Week 14 lab 3, function call to average three values

#include <iostream>
#include <string>
using namespace std;

double averageValues(int, int, int);
void displayResult(double, int, int, int);


int main()
{
    int value1= 2;
    int value2 = 4;
    int value3 = 5;
    
    double average = averageValues(value1, value2, value3);

    displayResult(average, value1, value2, value3);

    return 0;
}

double averageValues(int a, int b, int c)
{
    double average = static_cast<double>(a+b+c)/3;

    return average;

}

void displayResult(double average, int a, int b, int c)
{
    std::cout << "The Average of " << a << ", "  << b << ", " << "and " << c << " is: " << average;
}
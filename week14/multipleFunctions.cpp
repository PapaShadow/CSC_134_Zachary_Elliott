//@author: Zachary Elliott
//@date: 11-19-25
//@purpose: Week 14 lab 4 Multiple Forms, function call that will call other functions

#include <iostream>
#include <string>
using namespace std;

int squareNumber(int);
double averageValues(int, int, int);
void multipleFuncs();
void displayAvg(double, int, int, int);
void displaySqrd(int, int);

int main()
{
    multipleFuncs();

    return 0;
}
void multipleFuncs()
{
    int value1= 2;
    int value2 = 4;
    int value3 = 5;

    double average = averageValues(value1, value2, value3);
    displayAvg(average, value1, value2, value3);

    int numSqrd = squareNumber(value1);
    displaySqrd(value1, numSqrd);


}

void displayAvg(double average, int a, int b, int c)
{
    std::cout << "The Average of " << a << ", "  << b << ", " << "and " << c << " is: " << average << std::endl;
}

void displaySqrd(int initial, int result)
{
    std::cout << "The result of " << initial << " squared is: " << result;
}

int squareNumber(int num)
{
    double squared = (num * num);

    return squared;
}

double averageValues(int a, int b, int c)
{
    double average = static_cast<double>(a+b+c)/3;

    return average;

}

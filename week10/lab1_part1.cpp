/*
Using what you learned during the lecture with arrays, write a C++ 
program that has an array of 10 integer elements. You should create an 
array variable that takes the integer value of 10 and initializes the 
array to this value. For example, if array is supposed to be 10 grades, 
then the array should be initialized with 10 array elements. 
Next, for each grade, you should prompt the user to enter the grade 
value as an integer. When all grades have been entered, then you should 
calculate the average for the grades and print the result to the console
*/

//@author: Zachary Elliott
//@date: 10-27-25
//@purpose: Week 11 lab 1 part 1, program will request an array size from user then prompt user for grades
//@     program will store values in array and calc avg

#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

double calcAverage(double, int);
int getUserValue(int);
void outPutResult(double, int);

int main()
{
    //array size constant
    int const SIZE = 10;

    double gradeArray[SIZE];

    //variable to hold total and avg later
    double total = 0;
    double average = 0;

    for (int i = 0; i < SIZE; i++)
    {
        //takes array index at i and assigns function result to it   
        gradeArray[i] = getUserValue(i);
    }

    //array for loop to go through the array and add up the total
    for (double grade : gradeArray)
    {
        total += grade;
    }

    //assign avg the result of the function
    average = calcAverage(total, SIZE);

    //output results
    outPutResult(average, SIZE);

    return 0;
}

//function to get user input
int getUserValue(int i)
{
    double userValue = 0.0;

    std::cout << "Enter Grade " << i+1 << ": ";
    std::cin >> userValue;

    return userValue;
}

//method to spit out result to keep main clean
void outPutResult(double average, int SIZE)
{
    std::cout << "The average for these " << SIZE << " grades is: " 
        << std::fixed << std::setprecision(2) << average << std::endl;
}

//function to calc the array avg after total is calculated
double calcAverage(double total, int SIZE)
{
    return total/SIZE;
}
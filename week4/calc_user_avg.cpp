//@author: Zachary Elliott
//@date: 09-10-25
//@purpose: Week 4 lab 1, prompmts user for input then calculates the average

#include <iostream> //calls the iostream library for input and output operations
#include <cmath> //calls the cmath library for mathematical functions
#include <iomanip>
using namespace std; //calls the standard namespace

double calc_avg(double, double, double);

int main()
{
    //declares the variables
    double grade1 = 0.00,
           grade2 = 0.00, 
           grade3 = 0.00,
           avg = 0.00;

    //asks the user for input
    std::cout << "Please Enter Grade 1: ";
        std::cin >> grade1;
   std::cout << "Please Enter Grade 2: "; 
        std::cin >> grade2 ;
    std::cout << "Please Enter Grade 3: ";
        std::cin >> grade3;
    
    //call funtion to calc avg    
    //avg = calc_avg(grade1, grade2, grade3);

    std::cout << " The average of the three grades is: " << fixed << setprecision(2) << calc_avg(grade1, grade2, grade3) << endl;
    
    return 0;
}

//function to calculate the average
double calc_avg(double grade1, double grade2, double grade3)
{
    return (grade1 + grade2 + grade3) / 3;
}
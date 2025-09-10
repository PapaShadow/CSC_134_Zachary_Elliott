//@author: Zachary Elliott
//@date: 09-10-25
//@purpose: Week 4 lab 2, prompmts user for grades then determines letter grade

#include <iostream> //calls the iostream library for input and output operations
#include <cmath> //calls the cmath library for mathematical functions
#include <iomanip>
using namespace std; //calls the standard namespace

double calc_avg(double, double, double);
char determine_grade(double);
string print_message(char);

int main()
{
    //declares the variables
    double grade1 = 0.00,
           grade2 = 0.00, 
           grade3 = 0.00,
           avg = 0.00; // made this for later use
    
    //char letter_grade;

    //asks the user for input
    std::cout << "Please Enter Grade 1: ";
        std::cin >> grade1;
   std::cout << "Please Enter Grade 2: "; 
        std::cin >> grade2 ;
    std::cout << "Please Enter Grade 3: ";
        std::cin >> grade3;
    
    //call funtion to calc avg 
    //avg = calc_avg(grade1, grade2, grade3);
    
    //later use
    //letter_grade = determine_grade(calc_avg(grade1, grade2, grade3));

    //print out results while calling functions withing print statement.
    std::cout << " The average of the three grades is: " << fixed << setprecision(2) << calc_avg(grade1, grade2, grade3) << endl;
    std::cout << " Your letter grade is: " << determine_grade(calc_avg(grade1, grade2, grade3)) << endl;


    return 0;
}

//function to calculate the average
double calc_avg(double grade1, double grade2, double grade3)
{
    return (grade1 + grade2 + grade3) / 3;
}

//function to determine letter grade based on average
char determine_grade(double avg)
{
    if (avg >= 90)
    {
        return 'A';
    }
    else if (avg >= 80)
    {
        return 'B';
    }
    else if (avg >= 70)
    {
        return 'C';
    }
    else if (avg >= 60)
    {
        return 'D';
    }
    else 
    {
        return 'F';
    }
}

/* saving this for later testing(breaking)
string print_message(char grade)
{
    string message = "Your letter grade is: " + grade;
    return message;
}
*/
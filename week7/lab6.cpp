//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 6, a program that asks the user to enter the amount that they have
//  budgeted for a month. A loop should then prompt the user to enter each of their expenses
//  for the month and keep a running total.
//  When the loop finishes, the program should display the amount that the user is over or under budget.

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double getBudget();
int getBillCount();
double getExpense(int);
bool checkSpending(double, double);
bool checkIfOnBudget(double, double);

int main()
{
    //variable declarations
    int const START = 1;
    double budget = getBudget();
    int billCount = getBillCount();
    double totalExpenses = 0.0;
    double overBudget = 0.0;
    double underBudget = 0.0;

    //very simple for loop to grab and add up expenses
    for (int i = START; i <= billCount; i++)
    {
        double billCost = getExpense(i);
        totalExpenses += billCost;
    }

    //final validation checks and outputs
    if (checkIfOnBudget(budget, totalExpenses))
    {
        std::cout << "Your expenses are the same as your budget." << std::endl;
        std::cout << "Consider finding places to cut back to increase savings." << std::endl;
    }
    else if (checkSpending(budget, totalExpenses) == false)
    {
        //calc for over budget
        //didnt have this tucked in here at first
        //this led to me finding a bug so now we tuck it here to force an error
        overBudget = totalExpenses - budget;
        std::cout << "You are over budget by: $" << fixed << setprecision(2) << overBudget << std::endl;
    }
    else
    {
        //same thing as overBudget but for underBudget
        underBudget = budget - totalExpenses;
        std::cout << "You are under budget by: $" << fixed << setprecision(2) << underBudget << std::endl;
    }

    return 0;
}

bool checkIfOnBudget(double budget, double totalExpenses)
{
    bool isValid = false;
    if (totalExpenses == budget)
    {
        isValid = true;    
    }
    else
    {
        isValid = false;
    }
    return isValid;
}

bool checkSpending(double budget, double totalExpenses)
{
    bool isValid = true;

    if (totalExpenses > budget)
    {
        isValid = false;    
    }
    else if (totalExpenses < budget)
    {
        isValid = true;
    }
    
    return isValid;
}

double getBudget()
{
    double totalBudget = 0.0;
    std::cout << "Enter your budget price: "; 
    std::cin >> totalBudget;
    return totalBudget;
}

int getBillCount()
{
    int count = 0;

    std::cout << "Enter the number of bills you have: ";
    std::cin >> count;
    return count;
}

double getExpense(int i)
{
    double expense = 0.0;

    std::cout << "Enter the cost of bill " << i << ": ";
    std::cin >> expense;

    return expense;
}
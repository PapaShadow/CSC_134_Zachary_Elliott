//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 6, a program that asks the user to enter the amount that they have
//  budgeted for a month. A loop should then prompt the user to enter each of their expenses
//  for the month and keep a running total.
//  When the loop finishes, the program should display the amount that the user is over or under budget.

#include <iostream>
#include <iomanip>
using namespace std;

double getBudget();
int getBillCount();
double getExpense(int);

int main()
{
    int const START = 1;
    double budget = getBudget();
    int billCount = getBillCount();
    double totalExpenses = 0.0;

    for (int i = START; i <= billCount; i++)
    {
        double billCost = getExpense(i);
        totalExpenses += billCost;
    }

    return 0;
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
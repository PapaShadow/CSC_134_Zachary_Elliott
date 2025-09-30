//@author: Zachary Elliott
//@date: 09-29-25
//@purpose: Week 7 lab 6, a program that tells the user if they are over or under budget
// went a little crazy with it because my wife said i didnt do enough for a budget calculator

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

//function definitions

//this is to check if we are exactly on budget
//this is still bad
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

//bool to check if we are over or under budget
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

//function to get the budget from the user
double getBudget()
{
    double totalBudget = 0.0;
    std::cout << "Enter your budget price: "; 
    std::cin >> totalBudget;
    return totalBudget;
}

//gets number of bills
//this is used for the for loop
int getBillCount()
{
    int count = 0;

    std::cout << "Enter the number of bills you have: ";
    std::cin >> count;
    return count;
}

//gets the expense of whatever bill, based on loop index
double getExpense(int i)
{
    double expense = 0.0;

    std::cout << "Enter the cost of bill " << i << ": ";
    std::cin >> expense;

    return expense;
}
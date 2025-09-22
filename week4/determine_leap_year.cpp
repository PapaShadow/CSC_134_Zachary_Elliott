//@author: Zachary Elliott
//@date: 09-12-25
//@purpose: Week 4 lab 5, prompmts user for a year then determines if it's a leap year
// keeping this one super simple, because i am very tired and have a headache
// also the dude im working with smells like runners feet and wet dog armpits


#include <iostream>
using namespace std;    

bool isDivByFour(int);
bool isDivByFourHundred(int);
bool notDivByHundred(int);

int main()
{
    // variable to hold user input
    // set to 0000 so if user enters nothing it will be invalid
    int userYear = 0000;

    // print statement with user prompt
    cout << "Enter a 4 digit year, for example 2024: ";
    cin >> userYear;
/*
    // if series to check if what the user entered is a leap year
    // if divisible by 4 then it is a leap year
    if (userYear % 4 == 0)
    {
        // if divisible by 100 then it is NOT a leap year
        if (userYear % 100 == 0)
        {
            // But if it is a multiple of 400 then it IS a leap year
            if (userYear % 400 == 0)
            {
                cout << userYear << " is a leap year." << endl;
            }
            else
            {
                cout << userYear << " is not a leap year." << endl;
            }
        }
    }
    else
    {
        cout << userYear << " is not a leap year." << endl;
    }
*/

    if(isDivByFourHundred(userYear))
    {
        cout << userYear << " is a leap year." << endl;
    }
    else if (isDivByFour(userYear) && notDivByHundred(userYear))
    {
        cout << userYear << " is a leap year." << endl;
    }
    else
    {
        cout << userYear << " is not a leap year." << endl;
    }


    return 0;
}

bool isDivByFour(int year)
{
    bool isValid = false;
    int const FOUR = 4;

    if (year % FOUR == 0)
    {
        isValid = true;
    }
    else
    {
        isValid = false;
    }

    return isValid;
}

bool isDivByFourHundred(int year)
{
    bool isValid = false;
    int const FOUR_HUNDRED = 400;

    if (year % FOUR_HUNDRED == 0)
    {
        isValid = true;
    }
    else
    {
        isValid = false;
    }

    return isValid;
}

bool notDivByHundred(int year)
{
    bool isValid = false;
    int const HUNDRED = 100;

    if (year % HUNDRED == 0)
    {
        isValid = false;
    }
    else
    {
        isValid = true;
    }

    return isValid;
}
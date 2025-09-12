//@author: Zachary Elliott
//@date: 09-12-25
//@purpose: Week 4 lab 3, prompmts user for a number then uses modulo to determine if odd or even

#include <iostream> //calls the iostream library for input and output operations

using namespace std; //calls the standard namespace

//function prototypes
int checkNumber(int);
int promptUser();

int main()
{
    //variable declaration
    int userInput = 0;

    // call function and assign to variable
    userInput = promptUser();

    //call function for check
    checkNumber(userInput);

    return 0;
}

int checkNumber(int userInput)
{
    // making a constant for safety
    // 0 is always even
    const int EVEN_NUMBER = 0;

    //keeping this just incase i need it.
    const int ODD_NUMBER = 1;

    //just a modulos check
    if (userInput % 2 == EVEN_NUMBER)
    {
        // if even shoot out this message
        cout << userInput << " is an even number." << endl;
    }
    else
    {
        // if odd shoot out this message
        // shouldnt need to check since there are only two options
        cout << userInput <<" is an odd number." << endl;
    }
    return 0;
}

int promptUser()
{
    // variable to store user input
    int userInput = 0;

    // prompt for user input
    cout << "Please enter a number: " << endl;
    cin >> userInput; // store user input in variable

    return userInput;
}
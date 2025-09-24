//@author: Zachary Elliott
//@date: 09-24-25
//@purpose: Week 6 lab 7, accepts an int as input from the user and will
//      display the inputs multiplication table up to 12

#include <iostream>
#include<random>
using namespace std;

// function prototypes
int genRandomNumber(int, int);
int getUserInput();

int main()
{
    // variables for dice upper and lower limits
    int const MIN_NUM = 1;
    int const MAX_NUM = 6;

    // variable to call func to get user value
    int rollCount = getUserInput();

    // for loop that will iterate the number of times the user wants
    // min_num can be used again
    for (int i = MIN_NUM; i <= rollCount; i++)
    {
        // variable to call and hold randomly generated number
        int diceValue = genRandomNumber(MIN_NUM, MAX_NUM);

        // output to keep track of current roll
        std::cout << "Roll " << i << " is " << diceValue << std::endl;
    }


    return 0;
}

int genRandomNumber(int MIN_NUM, int MAX_NUM)
{
    //the object that generates the random bits
    random_device engine;

    // the object that will take the random
    // object variable is defined here but not initialized yet
    uniform_int_distribution<int> diceNumber(MIN_NUM, MAX_NUM);

    return diceNumber(engine);
}

int getUserInput()
{
    int userInput = 0;

    std::cout << "How many times would you like to roll the dice? ";
    std::cin >> userInput;

    return userInput;
}
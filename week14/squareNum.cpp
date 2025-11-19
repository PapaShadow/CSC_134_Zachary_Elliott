//@author: Zachary Elliott
//@date: 11-17-25
//@purpose: Week 14 lab 2, function call to square a number

#include <iostream>
#include <string>
using namespace std;

int squareNumber(int);
int userInput();
void displayResult(int, int);

int main()
{
    int userNum = userInput();

    int userSquared = squareNumber(userNum);

    displayResult(userNum, userSquared);

    return 0;
}

void displayResult(int initial, int result)
{
    std::cout << "The result of " << initial << " squared is: " << result;
}

int squareNumber(int num)
{
    int squared = num * num;

    return squared;
}

int userInput()
{
    int num = 0;

    std::cout << "Input a Digit: ";
    std::cin >> num;

    return num;
}
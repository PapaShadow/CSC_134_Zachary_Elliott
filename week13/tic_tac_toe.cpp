//@author: Zachary Elliott
//@date: 11-10-25
//@purpose: Week 13 tic-tac-toe, this will create a tic tac toe game, users can enter enter into a position


//user selects X or O, use char variables with method to ask which one
//compare rows and columns at end to determine if a winner is made

#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
#include <fstream>
#include <iomanip>

int main()
{
    int const COLUMN = 3;
    int const ROW = 3;
    char x  = 'X';
    char o = 'O';

    char gameBoard[ROW][COLUMN];

    return 0;
}

char chooseToken(char x, char o)
{
    char userChoice;
    std::cout << "Choose X or O(oh): ";
    std::cin >> userChoice;
    while (checkToken(userChoice) != true)
    {
        std::cout << "Choose X or O(oh): ";
        std::cin >> userChoice;
    }
    static_cast<char>(std::toupper(userChoice));

    return userChoice;
}

bool checkToken(char token)
{
    bool valid = false;
    if (token == 'X' || token == 'O')
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
    return valid;
}
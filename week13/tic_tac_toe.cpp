//@author: Zachary Elliott
//@date: 11-10-25
//@purpose: Week 13 tic-tac-toe, this will create a tic tac toe game, users can enter enter into a position


//user selects X or O, use char variables with method to ask which one
//compare rows and columns at end to determine if a winner is made

#include <iostream>
//#include <cctype>
//#include <sstream>
//#include <fstream>
//#include <iomanip>
#include <string>

char chooseToken(char, char);
bool checkToken(char);
void printBoard(const char board[3][3]);
char choosePosition(std::string);
bool checkBoard(const char board[3][3]);
char playerTwoToken(char, char, char);

int main()
{
    int const COLUMN = 3;
    int const ROW = 3;
    char x  = 'X';
    char o = 'O';
    char playerOne;
    char playerTwo;
    char activePlayer;
    int spaces = 9;
    int moves = 0;
    std::string p1 = "Player 1";
    std::string p2 = "Player 2";
    std::string currentPlayer;


    //initialize gamebaord array
    char gameBoard[ROW][COLUMN];

    //assign values to various positions
    gameBoard[0][0] = '1';
    gameBoard[0][1] = '2';
    gameBoard[0][2] = '3';
    gameBoard[1][0] = '4';
    gameBoard[1][1] = '5';
    gameBoard[1][2] = '6';
    gameBoard[2][0] = '7';
    gameBoard[2][1] = '8';
    gameBoard[2][2] = '9';

    //passes gameboard into function to print the array with formatting
    printBoard(gameBoard);
    playerOne = chooseToken(x, o);
    
    playerTwo = playerTwoToken(playerOne, x, o);

    //assign player 1 at the start
    activePlayer = playerOne;
    currentPlayer = p1;

    //while loop to keep looping until a win is acheived
    while(!checkBoard(gameBoard) && moves < spaces)
    {
        char positionChoice = choosePosition(currentPlayer);
        bool occupied = false;
        bool validLocation = false;

        //loops through array and locates matching 1-9 and replaces with current players token
        for (int rw = 0; rw < ROW; rw++)
        {
            for (int cl = 0; cl < COLUMN; cl++)
            {
                if (gameBoard[rw][cl] == positionChoice)
                {
                    //if we find the location we flag true
                    validLocation = true;

                    //test to see if the space is occupied or not
                    if(gameBoard[rw][cl] == x || gameBoard[rw][cl] == o)
                    {
                        occupied = true;
                        
                    }
                    else
                    {
                        //if not occupied we can replace with the related symbol
                        gameBoard[rw][cl] = activePlayer;
                        occupied = false;
                    }
                }
            }
        }
        //use the bool flags to determine if the "move is legal"
        if (occupied == true || !validLocation)
        {
            //use continue to restart the loop
            std::cout << "Space occupid or not valid, try again." << std::endl;
            continue;
        }
        else
        {
            //if life is good and everything is valid
            //swtich players
            if (activePlayer == playerOne)
            {
                currentPlayer = p2;
                activePlayer = playerTwo;
            }
            else
            {
                currentPlayer = p1;
                activePlayer = playerOne;
            }
            
            //display the updated game board and add to the counter
            printBoard(gameBoard);
            moves ++;
        }
    }

    return 0;
}

char playerTwoToken(char token, char x, char o)
{
    char playerTwo;

    if(token == x)
    {
        playerTwo = o;
    }
    else
    {
        playerTwo = x;
    }
    return playerTwo;
}

bool checkBoard(const char board[3][3])
{
    int const ROW = 3;
    int const COLUMN = 3;
    bool winAchieved = false;

    //check the rows for matches
    for (int r = 0; r < ROW; r++)
    {
        if ((board[r][0] == board[r][1]) && 
            (board[r][0] == board[r][2]) &&
            (board[r][0] == 'X' || board[r][0] == 'O'))
            {
                winAchieved = true;
            }
    }

    //check columns for matches
    for (int c = 0; c < COLUMN; c++)
    {
        if ((board[0][c] == board[1][c]) && 
            (board[0][c] == board[2][c]) &&
            (board[0][c] == 'X' || board[0][c] == 'O'))
            {
                winAchieved = true;
            }
    }
        
        //Diagonal test
    if ((board[0][0] == board[1][1]) && 
        (board[1][1] == board[2][2]) &&
        (board[0][0] == 'X' || board[0][0] == 'O'))
        {
            winAchieved = true;
        }
        

    if  ((board[0][2] == board[1][1]) && 
        (board[1][1] == board[2][0]) &&
        (board[0][2] == 'X' || board[0][2] == 'O'))
        {
            winAchieved = true;
        }
        

    return winAchieved;
}


char choosePosition(std::string player)
{
    int position;

    std::cout << player << " please choose a position 1-9: ";
    std::cin >> position;

    return static_cast<char>('0' + position);
}

char chooseToken(char x, char o)
{
    char userChoice;
    std::cout << "Player one choose X or O(oh): ";
    std::cin >> userChoice;

    //cast user choice to upper for simple validation
    static_cast<char>(std::toupper(userChoice));

    while (checkToken(userChoice))
    {
        std::cout << "Player one choose X or O(oh): ";
        std::cin >> userChoice;
    }

    return static_cast<char>(std::toupper(userChoice));
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

void printBoard(const char board[3][3])
{
    //print format for the table
    for (int r = 0; r < 3; ++r)
    {
        std::cout << " ";

        for (int c = 0; c < 3; ++c)
        {
            std::cout << board[r][c];
            if (c < 2) 
            {
                std::cout << " | ";
            }
        }

        std::cout << '\n';

        if (r < 2) 
        {
            std::cout << "-----------\n";
        }
    }
}
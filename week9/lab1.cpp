//@author: Zachary Elliott
//@date: 10-22-25
//@purpose: Week 9 lab 1, program will ask a user for number of days and loops depending on input
//      each input will be recorded in a text file

#include <iostream>
#include <fstream>
using namespace std;

int getUserInput();
double getUserValue(int);

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week9";
    string fileName = "\\week9_lab1.txt";

    int loopCount = getUserInput();
    double userInput = 0.0;

    ofstream inputFile(filePath + fileName);

    for(int i = 1; i <= loopCount; i++)
    {
        userInput = getUserValue(i);
        
        // wrap it all in an if else to make sure i didnt end up with an additional blank line
        if (i < loopCount)
        {
            // if i is less than the loopCount then we get a new line to record for the next entry 
            inputFile << userInput << "\n";
        }
        else if (i == loopCount)
        {
            // if we are at the final loop no new line entry
            inputFile << userInput;
        }
        
        // this was used to write everything to console so i could see how it was writing
        //std::cout << "recording " << userInput << " for day " << i << "." << std::endl;
    }
    //close file to free up memory
    inputFile.close();
    
    //std::cout << "File is closed and done being written to." << std::endl;

    return 0;
}

int getUserInput()
{
    int userCount = 0;

    std::cout << "Enter the number of days you would like to record information for: ";
    std::cin >> userCount;

    return userCount;
}

double getUserValue(int i)
{
    double userValue = 0.0;

    std::cout << "Enter the value for day " << i << ": ";
    std::cin >> userValue;

    return userValue;
}
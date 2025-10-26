//@author: Zachary Elliott
//@date: 10-22-25
//@purpose: Week 9 lab 2, program will ask a user for number of days and loops depending on input
//      each input will be recorded in a text file and the total will be added up and spit out.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;

int getUserInput();
double getUserValue(int);

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week9";
    string fileName = "\\week9_lab2.txt";

    int loopCount = getUserInput();
    double userInput = 0.0;
    double finalTotal = 0.0;

    ofstream inputFile(filePath + fileName);

    inputFile << "Sales for the last " << loopCount << " day(s)" << std::endl;
    inputFile << "==============================================" << std::endl;
    inputFile << fixed << setprecision(2);

    for(int i = 1; i <= loopCount; i++)
    {
        userInput = getUserValue(i);
        finalTotal += userInput;
        
        inputFile << "Day "<< i << ": $" << userInput << "\n";

        // this was used to write everything to console so i could see how it was writing
        //std::cout << "recording " << userInput << " for day " << i << "." << std::endl;
    }
    inputFile << "==============================================" << std::endl;
    inputFile << "Total: $" << finalTotal << std::endl;
    inputFile << "==============================================";
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
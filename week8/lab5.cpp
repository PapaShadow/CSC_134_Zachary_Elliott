/*
Design and write a program that prompts the user to enter the name of three friends. 
You should capture the names of each friend and write them to a new file named lab5.txt on separate lines of 
the file using the ofstream object. Make sure you use the close() method to ensure the file object handle is 
properly closed.

*/
//@author: Zachary Elliott
//@date: 10-01-25
//@purpose: Week 8 lab 5, request user to type friends names, then writes user input into file

#include <iostream>
#include <fstream>
using namespace std;

string getUserInput();

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week8";
    string fileName = "\\lab5.txt";

    int const LOOP_COUNT = 3;
    
    //open file
    ofstream inputFile(filePath + fileName);

    for(int i = 0; i < LOOP_COUNT; i++)
    {
        //variable and funtion to get a name
        string userVariable = getUserInput();

        //calls file object to write current loop index  
        inputFile << userVariable << "\n";
    }
    //close file to free up memory
    inputFile.close();
    
    std::cout << "File is closed and done being written to." << std::endl;

    return 0;                        
}

// simple function to get user input to count rows
string getUserInput()
{
    string userCount = "";

    std::cout << "Type in your friends name: ";
    std::cin >> userCount;

    return userCount;
}
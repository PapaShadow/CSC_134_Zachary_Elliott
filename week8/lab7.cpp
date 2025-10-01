/*
    Using the attached numbers.txt file, Design and write a C++ 
    program that reads the data from the file and sums the values and prints the results to the console
*/
//@author: Zachary Elliott
//@date: 10-01-25
//@purpose: Week 8 lab 7, reads friends.txt and prints contents to console

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week8";
    string fileName = "\\numbers.txt";

    int fileInfo;
    int fileSum = 0;
    
    //open file and write some stuff at the beginning.
    ifstream inputFile(filePath + fileName);

    //while loop setup to go through the file
    //since i dont feel like counting, if we use >> it acts as a boolean property
    //it returns t/f depening if the variable, fileInfo, has something in it or not
    //if not it leaves the loop and we close the file
    while(inputFile >> fileInfo )
    {
        std::cout << fileInfo << std::endl;
        fileSum += fileInfo;
    }
    //close file to free up memory
    inputFile.close();
    
    std::cout << fileSum << std::endl;

    return 0;                        
}
/*
 Design and write a program that accepts an integer input from the user and 
 use the ofstream object to create a new file named lab4.txt. 
 Take the integer value entered by the user and implement a for-loop to loop over
  n-number of times, where n is the value entered by the user and write each iteration of the 
  loop to the file. For example, if the user enters 4, then you should write 0 1 2 3 to the file with 
  each value on a new line without any spaces between each line. Make sure you use the close() method to
   close the file and then print "Done Writing...." to the console when the program is complete.
*/
//@author: Zachary Elliott
//@date: 10-01-25
//@purpose: Week 8 lab 4, request loop count, then writes current loop index into a file

#include <iostream>
#include <fstream>
using namespace std;

int getUserInput();

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week8";
    string fileName = "\\lab4.txt";
    
    int userVariable = getUserInput();
    //open file
    ofstream input_file(filePath + fileName);

    for(int i = 0; i < userVariable; i++)
    {
      //calls file object to write current loop index  
      input_file << i << "\n";
    }
    //close file to free up memory
    input_file.close();
    
    std::cout << "File is closed and done being written to." << std::endl;

    return 0;                        
}

// simple function to get user input to count rows
int getUserInput()
{
    int userCount = 0;

    std::cout << "Enter the number of loops you would like: ";
    std::cin >> userCount;

    return userCount;
}
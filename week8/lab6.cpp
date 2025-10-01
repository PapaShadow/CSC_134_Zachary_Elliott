//@author: Zachary Elliott
//@date: 10-01-25
//@purpose: Week 8 lab 6, reads friends.txt and prints contents to console

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week8";
    string fileName = "\\friends.txt";

    string fileInfo;
    
    //open file and write some stuff at the beginning.
    ifstream input_file(filePath + fileName);

    //while loop setup to go through the file
    //since i dont feel like counting, if we use >> it acts as a boolean property
    //it returns t/f depening if the variable, fileInfo, has something in it or not
    //if not it leaves the loop and we close the file
    while(input_file >> fileInfo )
    {
        std::cout << fileInfo << std::endl;
    }
    //close file to free up memory
    input_file.close();                        

    return 0;                        
}
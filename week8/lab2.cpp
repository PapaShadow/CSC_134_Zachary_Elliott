//@author: Zachary Elliott
//@date: 10-01-25
//@purpose: Week 8 lab 2, using ofstream object to write some semi formatted info into a txt file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week8";
    string fileName = "\\lab2.txt";
    
    //open file and write some stuff at the beginning.
    ofstream inputFile(filePath + fileName);
    inputFile << "*************************************\n";
    inputFile << "\t\t\tShopping Cart\n";
    inputFile << "**************************************\n";
    inputFile << "product code\tqty\t\tprice\n";
    inputFile << "\t789\t\t\t7\t\t$12.00\n\n";
    inputFile << "\t\t\t\t\t\tTotal: $84.00";

    //close file to free up memory
    inputFile.close();                        

    return 0;                        
}
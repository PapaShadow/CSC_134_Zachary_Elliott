/*
 Now, use lab #1 above and remove the \n character from the end
  of each line and review the file for the differences in behavior. You should use a file named lab3.txt.
*/

//@author: Zachary Elliott
//@date: 10-01-25
//@purpose: Week 8 lab 3, taking lab 1 and removing new line characters

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week8";
    string fileName = "\\lab3.txt";

    //setting array size
    //initialize array at same time with values
    int const SIZE = 7;
    string movieArray[SIZE] = {"Bourne Identity", "Star Wars Episode IV", "The Hunger Games", 
                            "Dead Pool", "X-Men First Class","Star Wars Espisode V","Get Out"};
    
    //open file and write some stuff at the beginning.
    ofstream input_file(filePath + fileName);
    input_file << "Movie List";
    input_file << "---------------";

    for(int i = 0; i < SIZE; i++)
    {
        input_file << movieArray[i];
        //this was just to make sure it would behave like i wanted
        //std::cout << movieArray[i] << std::endl;
    }
    //close file to free up memory
    input_file.close();                        

    return 0;                        
}
//@author: Zachary Elliott
//@date: 10-01-25
//@purpose: Week 8 lab 1, using ofstream object to write some info into a text file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week8";
    string fileName = "\\lab1.txt";

    //setting array size
    //initialize array at same time with values
    int const SIZE = 7;
    string movieArray[SIZE] = {"Bourne Identity", "Star Wars Episode IV", "The Hunger Games", 
                            "Dead Pool", "X-Men First Class","Star Wars Espisode V","Get Out"};
    
    //open file and write some stuff at the beginning.
    ofstream inputFile(filePath + fileName);
    inputFile << "Movie List\n";
    inputFile << "---------------\n";

    //range based loop to cycle through the array
    for(string movie : movieArray)
    {
        inputFile << movie << "\n";
        //this was just to make sure it would behave like i wanted
        //std::cout << movieArray[i] << std::endl;
    }
    //close file to free up memory
    inputFile.close();                        

    return 0;                        
}


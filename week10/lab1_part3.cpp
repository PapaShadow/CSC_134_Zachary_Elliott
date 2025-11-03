/*
Using the attached sales.txt file, use what you have learned with arrays and file processing 
to read each sale line-by-line and add each sale to an array. 
After all sales have been added to your array, you should loop over the 
array and sum the sales and print the total to the console
*/

//@author: Zachary Elliott
//@date: 11-03-25
//@purpose: Week 10 lab 1 part 3, reads sales.txt file and adds each sale to an array then sums the array

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;


void displaySalesText(double);

int main()
{
    //variable declarations
    //creating string variable for an easy to use path in all future code
    //this should make life easier for you
    string filePath = "C:\\Users\\shado\\CSC_134_Zachary_Elliott\\week10";
    string fileName = "\\sales.txt";

    double sales;
    vector<double> dailySales;
    double totalSales = 0;
    
    //open file
    ifstream inputFile(filePath + fileName);

   // while loop to read until it returns false that there is nothing left to read
    while(inputFile >> sales )
    {
        dailySales.push_back(sales);
    }
    //close file to free up memory
    inputFile.close();

    for(double saleNumber: dailySales)
    {
        totalSales += saleNumber;
    }

    displaySalesText(totalSales);
                            

    return 0;                        
}

void displaySalesText(double total)
{

    std::cout<< "========================" << std::endl;
    std::cout<< std::fixed << std::setprecision(2) << "Final Sales: $" << total << std::endl;
    std::cout<< "========================" << std::endl;
}
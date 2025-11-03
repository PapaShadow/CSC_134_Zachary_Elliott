/*
 Design and write a C++ program that uses the Luhn algorithm to 
 check the validity of a credit card. Your credit card should be a string value and you 
 should use the following header libraries to assist you in the program: <iostream>, 
 <sstream>, <algorithm> and <string>
*/

#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

//@author: Zachary Elliott
//@date: 11-03-25
//@purpose: Week 10 lab 1 part 3, luhn algorithm

void validCard();
void notValidCard();
bool isValid(int);

int main()
{
    //variables to hold array sums
    int arraySum1 = 0;
    int arraySum2 = 0;
    int arraySum3 = 0;
    //variable constants for array sizes
    int const SIZE1 = 16;
    int const SIZE2 = 15;

    //test cards
    int testCard1[SIZE1] = {4,0,1,2,8,8,8,8,8,8,8,8,1,8,9,1};
    int testCard2[SIZE1] = {5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,4};       
    int testCard3[SIZE2] = {3,4,0,0,0,0,0,0,0,0,0,0,0,0,9}; 

    //reverse used to flip the array 
    std::reverse(std::begin(testCard1), std::end(testCard1));
    std::reverse(std::begin(testCard2), std::end(testCard2));
    std::reverse(std::begin(testCard3), std::end(testCard3));

    //for loops to go through each appropriate array
    for (int i = 0; i < SIZE1; i++)
    {
        //pull out the index value and store it
        int indexValue = testCard1[i];
        //test to see if index is even or odd
        //if its odd, so index 1 we multiply the value
        //this emulates "skipping every other" since odds will be the other
        if(i % 2 == 1)
        {
            indexValue *= 2;

            //test to see if multiplying pushed us over 9 into double digits
            //if it does we just subtract 9
            if(indexValue > 9)
            {
                indexValue -= 9;
            }
        }
        //store the sum into relate arraySum variable
        arraySum1 += indexValue;
    }

    //rinse and repeat
    for (int i = 0; i < SIZE1; i++)
    {
        int indexValue = testCard2[i];
        if(i % 2 == 1)
        {
            indexValue *= 2;

            if(indexValue > 9)
            {
                indexValue -= 9;
            }
        }
        arraySum2 += indexValue;
    }

     for (int i = 0; i < SIZE2; i++)
    {
        int indexValue = testCard3[i];
        if(i % 2 == 1)
        {
            indexValue *= 2;

            if(indexValue > 9)
            {
                indexValue -= 9;
            }
        }
        arraySum3 += indexValue;
    }

    //if else statements that call is valid which runs %10 on the appropriate sum
    //returns the right print statement
    if (isValid(arraySum1))
    {
        validCard();
    }
    else
    {
        notValidCard();
    }

    if (isValid(arraySum2))
    {
        validCard();
    }
    else
    {
        notValidCard();
    }

    if (isValid(arraySum3))
    {
        validCard();
    }
    else
    {
        notValidCard();
    }

    return 0;
} 

bool isValid(int sum)
{
    bool valid = false;

    if(sum % 10 == 0)
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
    return valid;
}

void validCard()
{
    std::cout << "This is a valid card" << std::endl;
}

void notValidCard()
{
    std::cout << "This is not a valid card" << std::endl;
}
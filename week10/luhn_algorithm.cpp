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
    int arraySum1 = 0;
    int arraySum2 = 0;
    int arraySum3 = 0;
    int const SIZE1 = 16;
    int const SIZE2 = 15;

    int testCard1[SIZE1] = {4,0,1,2,8,8,8,8,8,8,8,8,1,8,9,1};
    int testCard2[SIZE1] = {5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,4};       
    int testCard3[SIZE2] = {3,4,0,0,0,0,0,0,0,0,0,0,0,0,9}; 

    std::reverse(std::begin(testCard1), std::end(testCard1));
    std::reverse(std::begin(testCard2), std::end(testCard2));
    std::reverse(std::begin(testCard3), std::end(testCard3));

    for (int i = 0; i < SIZE1; i++)
    {
        int indexValue = testCard1[i];
        if(i % 2 == 1)
        {
            indexValue *= 2;

            if(indexValue > 9)
            {
                indexValue -= 9;
            }
        }
        arraySum1 += indexValue;
    }

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

/*
public boolean validateCard(int[] array)
    {
        boolean isValid = false; //set isValid to false to start
        int arraySum = 0; //holds array sum after all the weirdness

        for (int i = 0; i < array.length; i++)
        {
            if (i % 2 == 0) //check if the element is even, these will be the elements we double
            {
                array[i] *= 2; //double value if element is even
                if (array[i] > 9 ) //if value is greater then 9, subtract 9. This prevents us from having to break value into substring array and convert back
                {
                    array[i] -= 9;
                }
            }
            arraySum += array[i]; //running total, this will add the calculated totals also for every other element in the array
        }
        if (arraySum % 10 == 0) //if sum is divisible by 10 with nothing left over
        {
            isValid = true; //set isValid to true
        }
        else //if modulus returns false
        {
           isValid = false; //set isValid to false
        }
        return isValid;
    }
*/

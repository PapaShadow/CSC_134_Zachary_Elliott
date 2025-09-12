//@author: Zachary Elliott
//@date: 09-12-25
//@purpose: Week 4 lab 4, prompmts user for a character and determines if vowel or consonant

#include <iostream> //calls the iostream library for input and output operations
#include <cctype>  // calls the cctype library for character handling functions


using namespace std; //calls the standard namespace

int main()
{

    // flag to make sure input is a letter
    bool isLetter = false;

    return 0;
}

bool isCharacter(char userInput)
{
    // make bool flag set to false for my own sake
    bool isLetter = false;

    // quick check to see if input is a letter
    if (isalpha(userInput))
    {
        isLetter = true;
    }
    else
    {
        isLetter = false;
    }
    //return boolean value of t or f
    return isLetter;
}

bool isVowel(char userInput)
{
    // flag for if its a vowel or not
    bool isVowel = false;

    // create an array with vowels in it
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
}

char promptUser()
{
    // variable to store user input
    char userInput = ' ';

    // prompt for user input
    cout << "Please enter a letter: " << endl;
    cin >> userInput; // store user input in variable

    return userInput;
}
//@author: Zachary Elliott
//@date: 09-12-25
//@purpose: Week 4 lab 4, prompmts user for a character and determines 
// if the input is a vowel or consonant

#include <iostream> //calls the iostream library for input and output operations
#include <cctype>  // calls the cctype library for character handling functions


using namespace std; //calls the standard namespace

// function prototypes
bool isVowel(char);
char promptUser();
bool isCharacter(char);

int main()
{
    char userInput = promptUser();

    if (isVowel(userInput))
    {
        cout << userInput << " is a vowel." << endl;
    }
    else
    {
        cout << userInput << " is not a vowel so it is a consonant." << endl;
    }

    return 0;
}

// bool function to check if input is just a letter
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

// bool function to check if input is a vowel or consonant
bool isVowel(char userInput)
{
    // flag for if its a vowel or not
    bool isVowel = false;

    // create an array with vowels in it
    char vowelArray[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    // loop through the array and compare each to userInput
    //range based for loop to compare each value, thank you chapter 7.4
    // ch is being assigned each value in the array one at a time and comparing it to userInput
    // only available in C++11 and later otherwise it would be a normal for loop with a counter.
    for (char ch : vowelArray)
    {
        if (userInput == ch)
        {
            isVowel = true;
            break; // exit loop once a match is found
        }
    }
    return isVowel;


}

// finction to prompt user for input
char promptUser()
{
    // variable to store user input
    char userInput = ' ';
    // prompt for user input
        cout << "Please enter a letter: " << endl;
        cin >> userInput; // store user input in variable

    // some simple validation to make sure its a letter
    // this can be done with isAlpha from cctype
    // but i wanted to play with it for practice
    while(!isCharacter(userInput))
    {
        cout << "Not a valid input, please enter a single letter: " << endl;
        cin >> userInput;
    }
    

    return userInput;
}
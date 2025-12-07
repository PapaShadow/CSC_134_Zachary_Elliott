/*
@author: Zachary Elliott
@Date: 11-24-26
@Purpose: simple security system that checks the password from keypad
*/
#include <Keypad.h>
int ledRed = 2 ; //this is the red LED pin
int failDelay = 0;
int successDelay = 0;
int ledGreen = 4 ; //this is the green LED pin
const byte ROWS = 4 ; //this is the number of rows
const byte COLS = 4 ; //this is the number of columns
//char  keyPadEntries[5];
char  keys[ROWS][COLS] = {{'1', '2', '3', 'A'},
                          {'4', '5', '6', 'B'},
                          {'7', '8', '9', 'C'},
                          {'*', '0', '#', 'D'}
                         };
char enter = '#';
//String correctPin[5] = {'1','4', '7', 'A', 'D'};
String userInput = "";
String correctPin = "147AD";

byte rowPins[ROWS] = {13, 12, 11, 10}; //keypad rows
byte colPins[COLS] = {9, 8, 7, 6}; //keypad cols


//built in function to find the key based on 
//row column point
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


//counter
int keyPressCount = 0;


void blinkGreen();
void blinkRed();

//executes when the arduino starts up
void setup()
{
  //Set green and red led's to output
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter 5 Digit Pin then press #:");
}

//infinite loop
void loop()
{
  char key = keypad.getKey();

  //if a key was pressed
  if (key)
  {
    if(keyPressCount < 5)
    {
      if(key == enter)
        {
          if(userInput == correctPin)
          {
              blinkGreen();
              userInput = "";
          }
          else
          {
            blinkRed();
            userInput = "";
          }
        }
        else
        {
          userInput += key;
          Serial.println(key);
          keyPressCount++;

        }
    }
      else
      {
        blinkRed();
        Serial.println(key);
        userInput = "";
        keyPressCount = 0;
      }
  }
}
void blinkGreen()
{
	digitalWrite(ledGreen, HIGH);
  	Serial.println("Access Granted. Welcome Agent Bond");
	delay(3000);
	digitalWrite(ledGreen, LOW);
}

void blinkRed()
{
    digitalWrite(ledRed, HIGH);
  	Serial.println("I don't know you! Thats my purse!");
    delay(3000);
    Serial.println("Try Again");
    digitalWrite(ledRed, LOW);
}
//  Demonstrates generation of random numbers in arduino
// im using the native C srand() method
// -----------------------------------------------------

#include <stdlib.h>
#include <time.h>

#define BAUD 19200

int guess, number, counter;

void setup()
{
    Serial.begin(BAUD); // set the baud rate for serial printing

    Serial.println("Initializing the random number generator");

    srand(time(NULL));  // seed the generator
}

void loop()
{
    // generate random numbers
    for(counter = 0; counter < 3; counter++)
    {
        Serial.println("I am thinking of a number between 0 - 10\n"
                "try to guess what it is: ");

        while(Serial.available() > 0)
        {
            guess = Serial.read() - '0';
        }

        if(guess != number)
        {
            Serial.print("You failed to guess the number please try again\n"
                    "Attempts remaining: ");
            Serial.println(counter);
        }
        else
        {
            Serial.print("You guessed the number correctly!\nCongrats!!!");
            break;
        }
    }
}


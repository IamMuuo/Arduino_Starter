//  Demonstrates generation of random numbers in arduino
// im using the native C srand() method
// -----------------------------------------------------

#include <stdlib.h>
#include <time.h>

#define BAUD 19200

void setup()
{
    Serial.begin(BAUD); // set the baud rate for serial printing

    Serial.println("Initializing the random number generator");

    srand(time(NULL));  // seed the generator
}

void loop()
{
    // generate random numbers

    int r = rand() % 10;

    Serial.print("A random number between 0 and 10: ");
    Serial.println(r);
}


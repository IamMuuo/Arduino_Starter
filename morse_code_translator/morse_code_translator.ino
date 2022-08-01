/*
 * Morse Code Translator
 * 
 * Author Eric Muuo
 */

#define BAUD 9600
const short ledPin = 8;
const short dotDelay = 200;

char* letters[] = {
".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", // A-I
".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",// J-R
"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."// S-Z
};

char* numbers[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....",
"--...", "---..", "----."
}; // 0- 9


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(BAUD); // set the serial montor BAUD Rate 
}

void loop() {
  char ch; // input buffer


  if (Serial.available()) // stuff to read available?
  {
    ch = Serial.read(); /// read from the serial monitor

    if(ch >= 'A' && ch <= 'Z')  // use caps for the time being...
    {
      flashSequence(letters[ch - 'A']);
    }
    else if(ch >= '0' && ch <= '9')
    {
      flashSequence(letters[ch - '0']);
    }
    else if(ch == ' ')
    {
      delay(dotDelay * 4);
    }
  }
}


void flashSequence(char* sequence)
{
  for(size_t i = 0; sequence[i] != NULL; i++)
  {
    flashDotOrDash(sequence[i]);
  }

  delay(dotDelay*3);
}

void flashDotOrDash(char dotOrDash)
{
  digitalWrite(ledPin, HIGH);
  if (dotOrDash == '.')
  {
    delay(dotDelay);
  }
  else // must be a -
  {
    delay(dotDelay * 3);
  }
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
}

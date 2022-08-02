//  Demonstrating pwm
// Author Erick Muuo

#define DELAY 5
#define OUTPIN 3

void setup()
{
    pinMode(OUTPIN, OUTPUT);
}

void loop()
{
    for(int i = 0; i <= 255; i++)
    {
        analogWrite(OUTPIN, i);  // analogWrite(pin, duty cycle)
                            // 255 indicates 100% duty cycle
                            // 0 indicates 0% duty cycle
        delay(DELAY);
    }

    for (int i = 255; i >= 0 ; i--)
    {
        analogWrite(OUTPIN, i);
        delay(DELAY);
    }

    delay(1000);
}

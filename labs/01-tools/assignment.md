# Lab 1: JAN GROSS

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c
/* Defines -----------------------------------------------------------*/
#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
                        // is connected
#define SHORT_DELAY1 250 // Delay in milliseconds
#define SHORT_DELAY2 500
#define SHORT_DELAY3 1000
#define LED_out PB0   // PB5 is AVR pin where green on-board LED 
                        // is connected
#define SHORT_DELAY 250 // Delay in milliseconds
#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops

// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
#include "Arduino.h"
#define PB5 13          // In Arduino world, PB5 is called "13"
#define PB0 8
// -----


int main(void)
{
    uint8_t led_out = LOW;  // Local variable to keep LED status

    // Set pin where on-board LED is connected as output
    pinMode(LED_out, OUTPUT);

    // Infinite loop
    while (1)
    {
        // Generate a lettre `A` Morse code

        if (led_out == LOW)
            led_out = HIGH;
        digitalWrite(LED_out, led_out);
        _delay_ms(SHORT_DELAY1); //250

        if (led_out == HIGH)
            led_out = LOW;
        digitalWrite(LED_out, led_out);
        _delay_ms(SHORT_DELAY1);//250

        if (led_out == LOW)
            led_out = HIGH;
        digitalWrite(LED_out, led_out);
        _delay_ms(SHORT_DELAY2);//500

        if (led_out == HIGH)
            led_out = LOW;
        digitalWrite(LED_out, led_out);
        _delay_ms(SHORT_DELAY3);//1000
    }
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![your figure](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/01-tools/images/schematic.jpg)
![your figure](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/01-tools/images/foto1.jpg)

#include <Arduino.h>
#ifndef F_CPU
# define F_CPU 16000000  // CPU frequency in Hz required for UART_BAUD_SELECT
#endif


/* Includes ----------------------------------------------------------*/
#include <avr/io.h>         // AVR device-specific IO definitions
#include <avr/interrupt.h>  // Interrupts standard C library for AVR-GCC
#include "timer.h"          // Timer library for AVR-GCC
#include <uart.h>           // Peter Fleury's UART library
#include <stdlib.h>         // C library. Needed for number conversions
#include <gpio.h>           // GPIO library for AVR-GCC
#include "timer.h"          // Timer library for AVR-GCC

/* Defines -----------------------------------------------------------*/


#define SERVO1_out PD5   

#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops

#include "Arduino.h"
#define PB5 5          // In Arduino world, PB5 is called "13"



int main(void)
{

    uint8_t servo1_out = LOW;  // Local variable to keep LED status
    uint8_t x = 1;
    float duty = 2;
    // Set pin where on-board LED is connected as output
    pinMode(SERVO1_out, OUTPUT);
    while (1)
    {
      if (x==1)
      {
        duty = duty-0.1;
        _delay_ms(100);
      }
      if (x==2)
      {
        duty = duty-0.1;
        _delay_ms(100);
      }
       
      

    }
    
  

    while (1)
    {
        servo1_out = HIGH;
        digitalWrite(SERVO1_out, servo1_out);
        _delay_ms(duty);
        servo1_out = LOW;
        digitalWrite(SERVO1_out, servo1_out);
        _delay_ms(20-duty);

      /*
      for (size_t i = 0; i < 20; i++)
        {
          servo1_out = HIGH;
        digitalWrite(SERVO1_out, servo1_out);
        _delay_ms(1);
        servo1_out = LOW;
        digitalWrite(SERVO1_out, servo1_out);
        _delay_ms(19);
        }
        
        for (size_t i = 0; i < 20; i++)
        {
          servo1_out = HIGH;
        digitalWrite(SERVO1_out, servo1_out);
        _delay_ms(2);
        servo1_out = LOW;
        digitalWrite(SERVO1_out, servo1_out);
        _delay_ms(18);
        }
        */

    }
    return 0;

}



 
/*
    for (size_t i = 0; i < 100; i++)
        {
          led_out = HIGH;
        digitalWrite(LED_out, led_out);
        _delay_ms(1);
        led_out = LOW;
        digitalWrite(LED_out, led_out);
        _delay_ms(19);
        }
        
        for (size_t i = 0; i < 100; i++)
        {
          led_out = HIGH;
        digitalWrite(LED_out, led_out);
        _delay_ms(2);
        led_out = LOW;
        digitalWrite(LED_out, led_out);
        _delay_ms(18);
        }*/


        /*
        for (size_t i = 0; i < 20; i++)
        {
          led_out = HIGH;
        digitalWrite(LED_out, led_out);
        _delay_ms(1);
        led_out = LOW;
        digitalWrite(LED_out, led_out);
        _delay_ms(19);
        }
        
        for (size_t i = 0; i < 20; i++)
        {
          led_out = HIGH;
        digitalWrite(LED_out, led_out);
        _delay_ms(2);
        led_out = LOW;
        digitalWrite(LED_out, led_out);
        _delay_ms(18);
        }
       */



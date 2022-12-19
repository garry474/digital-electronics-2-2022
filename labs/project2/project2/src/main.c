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
#define SERVO2_out PD6

#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops

#include "Arduino.h"
#define PB5 5          // In Arduino world, PB5 
#define PB5 6


int main(void)
{

  uint8_t servo1_out = LOW;  // Local variable to keep SERVO status
  uint8_t servo2_out = LOW;
  float duty = 1;
  // Set pin where on-board SERVO is connected as output
  pinMode(SERVO1_out, OUTPUT);
  pinMode(SERVO2_out, OUTPUT);

  while (1)
  {
    duty=2;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.1;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.2;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.3;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.4;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.5;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.6;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.7;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.8;
    _delay_ms(500);
    set_servo2(duty);
    duty=1.9;
    _delay_ms(500);
    set_servo2(duty);
  }


  return 0;
}

void set_servo2(float duty)
{
  uint8_t servo1_out = LOW;  
  uint8_t servo2_out = LOW;
  
  // Set pin where on-board SERVO is connected as output
  pinMode(SERVO1_out, OUTPUT);
  pinMode(SERVO2_out, OUTPUT);

  while (1)
  {
    servo1_out = HIGH;
    digitalWrite(SERVO1_out, servo1_out);
    _delay_ms(duty);
    servo1_out = LOW;
    digitalWrite(SERVO1_out, servo1_out);
    _delay_ms(20-duty);

    servo2_out = HIGH;
    digitalWrite(SERVO2_out, servo2_out);
    _delay_ms(duty);
    servo2_out = LOW;
    digitalWrite(SERVO2_out, servo2_out);
    _delay_ms(20-duty);
    
  }
  return 0;
}
     
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



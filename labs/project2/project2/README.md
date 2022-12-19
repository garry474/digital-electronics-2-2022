# Project 2

Precise generation of several PWM channels. Application of two (or more) Servo motors SG90.

### Team members

* Jan Gross (responsible for all)

## Hardware description
Servo 9G SG90 has 3 pins, Vcc, GND, and signal. To control the servo we send a digital output to signal input. HIGH for 1 to 2ms and then low, we need period of 20ms. Duty 1ms coresponds to 0 degerees, 1.5ms to 90 degerees, and 2ms to 180 degerees.

By changing the duty cycle by small increments we can precisely control the angle of the servo. We need however to send the given signal repeatedly until the servo meets the set angle, than the servo stops even when we repeat it. 

![](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/project2/project2/images/Servo-Motor-Working-Animation.gif) [gif source](https://lastminuteengineers.com/servo-motor-arduino-tutorial/)

**Circuit connections**

<img src="https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/project2/project2/images/schem1.png" width=60% height=60%>

## Software description

`src` [main](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/project2/project2/src/main.c)

All we should theoreticly need is a short function that repeatedly updates the duty cycle and we can you any other input if we scale it for example as a number vrom 1 to 2 and push it to the following function. This duty variable can be virtually any number with decimal places for smaller increments.
To use more servos just define more digital outputs.

```
servo1_out = HIGH;                    //set servo1_out HIGH
digitalWrite(SERVO1_out, servo1_out); //send HIGH to servo
_delay_ms(duty);                      //wait for duty time
servo1_out = LOW;                     //set servo1_out LOW
digitalWrite(SERVO1_out, servo1_out); //send LOW to servo
_delay_ms(20-duty);                   //wait for period minus duty time
```

I managed to move the servo back and forth with "for" functions.
```
for (size_t i = 0; i < 50; i++)
{
  servo1_out = HIGH;
  digitalWrite(SERVO1_out, servo1_out);
  _delay_ms(1);
  servo1_out = LOW;
  digitalWrite(SERVO1_out, servo1_out);
  _delay_ms(19);
}
        
for (size_t i = 0; i < 50; i++)
{
  servo1_out = HIGH;
  digitalWrite(SERVO1_out, servo1_out);
  _delay_ms(2);
  servo1_out = LOW;
  digitalWrite(SERVO1_out, servo1_out);
  _delay_ms(18);
}
```



**Flow chart**

<img src="https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/project2/project2/images/Diagram1.png" width=10% height=10%>

## References

1. https://docs.arduino.cc/learn/electronics/servo-motors
2. https://www.instructables.com/Arduino-Servo-Motors/
3. https://lastminuteengineers.com/servo-motor-arduino-tutorial/

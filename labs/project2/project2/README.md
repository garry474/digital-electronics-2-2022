# Project 2

Precise generation of several PWM channels. Application of two (or more) Servo motors SG90.

### Team members

* Jan Gross (responsible for everything)

## Hardware description
Servo 9G SG90 has 3 pins, Vcc, GND, and signal. To control the servo we send a digital output to signal. HIGH for 1 to 2ms and then low, we need period of 20ms. Duty 1ms coresponds to 0 degerees, 1.5ms to 90 degerees, and 2ms to 180 degerees.

By changing the duty cycle by small increments we can precisely control the angle of the servo. We need however to send the given signal repeatedly until the servo meets the set angle, than the servo stops even when we repeat it. Sending an impuls just once almost doenst move the servo.

![](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/project2/project2/images/Servo-Motor-Working-Animation.gif)

<img src="https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/project2/project2/images/schem1.png" width=60% height=60%>

## Software description

`src` [main](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/project2/project2/src/main.c)


<img src="" width=70% height=70%>

## References

1. https://docs.arduino.cc/learn/electronics/servo-motors
2. https://www.instructables.com/Arduino-Servo-Motors/
3. https://lastminuteengineers.com/servo-motor-arduino-tutorial/

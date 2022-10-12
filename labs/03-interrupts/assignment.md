# Lab 3: JAN GROSS 230067

### Overflow times

1. Complete table with overflow times.

   | **Module** | **Number of bits** | **1** | **8** | **32** | **64** | **128** | **256** | **1024** |
   | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
   | Timer/Counter0 | 8  | 16u | 128u | -- |1m| -- |4m|16m|
   | Timer/Counter1 | 16 |  4m  |  32m  | -- |262m| -- |1s|4s|
   | Timer/Counter2 | 8  |16u|  128u  |512u|1m|2m|4m|16m|

### Interrupts

2. In `timer.h` header file, define macros also for Timer/Counter2. Listing of part of the header file with settings for Timer/Counter2. Always use syntax highlighting, meaningful comments, and follow C guidelines:

   ```c
   /**
    * @name  Definitions for 8-bit Timer/Counter2
    * @note  t_OVF = 1/F_CPU * prescaler * 2^n where n = 8, F_CPU = 16 MHz
    */
    /** @brief Stop timer, prescaler 000 --> STOP */
    #define TIM3_stop()           TCCR2B &= ~((1<<CS22) | (1<<CS21) | (1<<CS20));
    /** @brief Set overflow 16u, prescaler 001 --> 1 */
    #define TIM3_overflow_16u()   TCCR2B &= ~((1<<CS22) | (1<<CS21)); TCCR2B |= (1<<CS20);
    /** @brief Set overflow 128u, prescaler 010 --> 8 */
    #define TIM3_overflow_128u()  TCCR2B &= ~((1<<CS22) | (1<<CS20)); TCCR2B |= (1<<CS21);
    /** @brief Set overflow 512u, prescaler 011 --> 32 */
    #define TIM3_overflow_512u() TCCR2B &= ~(1<<CS22); TCCR2B |= (1<<CS21) | (1<<CS20);
    /** @brief Set overflow 1m, prescaler 100 --> 64 */
    #define TIM3_overflow_1m() TCCR2B &= ~((1<<CS21) | (1<<CS20)); TCCR2B |= (1<<CS22);
    /** @brief Set overflow 2m, prescaler 101 --> 128 */
    #define TIM3_overflow_2m()    TCCR2B &= ~(1<<CS21) ; TCCR2B |= (1<<CS22) | (1<<CS20);
    /** @brief Set overflow 4m, prescaler 110 --> 256 */
    #define TIM3_overflow_4m()    TCCR2B &= ~(1<<CS20) ; TCCR2B |= (1<<CS22) | (1<<CS21);
    /** @brief Set overflow 16m, prescaler // 111 --> 1024 */
    #define TIM3_overflow_16m()    TCCR2B |= (1<<CS22) | (1<<CS21) | (1<<CS20);
    /** @} */

    /** @brief Enable overflow interrupt, 1 --> enable */
    #define TIM3_overflow_interrupt_enable()  TIMSK2 |= (1<<TOIE2);
    /** @brief Disable overflow interrupt, 0 --> disable */
    #define TIM3_overflow_interrupt_disable() TIMSK2 &= ~(1<<TOIE2);
   ```

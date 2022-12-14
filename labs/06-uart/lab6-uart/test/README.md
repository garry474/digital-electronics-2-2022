# Lab 6: Jan Gross 230067

### ASCII

1. Complete the table with selected ASCII codes.

   | **Char** | **Decimal** | **Hexadecimal** | **Binary** |
   | :-:          | :-: | :-: | :-: |
   | `a`          | 97 | 0x61 | `0b0110_0001` |
   | `b`          | 98 | 0x62 | `0b01100010` |
   | `c`          | 99 | 0x63 | `0b01100011` |
   | `0`          | 48 | 0x30 | `0b0011_0000` |
   | `1`          | 49 | 0x31 | `0b00110001` |
   | `2`          | 50 | 0x32 | `0b00110010` |
   | `Esc`        | 27 | 0x1B | `0b00011011` |
   | `Space`      | 32 | 0x20 | `0b00100000` |
   | `Tab`        | 9 | 0x09 | `0b00001001` |
   | `Backspace`  | 8 | 0x08 | `0b00001000` |
   | `Enter`      | 10 | 0x0A | `0b00001010` |

### UART communication

2. Draw timing diagram of the output from UART/USART when transmitting three character data `De2` in 4800 7O2 mode (7 data bits, odd parity, 2 stop bits, 4800&nbsp;Bd). The image can be drawn on a computer or by hand. Name all parts timing diagram.

   ![your figure](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/06-uart/images/schematic1.png)

3. Draw a flowchart for function `uint8_t get_parity(uint8_t data, uint8_t type)` which calculates a parity bit of input 8-bit `data` according to parameter `type`. The image can be drawn on a computer or by hand. Use clear descriptions of individual algorithm steps.

   ![your figure](https://github.com/garry474/digital-electronics-2-2022/blob/main/labs/06-uart/images/flowchart1.png)

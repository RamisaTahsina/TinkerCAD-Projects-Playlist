# Calculator Project

## Video link:[Arduino DIY Calculator using a 4*4 Keypad and 16*2 LCD Display || Arduino Uno Calculator Project](https://www.youtube.com/watch?v=dgGfoHlhugs&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=7)

### Components
1. Arduino Uno R3 (x1)
2. Keypad 4x4 (x1)
3. LCD 16 x 2 (x1)
4. 1 kΩ Resistor (x1)


### Keypad 4x4
A 4x4 keypad is a matrix keypad with 4 rows and 4 columns, typically used for user input on embedded systems like Arduino

- Working Principle
  - Each key is at the intersection of a row and a column
  - The keypad has 8 pins: 4 for rows and 4 for columns.
  - To detect a keypress, the microcontroller scans rows and columns by sending signals and reading responses.

- Applications
  - Password entry
  - Menu navigation
  - Home automation control panels 
  - DIY projects with Arduino


### LCD 16x2
An LCD 16x2 (Liquid Crystal Display, 16 columns and 2 rows) is a very popular display used with microcontrollers like Arduino, ESP32, Raspberry Pi, etc.

It can show 16 characters per row and has 2 rows, so a total of 32 characters on the screen.

- pins
  - VSS: GND
  - VDD: +5V
  - VO:	Contrast (via potentiometer)
  - RS:	Register Select
   - RW:	Read/Write (usually GND)
  - E:	Enable
  -	D0-D7:	Data pins
  - A:	LED+ (Backlight +)
  - K:	LED- (Backlight -)

 - Applications
   - Showing text
   - sensor readings
   - Menus
   - Clocks, timers
   - Status display in DIY projects


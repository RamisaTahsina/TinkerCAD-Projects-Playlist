# Interfacing LCD with ATtiny
## Video link: []()
### Components:
1. LCD 16x2
2. ATtiny85
3. 4 batteries, AA, yes 1.5V Battery
4. 200 Ω Resistor

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
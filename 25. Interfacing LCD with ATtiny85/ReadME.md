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
   ### ATtiny85
The ATtiny85 is a small, low-cost 8-bit microcontroller made by Microchip with Flash Memory	of 8 KB and Supply Voltage 2.7V to 5.5V.
- Pinout
  -  1 -	RESET / PB5
  - 2	- D3 / PB3
  - 3 - 	D4 / PB4
   - 4 - 	GND
  - 5 - 	D0 / PB0
  - 6 - 	D1 / PB1
  - 7 - 	D2 / PB2
  - 8 - 	VCC

- Application
  - Mini light controllers
  -  Wearable tech
  -  Tiny robots
  - Battery-powered sensors
  - IR remote devices
  -  Simple automation
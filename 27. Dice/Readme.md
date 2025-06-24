# Dice
##  Video link:[Dice with 7-segment display and Attiny85 || Attiny85 Projects || Creating an LED Dice using Attiny85](https://www.youtube.com/watch?v=yi_e0TZ0uKw&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=27)
### Components:

- Anode 7 Segment Display
- ATtiny
- 0.8 , 5 Power Supply
-  8-Bit Shift Register
- 330 Ω Resistor
- 1 kΩ Resistor
-  Pushbutton

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

  ### 7 Segment Display

A 7-segment display is a very common electronic component used to display numbers (0–9), some letters (A, b, C...), and symbols.

It has 7 LEDs, arranged in a figure-8 shape, and sometimes an 8th LED for a decimal point (DP).

|Pin  |	Segment|
|-----|--------|
|1	  |e|
|2	   |d|
|3	|c
|5	|DP
|6	|b
|7	|a
|8	|Common
|9	|f
|10	|g

 - Applications
   -  Digital clocks
   - Counters
   - Scoreboards
   - Timers
   -  Voltage display
   - Temperature display
### 8-bit Shift Register
An 8-bit shift register is an IC (integrated circuit) that takes serial input (1 bit at a time) and converts it into parallel output (8 bits out at once).
In short → You can control 8 outputs using only 3 Arduino pins!

|Pin Name|	Function|
|--------|----------|
|SER (DS)| 	Serial data input
|SRCLK (SH_CP)|	Shift register clock (data in)
|RCLK (ST_CP)|	Latch clock (update output)
Q0 - Q7	|Parallel outputs (8 bits)
GND	|Ground
VCC	|+5V
MR	|Master Reset (tie HIGH)
OE	|Output Enable (tie LOW)

 - Application

   - LED Matrix
   - 7-segment displays
   - Driving relays
   - Keyboards
   - Any project where pins are limited
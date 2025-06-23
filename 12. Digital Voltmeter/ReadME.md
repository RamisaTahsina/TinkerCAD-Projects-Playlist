# Digital Voltmeter
## Video link [Digital Voltmeter || Arduino Uno || TinkerCad](https://www.youtube.com/watch?v=qwK1RTRGnrA&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=12)


### Components
1. Arduino Uno R3
2. 90.9 kΩ Resistor
3. 10 kΩ Resistor
4. 250 kΩ Potentiometer
5. 29.4 , 1.4 Power Supply
6. LCD 16 x 2
7. 220 Ω Resistor

### Potentiometer

A potentiometer is a three-terminal resistor with a sliding or rotating contact (called a wiper) that forms an adjustable voltage divider

 - Working Principal
   - It consists of a resistive element (a strip of material with uniform resistance).
   - The two ends of the strip are connected to two terminals.
   - A third terminal (the wiper) slides across the strip.
   - By moving the wiper, one can change the ratio of resistance between one end and the wiper, and the wiper and the other end—this changes the output voltage.

 - Application
   -    Adjust levels (like volume control on a radio)
   - Tune circuits (like setting reference voltages)
   - Act as a user input (like in joysticks)

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

### Power Supply

A power supply is a device or circuit that provides electrical power to your components or system. It converts electrical energy from a source (like AC mains, battery, USB) into the correct voltage and current needed by your circuit.
# Interface Temperature Sensor and LCD
## Video link:[HOW TO INTERFACE TEMPERATURE SENSOR AND LCD WITH ARDUINO: Digital Thermometer using LCD and Arduino](https://www.youtube.com/watch?v=RTNcZSVdwLY&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=17)


### Components:
1. Arduino UNO R3
2. Temperature Sensor
3. LCD 16x2
4. 250 kΩ Potentiometer
5. 220 Ω Resistor

### Temperature Sensor-TMP36
Temperature Sensor gives an analog output based on the instantaneous temperature value. This analog output is proportional to the instantaneous input.

- Key Features
  - Temperature range: –40°C to +125°C
  - Output voltage: Analog, directly proportional to temperature
  - Accuracy: ±1°C at 25°C
  - Low voltage operation: 2.7V to 5.5V
  - Self-calibrated: No need for external calibration
  - Current draw: ~50 μA (very low power)

- Working Principle
  - The TMP36 outputs a voltage that changes linearly with temperature.
  - The output at 25°C is typically 750 mV.
  - The scale factor is 10 mV/°C.

 - Formula

   Temperature (°C)=(V out−500 mV)/10

   where V out is the sensor output voltage in millivolts.


- Typical Pinout:
  - Vcc (2.7V to 5.5V)
  - Vout (Analog output voltage)
  - GND (Ground)

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

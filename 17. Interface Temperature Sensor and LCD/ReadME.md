# Interface Temperature Sensor and LCD
## Video link:[]()

### Components:
1. Arduino UNO R3
2. Temperature Sensor
3. LCD 16x2

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

# Thermometer
## Video link: [DIY thermometer using Atttiny85 on TinkerCAD](https://www.youtube.com/watch?v=xdpNm6V-Hk8&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=19)
### Components:
1. ATtiny
2. Red LED
3. 3 batteries, AA, no 1.5V Battery
4. 1 kΩ Resistor
5. Temperature Sensor [TMP36]

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

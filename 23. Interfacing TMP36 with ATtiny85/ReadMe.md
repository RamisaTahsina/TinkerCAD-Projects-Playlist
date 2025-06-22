# Interfacing TMP36 with ATtiny
## Video link: []()
### Components
1. Arduino UNO R3
2. Temperature Sensor-TMP36
3. ATtiny85

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
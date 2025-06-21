# Controlling LEDs using IR Remote

## Video link:[ Controlling LEDs using IR Remote and Arduino UNO on TinkerCAD](https://www.youtube.com/watch?v=Lk_oFu-3aw4&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=6)

### Components
1. Arduino Uno R3 (x1)
2. Blue LED (x1)
3. Orange LED (x1)
4. Green LED (x1)
5. 1 kΩ Resistor (x3)
6. IR sensor (x1)
7. IR remote (x1)

### IR Remote
IR (InfraRed) remotes are a handheld wireless device to operate other electronic devices. IR remotes act as a transmitter that carries signals from remote to the devices it controls. It emits lights in an infrared range that corresponds to specific commands, such as power on, volume up, etc. The controlled device acts as a receiver. It decodes the infrared pulses of light and executes the command.  

### IR sensor

IR ( InfraRed ) Sensors refers to an electronic device that measures and detects Infrared Radiations.
- Pins
  - VCC → +5V (Arduino 5V pin)
  - GND → Ground
  - OUT → Digital output (HIGH/LOW signal depending on object presence)

 - Working Principle
   - IR LED emits infrared light.
   - If an object is in front, IR light reflects back.
   - Photodiode detects the reflected light and changes the output.

 - Applications
   -   Obstacle avoiding robot
   - Line following robot
   - Object counter
   - Hand gesture detection
   - Automatic doors
   - Security systems 

# Samrt Parking System
## Video link: [Smart Parking System using Arduino || Arduino || TinkerCAD || Arduino Projects || TinkerCAD Projects](https://www.youtube.com/watch?v=1LM8OSCCthE&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=37)

### Components
- Arduino Uno R3 (x1)
- PIR Sensor (x4)
- Positional Micro Servo (x2)
- LCD 16 x 2 (x1)
- 250 kΩ Potentiometer (x1)
- 1 kΩ Resistor (x1)

### PIR sensor
A PIR sensor (Passive Infrared sensor) detects motion by sensing changes in infrared radiation (heat) in its field of view.

 - Workinng Principle
   - All objects emit infrared radiation (IR), especially warm objects like humans or animals.

   - The PIR sensor has two IR-sensitive elements:

     - If the IR level stays constant → no motion detected.

     - If IR level changes (like a person walking) → motion detected.




  - Applications
    -  Automatic lights
    - Alarms and security
    - Motion-activated cameras
    -  Energy saving (auto-off devices)
    - Home automation
### Positonal Micro Servo

A positional micro servo is a small, lightweight motor with built-in electronics that can rotate to a specific angle, typically 0° to 180° (some models can go a bit beyond). It’s used in many hobby and robotics projects for precise movements.

 - Working Principle
   - You send a PWM (Pulse Width Modulation) signal to the servo.
   - The width of the pulse tells the servo which angle to move to.

     - 1 ms pulse → ~0°

     - 1.5 ms pulse → ~90°

     - 2 ms pulse → ~180°

   - The servo holds its position after moving—great for controlling arms, levers, and dials.


 - Applications
   - Robot arms

   - Pan/tilt camera mounts

   - Animatronics

   - RC cars, boats, planes

   - Automated levers and switches
   
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
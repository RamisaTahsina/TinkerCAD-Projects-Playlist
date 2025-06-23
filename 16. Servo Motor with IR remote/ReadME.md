# Servo Motor with IR Remote
## Video link:[Servo motor with IR remote and Arduino](https://www.youtube.com/watch?v=B6ad4jct64I&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=16)

### Components:
1. Arduino UNO R3
2. Servo Motor
3. IR Remote
4. IR sensor

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

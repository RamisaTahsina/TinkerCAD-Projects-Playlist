# Automatic Hand Sanitizer
## Video link:[Automatic Hand Sanitizer - DIY](https://www.youtube.com/watch?v=wB7nkLM9MPk&list=PLWqnlHhsmcI4eBDLBtaZs16XZq0WL1SlP&index=14)

### Components
1. Arduino Uno
2. Servo Motor
3. Ultrasonic Sensor

### Ultrasonic Sonar Sensor
 An ultrasonic sonar sensor is a device that uses ultrasonic sound waves to detect objects and measure distances. It works by emitting a high-frequency sound pulse (usually above 20 kHz, which is beyond human hearing), and then measuring the time it takes for the echo to return after bouncing off an object.

### Working principle
1. Transmit: The sensor sends out an ultrasonic sound wave.

2. Travel: The sound wave travels through the air until it hits an object.

3. Echo: The wave reflects back to the sensor.

4. Receive & Calculate: The sensor detects the returning echo and calculates the distance based on the time delay.

### Distance Formula:

![eqn](https://latex.codecogs.com/svg.image?{\color{Pink}distance=\frac{time\times\text{speed&space;of&space;sound}}{2}})
​

 
 (Divide by 2 because the sound travels to the object and back.)

### Example:
HC-SR04 Ultrasonic Sensor for Arduino.

### Applications:
 - Obstacle avoidance in robots

- Parking sensors in cars

- Liquid level sensing

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


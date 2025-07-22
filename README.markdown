# Line Following Robot

## Description
This Arduino project implements a simple line follower robot using a single IR sensor to detect a line on a surface, with a black line recommended for best performance. The robot uses two motors (controlled by four pins) to navigate by following the line. When the IR sensor detects the line (HIGH signal), the robot stops. When it detects no line (LOW signal), the robot moves forward or adjusts its direction to stay on track. The code includes logic for stopping, moving forward, and turning left or right based on sensor input.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- IR sensor (connected to pin 9)
- Two DC motors (controlled via pins 2, 3, 4, and 5)
- Motor driver (e.g., L298N)
- Power supply for motors and Arduino
- Chassis and wheels for the robot

## Pin Configuration
- **IR2 (Pin 9)**: IR sensor for detecting the line
- **m1 (Pin 2)**: Motor 1 control (left motor, forward)
- **m2 (Pin 3)**: Motor 1 control (left motor, reverse)
- **m3 (Pin 4)**: Motor 2 control (right motor, forward)
- **m4 (Pin 5)**: Motor 2 control (right motor, reverse)

## How It Works
1. **Setup**: Initializes motor control pins as outputs.
2. **Loop**:
   - If the IR sensor detects a line (HIGH), both motors stop.
   - If the IR sensor detects no line (LOW), both motors move forward to follow the path.
   - For directional adjustments:
     - To turn left: Stop the left motor, move the right motor.
     - To turn right: Stop the right motor, move the left motor.
   - A delay of 100ms is used during turns to control the turn duration.
   - If no valid sensor input is detected, both motors stop as a failsafe.

## Installation
1. Connect the IR sensor to pin 9 and the motors to pins 2, 3, 4, and 5 via a motor driver.
2. Upload the provided Arduino code to your board using the Arduino IDE.
3. Power the Arduino and motors, and place the robot on a surface with a line to follow (black line recommended).

## Usage
- Ensure the IR sensor is calibrated to detect the line (HIGH for line, LOW for background). A black line is recommended for optimal IR reflectivity contrast.
- Place the robot on the line path and power it on.
- The robot will follow the line, adjusting its direction as needed.

## Notes
- A black line is recommended due to its low IR reflectivity, providing clear contrast with a reflective background (e.g., white). Other colored lines may work if they have sufficient contrast.
- The code assumes a single IR sensor, which may limit precision. Adding more sensors could improve accuracy.
- Adjust the `delay(100)` value to fine-tune turning behavior based on your robot's speed and track.
- Ensure proper power supply to avoid motor or Arduino malfunctions.

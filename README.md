Heart Rate Monitor Using Arduino Uno
Overview
This Arduino Uno project implements a heart rate monitor that measures pulse rate using an analog sensor connected to pin A0. The system detects heartbeats, calculates the beats per minute (BPM), and outputs the results to the Serial Monitor. An LED on pin 13 indicates detected heartbeats.
Hardware Requirements

Arduino Uno: Microcontroller board to run the code.
Pulse Sensor: Connected to analog pin A0 for detecting heartbeats.
LED: Connected to digital pin 13 for visual heartbeat indication.
Resistor: Appropriate resistor for the LED (e.g., 220Ω).
Breadboard and Jumper Wires: For circuit connections.

Software Requirements

Arduino IDE: To upload the code to the Arduino Uno.
Serial Monitor: For viewing the signal level and BPM output (set to 9600 baud).

Circuit Setup

Connect the pulse sensor's signal pin to Arduino Uno's analog pin A0.
Connect the pulse sensor's power pins to 5V and GND on the Arduino.
Connect an LED with a current-limiting resistor to digital pin 13 and GND.
Ensure proper grounding and power connections to avoid noise in sensor readings.

Code Functionality

Initialization:
Sets up Serial communication at 9600 baud for output.
Configures pin 13 as an output for the LED.


Heartbeat Detection:
Reads the analog sensor value from pin A0.
Uses a threshold (520) to detect a heartbeat, turning the LED on and incrementing a beat counter.
Implements a state machine (countStatus) to prevent multiple counts per heartbeat.
Resets the state when the sensor value drops below 500.


BPM Calculation:
Every 15 seconds, calculates BPM by multiplying the number of beats by 4 (since 15 seconds is 1/4 of a minute).
Resets the beat counter and updates the time reference (millisBefore).
Outputs the sensor signal level and BPM to the Serial Monitor.


Delay: Includes a 300ms delay to stabilize sensor readings.

How to Use

Connect the circuit as described in the Circuit Setup section.
Open the Arduino IDE and upload the provided code to the Arduino Uno.
Open the Serial Monitor (set to 9600 baud) to view the sensor signal level and BPM.
Place the pulse sensor on a finger or suitable body part to detect heartbeats.
The LED on pin 13 will light up with each detected heartbeat, and BPM will be displayed every 15 seconds.

Notes

Adjust the sensor threshold values (520 and 500) if the sensor sensitivity varies.
Ensure the pulse sensor is securely placed to avoid false readings.
The 300ms delay may need tuning based on the sensor's response time.

License
This project is open-source and available under the MIT License.

Hardware Components

The following components are required to develop the IoT-based Flood Detection System.

1. ESP32 Development Board

- Acts as the main controller.
- Processes sensor readings.
- Supports Wi-Fi communication.

2. HC-SR04 Ultrasonic Sensor

- Measures the distance between the sensor and the water surface.
- Helps monitor rising water levels.

3. Buzzer

- Produces an audible warning when water reaches a critical level.

4. Resistors

- Used to create a voltage divider for the ultrasonic sensor's ECHO pin.
- Protects the ESP32 from 5V input.

5. Breadboard

- Used for connecting electronic components without soldering.

6. Jumper Wires

- Used to connect the ESP32, sensor and buzzer.

7. USB Cable

- Provides power and programming connection to the ESP32.

Pin Connections

Component| ESP32 Pin
HC-SR04 TRIG| GPIO 5
HC-SR04 ECHO| GPIO 18 (through voltage divider)
Buzzer Positive| GPIO 19
Ground| GND

Note

The HC-SR04 sensor should be mounted above the water surface. Protect all electronics from water exposure.

Circuit Connections – Flood Detection System

1. Hardware Connections

The ESP32 is connected to an HC-SR04 ultrasonic sensor and a buzzer.

Component| ESP32 Connection
HC-SR04 VCC| 5V / VIN
HC-SR04 GND| GND
HC-SR04 TRIG| GPIO 5
HC-SR04 ECHO| GPIO 18 (through voltage divider)
Buzzer Positive| GPIO 19
Buzzer Negative| GND

2. Voltage Divider Connection

The HC-SR04 ECHO output is approximately 5V, while ESP32 GPIO pins operate at 3.3V.

Use a voltage divider:

- Connect a 1kΩ resistor between ECHO and GPIO 18.
- Connect a 2kΩ resistor between GPIO 18 and GND.

This reduces the input voltage to approximately 3.3V.

3. Working of the Circuit

1. The ultrasonic sensor sends sound waves towards the water surface.
2. The reflected waves are received by the sensor.
3. The ESP32 calculates the distance.
4. The ESP32 checks the water-level threshold.
5. The buzzer produces an alert when the water reaches warning or danger levels.

4. Safety Precautions

- Never connect the 5V ECHO output directly to an ESP32 GPIO.
- Keep the ESP32 and other electronics away from water.
- Use a suitable driver circuit if the buzzer requires more current than an ESP32 GPIO can provide.
- Check all connections before powering the circuit.

5. Note

This circuit is intended for a prototype. Actual sensor readings and threshold values should be tested and calibrated before practical use.

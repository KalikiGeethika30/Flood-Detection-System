Circuit Diagram – ESP32 Flood Detection System

1. Circuit Overview

The circuit consists of an ESP32 development board, HC-SR04 ultrasonic sensor and buzzer.

2. Connection Diagram

       HC-SR04 SENSOR
       ┌─────────────┐
       │ VCC         │──── ESP32 VIN (5V)
       │ GND         │──── ESP32 GND
       │ TRIG        │──── GPIO 5
       │ ECHO        │──── Voltage Divider
       └─────────────┘           │
                                 └── GPIO 18

       ESP32 BOARD
       ┌─────────────┐
       │ GPIO 19     │──── Buzzer (+)
       │ GND         │──── Buzzer (-)
       └─────────────┘

3. Voltage Divider

Use a 1kΩ and 2kΩ resistor to reduce the HC-SR04 ECHO signal from 5V to approximately 3.3V.

4. Circuit Description

The ultrasonic sensor detects the water surface and sends distance readings to the ESP32. The ESP32 processes the readings and activates the buzzer when the water reaches the configured warning or danger level.

5. Safety

Keep electronic components protected from water. Never connect a 5V signal directly to an ESP32 GPIO pin.

6. Note

This is a conceptual connection diagram. Verify the actual wiring and component specifications before powering the circuit.c

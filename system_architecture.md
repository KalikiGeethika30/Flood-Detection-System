System Architecture – IoT-Based Flood Detection System

1. Architecture Overview

The system uses an ESP32 microcontroller connected to an ultrasonic sensor and a buzzer to monitor water levels and generate flood alerts.

2. System Blocks

1. Input Unit: HC-SR04 ultrasonic sensor measures the distance between the sensor and water surface.
2. Processing Unit: ESP32 receives sensor readings and calculates the water level.
3. Decision Unit: ESP32 compares readings with predefined thresholds.
4. Alert Unit: Buzzer generates an audible warning during high water levels.
5. Communication Unit: ESP32 Wi-Fi can transmit readings to an IoT platform for remote monitoring.

3. Data Flow

Sensor → ESP32 → Water Level Calculation → Threshold Comparison → Buzzer Alert

For remote monitoring:

ESP32 → Wi-Fi → IoT Platform → User Dashboard

4. System Operation

- The sensor continuously measures water distance.
- ESP32 processes the measurements.
- Water level conditions are classified as normal, warning or danger.
- The buzzer provides an alert when a threshold is reached.
- Wi-Fi connectivity can be used for remote data monitoring.

5. Conclusion

The proposed architecture provides a simple and expandable IoT-based flood monitoring prototype using an ESP32 and an ultrasonic sensor.

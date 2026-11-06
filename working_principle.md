Working Principle – IoT-Based Flood Detection System

1. Introduction

The Flood Detection System works using an ESP32 microcontroller and an HC-SR04 ultrasonic sensor to monitor water levels continuously. It detects rising water levels and provides alerts when the water reaches predefined warning or danger levels.

2. Working Process

Step 1: Water Level Detection

The HC-SR04 ultrasonic sensor is placed above the water surface. It sends ultrasonic waves towards the water and receives the reflected waves.

Step 2: Distance Measurement

The sensor measures the time taken for the ultrasonic waves to travel to the water surface and return.

The distance is calculated using:

Distance = (Time × Speed of Sound) / 2

Step 3: Data Processing

The ESP32 receives the distance measurement and calculates the estimated water level based on the sensor's mounting height.

Step 4: Level Comparison

The ESP32 compares the measured distance with predefined threshold values.

- Normal Level: Water level is safe.
- Warning Level: Water is rising.
- Danger Level: Water has reached a critical level.

Step 5: Alert Generation

When the water reaches the warning or danger threshold, the buzzer is activated to provide an audible alert.

Step 6: IoT Monitoring

The ESP32 has built-in Wi-Fi capability. It can be extended to send water-level information to an IoT platform for remote monitoring and notifications.

3. System Workflow

1. Start the system.
2. Initialize the ESP32 and ultrasonic sensor.
3. Measure the distance to the water surface.
4. Calculate the estimated water level.
5. Compare the reading with threshold values.
6. Activate the buzzer if the water level is critical.
7. Display readings through the Serial Monitor.
8. Repeat the process continuously.

4. Advantages

- Continuous water-level monitoring.
- Early warning of rising water levels.
- Low-cost prototype.
- Easy installation and maintenance.
- Can be extended with wireless monitoring.

5. Applications

- Flood-prone areas.
- Rivers and canals.
- Dams and reservoirs.
- Agricultural fields.
- Urban drainage systems.

6. Conclusion

The IoT-based Flood Detection System helps monitor water levels and identify potential flood conditions. By combining an ultrasonic sensor with an ESP32 microcontroller, the system provides local alerts and offers the possibility of remote monitoring through Wi-Fi.

Flowchart – Flood Detection System

System Flow

The following flowchart explains the operation of the ESP32-based flood detection system.

flowchart TD
    A([Start]) --> B[Initialize ESP32 and Sensor]
    B --> C[Read Ultrasonic Sensor]
    C --> D{Valid Reading?}
    D -- No --> E[Display Sensor Error]
    E --> C
    D -- Yes --> F[Calculate Water Level]
    F --> G{Danger Level?}
    G -- Yes --> H[Activate Buzzer - Danger]
    G -- No --> I{Warning Level?}
    I -- Yes --> J[Activate Buzzer - Warning]
    I -- No --> K[Display Normal Level]
    H --> L[Display Water Level]
    J --> L
    K --> L
    L --> C

Explanation

1. Start the system.
2. Initialize the ESP32 and ultrasonic sensor.
3. Read the distance from the water surface.
4. Check whether the sensor reading is valid.
5. Calculate the estimated water level.
6. Compare the reading with warning and danger thresholds.
7. Activate the buzzer when necessary.
8. Display the water-level information.
9. Repeat the monitoring process continuously.

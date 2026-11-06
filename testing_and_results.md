Testing and Results – Flood Detection System

1. Introduction

Testing is performed to check whether the ESP32-based flood detection system can measure water levels and generate alerts correctly.

2. Testing Procedure

Test Case 1: Normal Water Level

- Condition: Water is below the warning threshold.
- Expected Result: The system displays NORMAL and the buzzer remains OFF.

Test Case 2: Warning Water Level

- Condition: Water reaches the warning threshold.
- Expected Result: The system displays WARNING and activates the buzzer.

Test Case 3: Danger Water Level

- Condition: Water reaches the danger threshold.
- Expected Result: The system displays DANGER and activates the buzzer.

Test Case 4: Sensor Error

- Condition: The ultrasonic sensor does not return a valid reading.
- Expected Result: The system displays a sensor reading error.

3. Expected Results

Test Condition| Expected Output
Normal| Safe water level
Warning| Warning alert
Danger| Flood danger alert
Invalid reading| Sensor error

4. Performance Evaluation

The prototype should be evaluated for:

- Sensor measurement accuracy.
- Response time.
- Alert reliability.
- Continuous monitoring performance.

5. Conclusion

The testing process helps evaluate the performance of the proposed flood detection prototype. Actual results should be recorded after testing the hardware under different water-level conditions.

/*
  Project: Flood Detection System Using IoT
  Controller: ESP32
  Sensor: HC-SR04 Ultrasonic Sensor
*/

#define TRIG_PIN 5
#define ECHO_PIN 18
#define BUZZER_PIN 19

// Distance from sensor to water surface
const float NORMAL_DISTANCE = 100.0;

// Flood warning thresholds
const float WARNING_DISTANCE = 40.0;
const float DANGER_DISTANCE = 20.0;

float distanceCm;

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Flood Detection System Started");
}

float readDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duration == 0) {
    return -1;
  }

  return duration * 0.0343 / 2;
}

void loop() {
  distanceCm = readDistance();

  if (distanceCm < 0) {
    Serial.println("Sensor reading error");
    digitalWrite(BUZZER_PIN, LOW);
  }
  else {
    float waterLevel = NORMAL_DISTANCE - distanceCm;

    Serial.print("Distance: ");
    Serial.print(distanceCm);
    Serial.println(" cm");

    Serial.print("Estimated water level: ");
    Serial.print(waterLevel);
    Serial.println(" cm");

    if (distanceCm <= DANGER_DISTANCE) {
      Serial.println("DANGER! FLOOD LEVEL HIGH!");
      digitalWrite(BUZZER_PIN, HIGH);
    }
    else if (distanceCm <= WARNING_DISTANCE) {
      Serial.println("WARNING! Water level rising!");
      digitalWrite(BUZZER_PIN, HIGH);
    }
    else {
      Serial.println("NORMAL: Water level safe");
      digitalWrite(BUZZER_PIN, LOW);
    }
  }

  Serial.println("----------------------");
  delay(2000);
}

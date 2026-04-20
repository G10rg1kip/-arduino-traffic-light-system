# -arduino-traffic-light-system
    “Arduino-based smart traffic light system with pedestrian mode and buzzer alert”
    # Arduino Traffic Light System

##Overview
This project simulates a smart traffic light using Arduino with:
- Automatic timing
- Pedestrian button
- Buzzer alert

##Components
- Arduino Uno
- LEDs (Red, Yellow, Green)
- Resistors
- Push button
- Buzzer


## Code
int red = 8;
int yellow = 9;
int green = 10;
int button = 2;
int buzzer = 6;

// Timing
unsigned long previousMillis = 0;
int state = 0;
bool pedestrianRequest = false;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // Check button press
  if (digitalRead(button) == LOW) {
    pedestrianRequest = true;
  }


##Features
- Normal traffic cycle
- Pedestrian override (button)
- Audio signal using buzzer
- Non-blocking timing (advanced)

##Future Improvements
- Add sensors (car detection)
- IoT integration
- LCD display

##Author
Giorgi

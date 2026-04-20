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

  // 🔘 Check button press
  if (digitalRead(button) == LOW) {
    pedestrianRequest = true;
  }

#include <WiFi.h>
#include <WebServer.h>
#include <ESP32Servo.h>

const char* ssid = "GalaxyA34"; // Replace with your WiFi SSID
const char* password = "12345678"; // Replace with your WiFi password

WebServer server(80);
Servo myservo;
const int servoPin = 16; // Change to your servo pin
const int ledPin1 = 18;
const int ledPin2 = 19;
const int moveAngle = 90; // Angle to move the servo
const int returnAngle = 0; // Return angle
const int lockAngle = 0; // Lock position
const int unlockAngle = 50; // Unlock position

bool flashing = false;

void handleSearch() {
  flashing = true;
  server.send(200, "text/plain", "LEDs flashing continuously!");
}

void handleStop() {
  flashing = false;
  server.send(200, "text/plain", "LEDs stopped flashing.");
  digitalWrite(ledPin1, LOW); //Ensure the LEDs are off when stopping.
  digitalWrite(ledPin2, LOW);
}

void handleNotFound() {
  server.send(404, "text/plain", "Not found");
}

void handleMove() {
  Serial.println("Move button pressed");
  myservo.write(moveAngle);
  delay(500);
  myservo.write(returnAngle);
  server.send(200, "text/plain", "Servo moved");
}

void handleLock() {
  Serial.println("Lock button pressed");
  myservo.write(lockAngle);
  server.send(200, "text/plain", "Servo locked");
}

void handleUnlock() {
  Serial.println("Unlock button pressed");
  myservo.write(unlockAngle);
  server.send(200, "text/plain", "Servo unlocked");
}

void handleRed() {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  server.send(200, "text/plain", "Red LED ON");
}

void handleGreen() {
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin1, HIGH);
  server.send(200, "text/plain", "Green LED ON");
}


void setup() {
  Serial.begin(921600);
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);

  myservo.attach(servoPin, 500, 2400);
  myservo.write(returnAngle); // Initialize at return angle
  delay(1000);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.on("/search", handleSearch);
  server.on("/stop", handleStop); // Add the /stop endpoint
  server.onNotFound(handleNotFound);

  server.on("/red", handleRed);
  server.on("/green", handleGreen);

  server.on("/move", handleMove);
  server.on("/lock", handleLock);
  server.on("/unlock", handleUnlock);
  server.begin();
  Serial.println("Web server started");
}

void loop() {
  server.handleClient();

  server.handleClient();

  if (flashing) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(500);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    delay(500);
  }
}


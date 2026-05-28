#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11);

int relay1 = 2;
int relay2 = 3;
int relay3 = 4;
int relay4 = 5;
int led = 6;

char data;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(led, OUTPUT);

  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(led, LOW);

  BT.begin(9600);
}

void loop() {
  if (BT.available()) {
    data = BT.read();

    if (data == '1') {
      digitalWrite(relay1, LOW);
    }

    if (data == '2') {
      digitalWrite(relay1, HIGH);
    }

    if (data == '3') {
      digitalWrite(relay2, LOW);
    }

    if (data == '4') {
      digitalWrite(relay2, HIGH);
    }

    if (data == '5') {
      digitalWrite(relay3, LOW);
    }

    if (data == '6') {
      digitalWrite(relay3, HIGH);
    }

    if (data == '7') {
      digitalWrite(relay4, LOW);
    }

    if (data == '8') {
      digitalWrite(relay4, HIGH);
    }

    if (data == '9') {
      digitalWrite(led, HIGH);
    }

    if (data == '0') {
      digitalWrite(led, LOW);
    }
  }
}
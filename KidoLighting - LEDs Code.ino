// KidoLighting - The LED's Circuit
// MDes in Digital Future, OCAD University
// Emotive Objects Project - Creation & Computation Course, Nick Pucket
// Mona Safari, Victoria Gottardi, Firaas Khan


#define t 100
void setup() {
  for (byte a = 2; a <= 13; a++) {
    pinMode(a, OUTPUT);
  }
}

void loop() {
  Pattern1(2);
  Pattern2(2);
  Pattern3(2);
  Pattern4(2);
  Pattern5(2);
  Pattern6(2);
  Pattern7(2);
  Pattern8(2);

}
void Pattern1(byte a) {
  for (byte j = 0; j <= a; j++) {
    for (byte i = 2; i <= 13; i++) {
      digitalWrite(i, HIGH);
      delay(t);
      digitalWrite(i, LOW);
    }
    for (byte z = 12; z > 2; z--) {
      digitalWrite(z, HIGH);
      delay(t);
      digitalWrite(z, LOW);
    }
  }

}
void Pattern2(byte a) {
  for (byte j = 0; j <= a; j++) {
    for (byte i = 2; i <= 13; i++) {
      digitalWrite(i, HIGH);
      digitalWrite(i + 1, HIGH);
      digitalWrite(i + 2, HIGH);
      delay(t);
      digitalWrite(i, LOW);
      digitalWrite(i - 1, LOW);
      digitalWrite(i - 2, LOW);
    }
    for (byte z = 12; z > 2; z--) {
      digitalWrite(z, HIGH);
      digitalWrite(z - 1, HIGH);
      digitalWrite(z - 2, HIGH);
      delay(t);
      digitalWrite(z, LOW);
      digitalWrite(z - 1, LOW);
      digitalWrite(z - 2, LOW);
    }
  }

}
void Pattern3(byte a) {
  for (byte j = 0; j <= a; j++) {
    for (byte i = 2; i <= 13; i++) {
      digitalWrite(i, HIGH);
      delay(t);
    }
    for (byte z = 13; z > 2; z--) {
      digitalWrite(z, LOW);
      delay(t);
    }
  }
}
void Pattern4(byte a) {
  for (byte j = 0; j <= a; j++) {
    for (byte i = 2; i <= 13; i++) {
      digitalWrite(i, HIGH);
      delay(t);
    }
    for (byte x = 2; x <= 13; x++) {
      digitalWrite(x, LOW);
      delay(t);
    }
    for (byte y = 13; y > 2; y--) {
      digitalWrite(y, HIGH);
      delay(t);
    }
    for (byte z = 13; z > 2; z--) {
      digitalWrite(z, LOW);
      delay(t);
    }
  }
}
void Pattern5(byte a) {
  for (byte j = 0; j <= a; j++) {
    int leds [12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    for (byte i = 0; i <= 13; i++) {
      digitalWrite(leds[i], HIGH);
    }
    delay(t);
    for (byte i = 0; i <= 13; i++) {
      digitalWrite(leds[i], LOW);
    }
    delay(t);
  }
}
void Pattern6(byte a) {
  for (byte w = 0; w <= 3; w++) {
    int leds [12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    for (byte i = 0; i <= 7; i++) {
      digitalWrite(leds[i], HIGH);
    }
    delay(t);
    for (byte i = 0; i <= 7; i++) {
      digitalWrite(leds[i], LOW);
    }
    delay(t);
    for (byte x = 8; x <= 13; x++) {
      digitalWrite(leds[x], HIGH);
    }
    delay(t);
    for (byte x = 8; x <= 13; x++) {
      digitalWrite(leds[x], LOW);
    }
    delay(t);
  }
}
void Pattern7(byte a) {
  for (byte j = 0; j <= a; j++) {
    byte w = 6;
    for (byte i = 2; i <= 7; i++) {
      digitalWrite(i, HIGH);
      digitalWrite(i + w, HIGH);
      delay(t);
      digitalWrite(i, LOW);
      digitalWrite(i + w, LOW);
    }
  }
}
void Pattern8(byte a) {
  for (byte j = 0; j <= a; j++) {
    byte w = 6;
    for (byte i = 2; i <= 7; i++) {
      digitalWrite(i, HIGH);
      digitalWrite(i + w, HIGH);
      delay(t);
      digitalWrite(i, LOW);
      digitalWrite(i + w, LOW);
    }
    byte u = 6;
    for (byte x = 6; x > 2; x--) {
      digitalWrite(x, HIGH);
      digitalWrite(x + u, HIGH);
      delay(t);
      digitalWrite(x, LOW);
      digitalWrite(x + u, LOW);
    }
  }
}
const unsigned int
A_PIN = 2,
B_PIN = 3,
C_PIN = 4,
D_PIN = 5,
E_PIN = 6,
F_PIN = 7,
G_PIN = 8;
const unsigned int
DIGIT_1 = 12,
DIGIT_2 = 11,
DIGIT_3 = 10;

struct ledDisplay {
  void (*first)();
  void (*second)();
  void (*third)();
} digits;

void one() {
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(G_PIN, HIGH);
}

void two() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, HIGH);
  digitalWrite(D_PIN, LOW);
  digitalWrite(E_PIN, LOW);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(G_PIN, LOW);
}

void three() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, LOW);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(G_PIN, LOW);
}

void four() {
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, LOW);
  digitalWrite(G_PIN, LOW);
}

void five() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, LOW);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, LOW);
  digitalWrite(G_PIN, LOW);
}

void six() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, LOW);
  digitalWrite(E_PIN, LOW);
  digitalWrite(F_PIN, LOW);
  digitalWrite(G_PIN, LOW);
}

void seven() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(G_PIN, HIGH);
}

void eight() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, LOW);
  digitalWrite(E_PIN, LOW);
  digitalWrite(F_PIN, LOW);
  digitalWrite(G_PIN, LOW);
}

void nine() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, LOW);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, LOW);
  digitalWrite(G_PIN, LOW);
}

void zero() {
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(D_PIN, LOW);
  digitalWrite(E_PIN, LOW);
  digitalWrite(F_PIN, LOW);
  digitalWrite(G_PIN, HIGH);
}

void setup() {
  pinMode(A_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
  pinMode(C_PIN, OUTPUT);
  pinMode(D_PIN, OUTPUT);
  pinMode(E_PIN, OUTPUT);
  pinMode(F_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(G_PIN, HIGH);

  pinMode(DIGIT_1, OUTPUT);
  pinMode(DIGIT_2, OUTPUT);
  pinMode(DIGIT_3, OUTPUT);
  digitalWrite(DIGIT_1, LOW);
  digitalWrite(DIGIT_2, LOW);
  digitalWrite(DIGIT_3, LOW);

  digits.first = six;
  digits.second = six;
  digits.third = six;
}

void loop() {
  static const unsigned int d = 3;
  digitalWrite(DIGIT_3, LOW);
  digitalWrite(DIGIT_1, HIGH);
  digits.first();
  delay(d);
  digitalWrite(DIGIT_1, LOW);
  digitalWrite(DIGIT_2, HIGH);
  digits.second();
  delay(d);
  digitalWrite(DIGIT_2, LOW);
  digitalWrite(DIGIT_3, HIGH);
  digits.third();
  delay(d);
}

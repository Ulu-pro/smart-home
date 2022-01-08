#define x1 3
#define x2 5
#define x3 7
#define x4 8
#define x5 10

void setup() {
  Serial.begin(9600);
  pinMode(x1, OUTPUT);
  pinMode(x2, OUTPUT);
  pinMode(x3, OUTPUT);
  pinMode(x4, OUTPUT);
  pinMode(x5, OUTPUT);
  digitalWrite(x1, 0);
  digitalWrite(x2, 0);
  digitalWrite(x3, 0);
  digitalWrite(x4, 0);
  digitalWrite(x5, 0);
}

void loop() {
  while (!Serial.available()) {}
  byte x = Serial.parseInt();
       if (x == 10) digitalWrite(x1, 0);
  else if (x == 11) digitalWrite(x1, 1);

  else if (x == 20) digitalWrite(x2, 0);
  else if (x == 21) digitalWrite(x2, 1);

  else if (x == 30) digitalWrite(x3, 0);
  else if (x == 31) digitalWrite(x3, 1);

  else if (x == 40) digitalWrite(x4, 0);
  else if (x == 41) digitalWrite(x4, 1);

  else if (x == 50) digitalWrite(x5, 0);
  else if (x == 51) digitalWrite(x5, 1);
}
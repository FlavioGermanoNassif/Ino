float dly = 500;
int stat = 0;

void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (stat == 0) {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  if (stat == 1) {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }

  digitalWrite(6 , HIGH);
  delay(dly);
  digitalWrite(6 , LOW);
  delay(dly);

  if (stat == 0) {
    dly -= 50;
  } else if (stat == 1) {
    dly += 100;
  }

  if (dly < 50 && stat == 0) {
    dly = 500;
    stat = 1;
  }
  else if (dly > 1000 && stat == 1) {
    dly = 500;
    stat = 0;
  }
}

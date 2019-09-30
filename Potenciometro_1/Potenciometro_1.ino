float valLido = 0;
float dly;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valLido = analogRead(A0);
  dly = map(valLido, 0, 1023, 1000, 2000);
  Serial.println(valLido);
  Serial.println(dly);

  
  digitalWrite(6,HIGH);
  delay(dly);
  
  valLido = analogRead(A0);
  digitalWrite(6,LOW);
  delay(dly);
}

void setup() {
  // put your setup code here, to run once:
pinMode(1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(1,HIGH);
delay(250);
digitalWrite(1,LOW);
delay(250);
digitalWrite(1,HIGH);
delay(25);
digitalWrite(1,LOW);
delay(25);

delay(50);
}

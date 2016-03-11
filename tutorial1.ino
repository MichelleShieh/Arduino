/*
 * M Xie
 * Arduino first coding
 * turn light on
 */
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //make pin 13 as output

}

void loop() {
  // put your main code here, to run repeatedly:
  //put pin transfer between high/low, and last for 1 sec
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);

}

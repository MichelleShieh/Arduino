/*
 * M Xie
 * print out text to the pc
 */
int cnt=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("While loop");

  /*
  while (cnt<10) {
    Serial.println("loop number:");
    Serial.println(cnt);
    cnt++;
    delay(1000);
  }
  */

  cnt=0;
  for (; cnt<10; cnt++) {
    Serial.println(cnt);
    delay(1000);
  }
  
  Serial.println("Hello World");
  delay(1000);
}

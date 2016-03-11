void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  int reading = analogRead(A0);
  float volts = (5.0*reading)/1024;
  float temp = volts * 100.0;
  Serial.println(temp);
  
  delay(500);
  */
  float temperature = gettemp();
  if (temperature>23) {
    digitalWrite(1,1);
    digitalWrite(2,0);  
  }
  else {
    digitalWrite(1,0);
    digitalWrite(2,1);
  }
  gettemp();
  delay(500);
}

void gettemp(){
  float temp = 0;
  for ( int i=0;i<20;i++) {
    temp+=analogRead(A0);
  }
    temp/=20.0;
    temp = (temp/1024.0)*500/11;
    Serial.print(temp);
    Serial.println("degrees C");
}


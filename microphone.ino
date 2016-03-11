/*
 * written by M Xie
 * content: take volotage from the microphone
 */

int sampleWindow = 50; //1/T = f; 1/50^-3=20Hz
unsigned int sample;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  sample = analogRead(0); //A0 pin
  Serial.println(sample); //print your result to Serial
  delay(500);
  */
  long startMillis = millis(); //start of sample windows
  int peakToPeak = 0; //peak to peak level 1

  int signalMax = 0;
  int signalMin =1024;
  while (millis() -startMillis <sampleWindow) {
    sample = analogRead(0);
    if (sample < 1024) {
      if (sample > signalMax) {
        signalMax=sample;
      }
      if (sample < signalMin) {
        signalMin=sample;
      }
    }
  }
  peakToPeak = signalMax- signalMin;
  float volts = (peakToPeak * 3.3) / 1024;
  Serial.println(volts);
  delay(100);
}

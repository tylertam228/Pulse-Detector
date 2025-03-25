boolean countStatus;
int beat, bpm;
unsigned long millisBefore;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop() {
  int sensorValue = analogRead(A0);
  if (countStatus == 0) {
    if (sensorValue > 520) {
      digitalWrite(13, HIGH);
      countStatus = 1;
      beat++;
      //Serial.print("Beat : ");
      //Serial.println(beat);
    }
  } 
  else{
    digitalWrite(13, LOW);
    if (sensorValue < 500) {
      countStatus = 0;
    }
  }

  if (millis()-millisBefore> 15000 ){
    bpm=beat * 4;
    Serial.print("Signal Level:");
    Serial.print(sensorValue);
    Serial.print(",Pulse Rate: ");
    Serial.println(bpm);
    millisBefore=millis();
    beat=0;
  }
  delay(300); 
}
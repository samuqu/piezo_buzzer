
void setup() {
  // initialize serial communications (for debugging only):
  Serial.begin(9600);

}
void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorReading*255/1023);
  // map the analog input range (in this case, 400 - 1000 from the photoresistor)
  // to the output pitch range (120 - 1500Hz)
  // change the minimum and maximum input numbers below
  // depending on the range your sensor's giving:
  int thisPitch = map(sensorReading, 0, 127, 200, 2000);

  // play the pitch:
  tone(10, thisPitch);
  delay(20);       // delay in between reads for stability
}







SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  Serial.begin(9600);   
  pinMode(D5,OUTPUT);
  // Put initialization like pinMode and begin functions here.  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  uint16_t value; 
  value = analogRead(A5);
  Serial.println(value); 
  digitalWrite(D5,HIGH);
  delay(value);
  digitalWrite(D5,LOW) ;
  delay(value);

  // The core of your code will likely live here.

}
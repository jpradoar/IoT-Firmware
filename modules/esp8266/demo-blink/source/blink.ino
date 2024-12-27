int serialbaud = 115200;

void setup() {
  Serial.begin(serialbaud);
  Serial.println("Starting...");
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  Serial.println("LED_BUILTIN, HIGH");
  delay(1000);                    
  digitalWrite(LED_BUILTIN, LOW);  
  Serial.println("LED_BUILTIN, LOW");
  delay(1000); 
}

int poti = A0;
int poti_val = 0x00;
int pwmPin = 9;


void setup() {
  Serial.begin(9600);
  pinMode(pwmPin, OUTPUT);

}

void loop() {
  poti_val = analogRead(poti);
  analogWrite(pwmPin, poti_val / 2);


  
  Serial.println(poti_val);
  delay(500);
  

}

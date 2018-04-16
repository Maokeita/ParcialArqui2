int potPin = 0;
int val = 0;
void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}
void loop() {
  val = (analogRead(potPin))/93;
  Serial.println(val);
  if (val == 0){
    Serial.println("0");
  }
  if (val == 1){
    Serial.println("1");
  }
  if (val == 2){
    Serial.println("2");
  }
  if (val == 3){
    Serial.println("3");
  }
  if (val == 4){
    Serial.println("4");
  }
  if (val == 5){
    Serial.println("5");
  }
  if (val == 6){
    Serial.println("6");
  }
  if (val == 7){
    Serial.println("7");
  }
  if (val == 8){
    Serial.println("8");
  }
  if (val == 9){
    Serial.println("9");
  }
  delay(5000);
}

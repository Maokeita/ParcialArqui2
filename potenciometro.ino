int potPin = 0;
int val = 0;
void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);//? para que una salida
}
void loop() {
  val = (analogRead(potPin))/102;//los valores estan entre 0 - 1023, lo puede deviri 103 para que salga 0 - 10 o usar map()
  Serial.println(val);
  delay(1000);//mucha espera una mas corta es suficiente
}

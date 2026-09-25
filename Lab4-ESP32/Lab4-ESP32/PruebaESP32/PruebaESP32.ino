
const int LED_PIN = 2;  

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  delay(1000);

  Serial.println("PRUEBA DE FUNCIONAMIENTO ESP32");
  Serial.println("JAIME ARTURO MAGANA NERIO");
  Serial.println("Carnet: 00077320");
  Serial.println();
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);

  Serial.print("ESP32 funcionando - Tiempo: ");
  Serial.print(millis() / 1000);
  Serial.println(" s");
}

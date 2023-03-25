#include <WiFi.h>

const char * ssid = "virus";
const char * password = "a1b2c3d4";


void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a la red WiFi...");
  }
  Serial.println("Conectada a una red Wifi.");
  

}
void loop() {
  int numero = 10;
  int *puntero = &numero;
  Serial.print("El valor es: ");
  Serial.println(numero);
  Serial.print("La dirección de memoria de puntero es: ");
  Serial.printf("%p\n", (void*)puntero);
  Serial.print("El valor de *puntero es: ");
  Serial.println(*puntero);
  duplicar( &numero ); 
}
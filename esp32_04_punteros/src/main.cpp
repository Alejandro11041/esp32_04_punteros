#include <Arduino.h>
#include <WiFi.h>


const char * ssid = "virus";
const char * password = "a1b2c3d4";

void setup() {
  pinMode(2, OUTPUT);  //Coloco el pin 2 como salida
  Serial.begin(115200);
  Serial.println("Inicializando dispositivo");
  WiFi.begin(ssid, password);
  Serial.println("Estableciendo vinculo con el AP.");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(1000);
  }
  Serial.println("\r\nConexion establecida");
}

/**
 * @brief Esta funcion es un bucle infinito que corresponde al main()
 * 
 */


int numero = 10;
void loop() {
Serial.print(“En loop(): numero = “); //En loop(): numero = 10
Serial.println(numero);
duplicar( &numero ); // Pasamos la dirección de numero a la función
}
void duplicar(int *punteroNumero) {
*punteroNumero = *punteroNumero * 2 ;
Serial.print(“En duplicar(): punteroNumero = “);
Serial.println(*punteroNumero);

/*
char institucion[] = { ‘U',’C’,’E',’V',’A',’\n’} ;
for (int i=0 ; i < 6 ; i++)
Serial.print( institucion[i] );
// Serial.print( *(institucion + i) );
// Serial.print( *( institucion + i * sizeof(char)) );
Serial.flush();
exit(0);

*/

}
#include <BitsAndDroidsFlightConnector.h>
BitsAndDroidsFlightConnector connector = BitsAndDroidsFlightConnector();



const int aceleradorPin = A1;


int valorAcelerador = 0; 
void setup() {
  pinMode(aceleradorPin, INPUT);
  Serial.begin(115200);
  // connector.setEMA_a(0.15);
}

void loop() {
  // valorAcelerador = map(analogRead(aceleradorPin), 0, 1023, 0, 100);  
  connector.simpleInputHandling(aceleradorPin);
  // Serial.println(valorAcelerador);
  // delay(10);
}

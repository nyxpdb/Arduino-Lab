#include <IRremote.h>

const int RECV_PIN = 7;
const int LED1_PIN = 8;
const int LED2_PIN = 9;

bool estadoLed1 = LOW;
bool estadoLed2 = LOW;

void setup() {
  Serial.begin(9600);
  
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);
  Serial.println("Receptor IR iniciado. Aguardando sinal do controle remoto...");
}

void loop() {
  if (IrReceiver.decode()) {
    //Serial.print("Sinal recebido: 0x");
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);

    switch (IrReceiver.decodedIRData.decodedRawData) {
      case 0xBA45FF00:
        estadoLed1 = !estadoLed1;
        digitalWrite(LED1_PIN, estadoLed1);
        if (estadoLed1 == HIGH) {
          Serial.println("Status: LED 1 LIGADO");
        } else {
          Serial.println("Status: LED 1 DESLIGADO");
        }
        break;

      case 0xB946FF00:
        estadoLed2 = !estadoLed2;
        digitalWrite(LED2_PIN, estadoLed2);
        if (estadoLed2 == HIGH) {
          Serial.println("Status: LED 2 LIGADO");
        } else {
          Serial.println("Status: LED 2 DESLIGADO");
        }
        break;
    }

    IrReceiver.resume();
  }
}
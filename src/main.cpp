#include <M5Stack.h>
#include <WiFi.h>
#include <BluetoothSerial.h>

void setup() {
    M5.begin(); // Inicializa M5Stack
    Serial.begin(115200); // Comunicación serial
    WiFi.begin("SSID", "password"); // Conecta al Wi-Fi
}

void loop() {
    M5.Lcd.print("Proyecto ESP32 iniciado"); // Muestra mensaje en pantalla
    delay(1000);
}

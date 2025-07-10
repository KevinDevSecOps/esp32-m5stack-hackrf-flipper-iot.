#include <BluetoothSerial.h>

BluetoothSerial flipperBT;

void connectFlipper() {
    flipperBT.begin("FlipperZero"); // Inicia conexión Bluetooth
    Serial.println("Conectado a Flipper Zero");
}

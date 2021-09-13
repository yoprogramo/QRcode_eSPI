
#include <SPI.h>
#include <TFT_eSPI.h>
#include <qrcode_eSPI.h>

#define TFTMODEL INITR_144GREENTAB

TFT_eSPI display = TFT_eSPI();
QRcode_eSPI qrcode (&display);


void setup() {

    Serial.begin(115200);
    Serial.println("");
    Serial.println("Starting...");

    // enable debug qrcode
    // qrcode.debug();
    display.begin();
    // Initialize QRcode display using library
    qrcode.init();
    // create qrcode
    qrcode.create("Hello world.");

}

void loop() { }
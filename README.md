# QRcode_eSPI

Subclass that you can use jointly with https://github.com/yoprogramo/QRcodeDisplay to generate QRcodes in TFT displays like ST7735

To use it:

## In platform.io: 

Add as dependencies:

 * yoprogramo/QRcodeDisplay
 * yoprogramo/QRcode_eSPI
 * bodmer/TFT_eSPI

 ## In arduino ide 
 
 Open Library Manager (menu Sketch > Include Library > Manage Libraries…) then install the following libraries:

 * QRcodeDisplay
 * QRcode_eSPI
 * TFT_eSPI

 Creating a QRcode is just as simple as:

 ```

#include <SPI.h>
#include <TFT_eSPI.h>
#include <qrcode_eSPI.h>

#define TFTMODEL INITR_144GREENTAB

TFT_eSPI display = TFT_eSPI();
QRcode_eSPI qrcode (&display);


void setup() {

    display.begin();
    qrcode.init();
    qrcode.create("Hello world.");

}

 ```

 For other displays, please refer the main repository: https://github.com/yoprogramo/QRcodeDisplay

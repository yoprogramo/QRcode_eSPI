# QRcode_eSPI

Subclass that you can use jointly with https://github.com/yoprogramo/QRcodeDisplay to generate QRcodes in TFT displays like ST7735 and any other supported by TFT_eSPI

To use it:

## In platform.io: 

Add as dependencies:

 * yoprogramo/QRcodeDisplay
 * yoprogramo/QRcode_eSPI
 * bodmer/TFT_eSPI

You can configure in platformio.ini the data about hardware model and connections

 ## In arduino ide 
 
 Open Library Manager (menu Sketch > Include Library > Manage Libraries…) then install the following libraries:

 * QRcodeDisplay
 * QRcode_eSPI
 * TFT_eSPI

Create or update your user_setup to match your hardware specifications.

Creating a QRcode is just as simple as:

 ```

#include <SPI.h>
#include <TFT_eSPI.h>
#include <qrcode_espi.h>

TFT_eSPI display = TFT_eSPI();
QRcode_eSPI qrcode (&display);


void setup() {

    display.begin();
    qrcode.init();
    qrcode.create("Hello world.");

}

 ```

 For other displays, please refer the main repository: https://github.com/yoprogramo/QRcodeDisplay

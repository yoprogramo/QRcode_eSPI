#include <Arduino.h>
#include "qrencode.h"
#include "qrcode_espi.h"


QRcode_eSPI::QRcode_eSPI(TFT_eSPI *display) {
    this->display = display;
}


void QRcode_eSPI::init() {
    //display->init();
    this->screenwidth = display->width();
    this->screenheight = display->height();
    display->fillScreen(TFT_WHITE);
    int min = screenwidth;
    if (screenheight<screenwidth)
        min = screenheight;
    multiply = min/WD;
    offsetsX = (screenwidth-(WD*multiply))/2;
    offsetsY = (screenheight-(WD*multiply))/2;
}

void QRcode_eSPI::screenwhite() {
    display->fillScreen(TFT_WHITE);
}

void QRcode_eSPI::screenupdate() {
    // No hay que hacer nada
}

void QRcode_eSPI::drawPixel(int x, int y, int color) {
    if(color==1) {
        color = TFT_BLACK;
    } else {
        color = TFT_WHITE;
    }
    display->drawPixel(x,y,color);
    if (this->multiply>1) {
        display->fillRect(x,y,multiply,multiply,color);
    }
}
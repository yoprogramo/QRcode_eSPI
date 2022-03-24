#ifndef ESPQRESPI_H
#define ESPQRESPI_H
/* ESP_QRcode. tft version for TFT_eSPI supported displays
 * include this .h if you have a TFT display
 */

#define TFTDISPLAY

#include <TFT_eSPI.h>
#include <SPI.h>
#include "qrcodedisplay.h"

class QRcode_eSPI : public QRcodeDisplay
{
	private:
		TFT_eSPI *display;
        void drawPixel(int x, int y, int color);
	public:
		
		QRcode_eSPI(TFT_eSPI *display);
		void create(String message);
		void init();
		void screenwhite();
		void screenupdate();
};
#endif
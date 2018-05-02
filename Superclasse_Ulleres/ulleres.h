#ifndef __ULLERES_H__
#define __ULLERES_H__

#include "Arduino.h"
#include "Libsensor.h"

class Ulleres
{
	public:
	Ulleres(int sensUltraso, int zumbadors );
	void inicialitzar();

	private:

	int sensorsUltraso;
	int zumbadors;
};

#endif //__ULLERES_H__

#include "Arduino.h"
#include "ulleres.h"
#include "Libsensor.h"

// Constructor de la clase Mascota que es la superClase
Ulleres::Ulleres(int sensUltraso, int zumbadors)
{
	
	sensorsUltraso=sensUltraso;
	zumbadors=zumbadors;
	//Libsensor sensor1(8,7);
}

// Define el método inicialitzar per la classe ulleres
void Ulleres::inicialitzar()
{
	Libsensor sensor1(8,7);
	//array_sensor={sensor1(8,7),sensor2(10,9),sensor3(12,11),sensor4(5,6),sensor5(4,5)};
	sensor1.enviarSo();
	sensor1.rebreSo();
	sensor1.calcularDistancia();
}



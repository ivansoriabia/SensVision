/*
    Avisador.cpp
    Creada per SensVision, 2018/04/26
*/

#include "Arduino.h"
#include "Avisador.h"

Avisador::Avisador(int pin, int temps)
{
    _pin = pin;
    _temps = temps;

    pinMode(_pin, OUTPUT);
    //tone(_pin, _intensitat, _temps);
}

void Avisador::Avisar()
{}
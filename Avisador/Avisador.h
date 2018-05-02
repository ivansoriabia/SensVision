/*
    Avisador.h - Gestió del zumbador
    Creada per SensVision, 2018/04/26
*/

#ifndef Avisador_h
#define Avisador_h
#include "Arduino.h"

class Avisador {

  public:
    Avisador(int pin, int temps);
    void Avisar();

  private:  
    int _pin, 
        _temps;
};
#endif

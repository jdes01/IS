#include "parque.h"

void Parque::addSendero(Sendero sendero){

    senderos_.push_back(&sendero);
}

void Parque::addRuta(Ruta ruta){

    rutas_.push_back(&ruta);
}
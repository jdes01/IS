#include "parque.h"
#include <fstream>

Parque::Parque(std::string nombre, std::string ubicacion, int superficie){

    nombre_=nombre;
    ubicacion_=ubicacion;
    superficie_=superficie;
}

bool Parque::addSenderos(Sendero senderos){

    //Recorremos para comprobar si esta hecho

    for (std::list<Sendero>::iterator i=senderos_.begin(); i!=senderos_.end(); i++){
        if (i->getId()==senderos.getId()){
            return false;
        }
    } 

    senderos_.push_back(senderos);
    return true;   
}
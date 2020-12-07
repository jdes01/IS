#include "parque.h"
#include <string>

Parque::Parque(std::string nombre, std::string ubicacion, float superficie){

    nombre_=nombre;
    ubicacion_=ubicacion;
    superficie_=superficie;
}

bool Parque::addSenderos(Sendero senderos){

    for (std::list<Sendero>::iterator i=senderos_.begin(); i!=senderos_.end(); i++){
        if (i->getId()==senderos.getId()){
            return false;
        }
    } 

    std::fstream f;
    f.open(senderos.getId()+".txt", std::fstream::out);
    if(!f.is_open()){
        return false;
    }

    f.close();
    senderos_.push_back(sendero);
    return true;   
}
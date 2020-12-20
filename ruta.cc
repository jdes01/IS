#include "ruta.h"

void Ruta::addSenderos(Sendero sendero){

    for(std::list<Sendero>::iterator i=senderos_.begin();i!=senderos_.end();i++){

        if((*i).getId()==sendero.getId()){

            EXIT_FAILURE;

        }

    }

    senderos_.push_back(sendero);
}
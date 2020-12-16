#ifndef RUTA_H
#define RUTA_H
#include <string>
#include <string>
#include <list>
#include "sendero.h"
#include "parque.h"

class Ruta{

    private:
        
        std::string nombre;
        std::list<Sendero> senderos;
        std::string id;
        Parque parque;
        int aforo;

    public:



};

#endif
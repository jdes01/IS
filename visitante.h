#ifndef VISITANTE_H
#define VISITANTE_H

#include "persona.h"
#include "fecha.h"
#include "nombre.h"
#include <string>

class Visitante:public Persona{

    private:

        std::string discapacidad_;

    public:

        Visitante(std::string discapacidad);

        inline void setDiscapacidad(std::string discapacidad){discapacidad_=discapacidad;};
        inline std::string getDiscapacidad(){ return discapacidad_; }
};

#endif
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

        Visitante(std::string discapacidad, std::string nombre, std::string primerApellido, std::string segundoApellido,  std::string dni, 
        std::string telefono, int dia, int mes, int ano, std::string direccion, std::string correo)
        :Persona(nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo){

            discapacidad_=discapacidad;
        }

        inline void setDiscapacidad(std::string discapacidad){discapacidad_=discapacidad;};
        inline std::string getDiscapacidad(){ return discapacidad_; }
};

#endif
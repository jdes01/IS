#ifndef MONITOR_H
#define MONITOR_H
#include "persona.h"
#include "fecha.h"
#include "nombre.h"
#include <string>

class Monitor : public Persona{
    
    private:

        std::string id_;

    private:

        Monitor ( std::string id,
                  std::string nombre,           std::string primerApellido,
                  std::string segundoApellido,  std::string dni,
                  std::string telefono,         int dia,
                  int mes,                      int año, 
                  std::string direccion,        std::string correo)
                  
                  :Persona(nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, año, direccion, correo){id_=id;}


};

#endif
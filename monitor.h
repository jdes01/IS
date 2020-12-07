#ifndef MONITOR_H
#define MONITOR_H
#include "persona.h"
#include "fecha.h"
#include "nombre.h"
#include <string>

class Monitor : public Persona{
    
    private:

        std::string id_;

    public:

        Monitor ( std::string nombre,           std::string primerApellido,
                  std::string segundoApellido,  std::string dni,
                  std::string telefono,         int dia,
                  int mes,                      int ano, 
                  std::string direccion,        std::string correo)
                  
                  :Persona(nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo){id_="0";}

        inline std::string getId(){return id_;}


};

#endif
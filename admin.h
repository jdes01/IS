#ifndef ADMIN_H
#define ADMIN_H

#include "persona.h"
#include "parque.h"
#include "sendero.h"
#include "visita.h"
#include "visitante.h"

#include "fecha.h"
#include "nombre.h"
#include <string>

class Admin : public Persona{
    
    private:

        std::string id_;

    public:

        Admin ( std::string nombre,           std::string primerApellido,
                std::string segundoApellido,  std::string dni,
                std::string telefono,         int dia,    
                int mes,                      int ano, 
                std::string direccion="",     std::string correo="")
                  
                :Persona(nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo){id_="0";}

        inline std::string getId(){return id_;}
        inline void setId(std::string id){id_=id;}

        void crearParque();
        void editarParque(std::string id);
        void eliminarParque(std::string id);

        void crearSendero(Parque parque);
        void editarSendero(std::string id);
        void eliminarSendero(std::string id);

        void crearMonitor();
        void editarMonitor(std::string id);
        void eliminarMonitor(std::string id);

        void crearVisita(Ruta ruta);
        void editarVisita(std::string id);
        void eliminarVisita(std::string id);

        void crearVisitante();
        void editarVisitante(std::string dni);
        void eliminarVisitante(std::string dni);

};

#endif
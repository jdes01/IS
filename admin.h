#ifndef ADMIN_H
#define ADMIN_H

#include "persona.h"
#include "parque.h"
#include "sendero.h"
#include "visita.h"
#include "visitante.h"
#include "ruta.h"

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
        void editarParque(Parque parque);
        void eliminarParque(Parque parque);

        void crearSendero(Parque parque);
        void editarSendero(Sendero sendero);
        void eliminarSendero(Sendero sendero);

        void crearMonitor();
        void editarMonitor(Monitor monitor);
        void eliminarMonitor(Monitor monitor);

        void crearVisita(Ruta ruta, Monitor monitor);
        void editarVisita(Visita visita);
        void eliminarVisita(Visita visita);

        void crearVisitante();
        void editarVisitante(Visitante visitante);
        void eliminarVisitante(Visitante visitante);

};

#endif
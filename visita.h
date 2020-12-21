#ifndef VISITA_H
#define VISITA_H

#include <string>
#include "fecha.h"
#include "nombre.h"

#include "visita.cc"
#include "fecha.h"
#include "ruta.h"
#include "monitor.h"

class Visita{

    private:

        fecha fecha_;
        int aforo_;
        int plazasLibres_;
        std::string id_;

        std::list <Visitante*> visitantes_;
        Ruta * ruta_;
        Monitor * monitor_;
        

    public:

        Visita(int aforo, int dia, int mes, int ano, Ruta ruta, Monitor monitor){

            id_ = "0";
            plazasLibres_ = 0;
            aforo_ = aforo;
            ruta_ = &ruta;
            monitor_ = &monitor;

            fecha_.dia = dia;
            fecha_.mes = mes;
            fecha_.ano = ano;
        }
    
        inline fecha getFecha(){ return fecha_; }
        inline Ruta getRuta(){ return *ruta_; }
        inline int getAfoto(){ return aforo_; }
        inline int getPlazasLibres(){ return plazasLibres_; }
        inline Monitor getMonitor(){ return *monitor_; }
        inline std::string getId(){ return id_; }

        inline std::list<Visitante*> getVisitantes(){ return visitantes_; }
 

        inline void setFecha(fecha fecha){ fecha_ = fecha; }
        inline void setRuta(Ruta ruta){ ruta_ = &ruta; }
        inline void setAforo(int aforo){ aforo_ = aforo; }
        inline void setPlazasLibres(int plazasLibres){ plazasLibres_ = plazasLibres; }
        inline void setMonitor(Monitor monitor){ monitor_ = &monitor; }
        inline void setId(std::string id){ id_ = id; }

        inline void addVisitante(Visitante visitante){ visitantes_.push_back(&visitante); plazasLibres_--; }

};

#endif
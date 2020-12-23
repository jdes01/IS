#ifndef VISITA_H
#define VISITA_H

#include <string>
#include "fecha.h"
#include "nombre.h"

#include "visita.cc"
#include "fecha.h"
#include "ruta.h"
#include "monitor.h"
#include "visitante.cc"

class Visita{

    private:

        fecha fecha_;
        int aforo_;
        int plazasLibres_;
        std::string id_;

        std::list <Visitante*> visitantes_;

        

    public:

        Visita(int aforo, int dia, int mes, int ano){

            id_ = "0";
            plazasLibres_ = 0;
            aforo_ = aforo;

            fecha_.dia = dia;
            fecha_.mes = mes;
            fecha_.ano = ano;
        }
    
        inline fecha getFecha(){ return fecha_; }

        inline int getAfoto(){ return aforo_; }
        inline int getPlazasLibres(){ return plazasLibres_; }

        inline std::string getId(){ return id_; }

        inline std::list<Visitante*> getVisitantes(){ return visitantes_; }
 

        inline void setFecha(fecha fecha){ fecha_ = fecha; }

        inline void setAforo(int aforo){ aforo_ = aforo; }
        inline void setPlazasLibres(int plazasLibres){ plazasLibres_ = plazasLibres; }

        inline void setId(std::string id){ id_ = id; }

        inline void addVisitante(Visitante visitante){ visitantes_.push_back(&visitante); plazasLibres_--; }

};

#endif
#ifndef VISITA_H
#define VISITA_H

#include <string>

#include "visita.cc"
#include "fecha.h"
//#include "ruta.h"
//#include "monitor.h"

class Visita{

    private:

        fecha fecha_;
        //list <Visitante> visitantes_;
        //Ruta * ruta
        int aforo_;
        int plazasLibres_;
        //Monitor * monitor;
        std::string id_;

    public:

        Visita( std::string id, int aforo, int plazasLibres, fecha fecha);
    
        inline fecha getFecha(){ return fecha_; }
        //inline Ruta getRuta(){ return *ruta_; }
        inline int getAfoto(){ return aforo_; }
        inline int getPlazasLibres(){ return plazasLibres_; }
        //inline Visita getVisitantes(){ return visitantes_; }
        //inline Monitor getMonitor(){ return *monitor_; }
        inline std::string getId(){ return id_; }
 

        void setFecha(fecha fecha);
        //void setRuta();
        void setAforo(int aforo);
        void setPlazasLibres(int plazasLibres);
        //void setVisitantes();
        //void setMonitor();
        void setId(std::string id);  

};

#endif
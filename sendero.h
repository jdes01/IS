#ifndef SENDERO_H
#define SENDERO_H

#include <list>
#include <string>

#include "parque.h"
#include "incidencia.h"

class Sendero{

    private:

        std::string nombre_;
        std::string id_;

        std::list<Incidencia*> incidencias_;

    public:

        Sendero( std::string nombre){
                       
            nombre_ = nombre;
            id_     = "0";
        }
    
        inline std::string getNombre(){ return nombre_; }
        inline std::string getId(){ return id_; }


        inline std::list<Incidencia*> getIncidencias(){ return incidencias_; }

        void setNombre(std::string nombre){ nombre_ = nombre; }
        void setId(std::string id){ id_ = id; }


        void addIncidencia(Incidencia incidencia);

};

#endif
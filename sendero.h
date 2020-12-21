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
        
        Parque * parque_;

        std::list<Incidencia*> incidencias_;

    public:

        Sendero( std::string nombre, Parque parque){
                       
            nombre_ = nombre;
            parque_ = &parque;
            id_     = "0";
        }
    
        inline std::string getNombre(){ return nombre_; }
        inline std::string getId(){ return id_; }
        inline Parque getParque(){ return *parque_; }

        inline std::list<Incidencia*> getIncidencias(){ return incidencias_; }

        void setNombre(std::string nombre){ nombre_ = nombre; }
        void setId(std::string id){ id_ = id; }
        void setParque(Parque parque){ parque_ = &parque; }

        void addIncidencia(Incidencia incidencia);

};

#endif
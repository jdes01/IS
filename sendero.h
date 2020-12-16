#ifndef SENDERO_H
#define SENDERO_H

#include <list>
#include <string>

//#include "parque.h"
//#include "incidencia.h"

class Sendero{

    private:

        std::string nombre_;
        std::string id_;
        
        //Parque parque_;

        //list<Incidencia> incidencias_;

    public:

        Sendero( std::string nombre /*, Parque parque*/ ){
                       
            nombre_ = nombre;
            //parque_ = parque;
            id_     = nombre;
        }
    
        inline std::string getNombre(){ return nombre_; }
        inline std::string getId(){ return id_; }
        //inline Parque getParque(){ return parque_; }

        void setNombre(std::string nombre);
        void setId(std::string id);
        //void setParque(Parque parque);        

};

#endif
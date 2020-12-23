#ifndef RUTA_H
#define RUTA_H

#include <string>
#include <list>

#include "sendero.h"
#include "parque.h"

class Ruta{

    private:
        
        std::string nombre_;
        std::string id_;
        int aforo_;
        std::list<Sendero*> senderos_;
        
    public:

        Ruta(std::string nombre, int aforo){

            nombre_ = nombre;

            aforo_ = aforo;
            id_ = "0";
        }
        
        inline std::string getNombre(){ return nombre_; }
        inline std::string getId(){ return id_; }
        inline int         getAforo(){ return aforo_; }

        
        inline std::list<Sendero*> getSenderos(){ return senderos_; }

        inline void setNombre(std::string nombre){ nombre_=nombre; }
        inline void setId(std::string id){ id_=id; }
        inline void setAforo(int aforo){ aforo_=aforo; }


        void addSendero(Sendero sendero);


};

#endif
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
        Parque * parque_;
        std::list<Sendero*> senderos_;
        
    public:

        Ruta(std::string nombre, int aforo, Parque parque){

            nombre_ = nombre;
            parque_ = &parque;
            aforo_ = aforo;
            id_ = "0";
        }
        
        inline std::string getNombre(){ return nombre_; }
        inline std::string getId(){ return id_; }
        inline int         getAforo(){ return aforo_; }
        inline Parque      getParque(){ return *parque_; }
        
        inline std::list<Sendero*> getSenderos(){ return senderos_; }

        inline void setNombre(std::string nombre){ nombre_=nombre; }
        inline void setId(std::string id){ id_=id; }
        inline void setAforo(int aforo){ aforo_=aforo; }
        inline void setParque(Parque parque){ parque_=&parque; }

        void addSendero(Sendero sendero);


};

#endif
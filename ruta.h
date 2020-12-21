#ifndef RUTA_H
#define RUTA_H
#include <string>
#include <string>
#include <list>
#include "sendero.h"
#include "parque.h"

class Ruta{

    private:
        
        std::string nombre_;
        std::list<Sendero> senderos_;
        std::string id_;
        Parque * parque_;
        int aforo_;

    public:

        Ruta(std::string id, std::string nombre, Parque parque):parque_(parque.getId(), parque.getNombre()){id_=id; nombre_=nombre; aforo_=0;}
        
        inline std::string getNombre(){return nombre_;}
        inline void setNombre(std::string nombre){nombre_=nombre;}
        inline std::string getId(){return id_;}
        inline void setId(std::string id){id_=id;}
        inline int getAforo(){return aforo_;}
        inline void setAforo(int aforo){aforo_=aforo;}
        inline Parque getParque(){return parque_;}
        inline void setParque(Parque parque){parque_=parque;}
        inline std::list<Sendero> getSenderos(){return senderos_;}
        void addSenderos(Sendero sendero);


};

#endif
#ifndef PARQUE_H
#define PARQUE_H

#include <string>
#include <list>
#include "sendero.h"


class Parque{

    private:

        std::string nombre_;
        std::string id_;
        std::string ubicacion_;
        int superficie_;
        std::list <Sendero> senderos_;

    public:

        Parque(std::string nombre, std::string ubicacion = "", int superficie = 0);

        inline std::string getNombre(){ return nombre_;};
        inline std::string getId(){ return id_;};
        inline std::string getUbicacion(){ return ubicacion_;};
        inline int getSuperficie(){ return superficie_;};
        inline std::list <Sendero> getSenderos(){ return senderos_;};

        inline void setNombre(std::string nombre){nombre_=nombre;};
        inline void setId(std::string id){id_=id;};
        inline void setUbicacion(std::string ubicacion){ubicacion_=ubicacion;};
        inline void setSuperficie(int superficie){superficie_=superficie;};
        bool addSenderos(Sendero senderos);
};

#endif
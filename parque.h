#ifndef PARQUE_H
#define PARQUE_H

#include <string>
#include "sendero.h"

class Parque{

    private:

        std::string nombre_;
        std::string id_;
        std::string ubicacion_;
        float superficie_;
        std::list <Sendero> senderos_;

    public:

        Parque(std::string nombre, std::string ubicacion = "", float superficie = "");

        inline std::string getNombre(){ return nombre_;};
        inline std::string getId(){ return id_;};
        inline std::string getUbicacion(){ return ubicacion_;};
        inline float getSuperficie(){ return superficie_;};
        inline std::list <Sendero> getSenderos(){ return senderos_;};

        inline std::string setNombre(std::string nombre){nombre_=nombre;};
        inline std::string setId(std::string id){id_=id;};
        inline std::string setUbicacion(std::string ubicacion){ubicacion_=ubicacion;};
        inline float setSuperficie(float superficie){superficie_=superficie;};
        bool addSenderos(Sendero senderos);
};

#endif
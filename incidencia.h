#ifndef INCIDENCIA_H
#define INCIDENCIA_H
#include "sendero.h"
#include <string>

class Incidencia{
   
    private:

        std::string id_;
        std::string titulo_;
        std::string descripcion_;
        std::string prioridad_;
        Sendero * sendero_;

    public:

        Incidencia(std::string id, std::string titulo, std::string descripcion="", std::string prioridad="", Sendero sendero)
        :sendero_(sendero.getNombre()){id_=id; titulo_=titulo; descripcion_=descripcion; prioridad_=prioridad;}

        inline std::string getId(){return id_;}
        inline void setId(std::string id){id_=id;}

        inline std::string getTitulo(){return titulo_;}
        inline void setTitulo(std::string titulo){titulo_=titulo;}

        inline std::string getDescripcion(){return descripcion_;}
        inline void setDescripcion(std::string descripcion){descripcion_=descripcion;}

        inline std::string getPrioridad(){return prioridad_;}
        inline void setPrioridad(std::string prioridad){prioridad_=prioridad;}

        inline Sendero getSendero(){return sendero_;}
        inline void setSendero(Sendero sendero){sendero_=&sendero;}

};

#endif
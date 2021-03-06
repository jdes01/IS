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



    public:

        Incidencia( std::string titulo,    std::string descripcion, 
                    std::string prioridad){
                        
                        titulo_ = titulo; 
                        descripcion_ = descripcion; 
                        prioridad_ = prioridad;
                        id_ = "0";
    
                    }

        inline std::string getId(){return id_;}
        inline std::string getTitulo(){return titulo_;}
        inline std::string getDescripcion(){return descripcion_;}
        inline std::string getPrioridad(){return prioridad_;}



        inline void setId(std::string id){ id_ = id; }
        inline void setTitulo(std::string titulo){ titulo_ = titulo; }
        inline void setDescripcion(std::string descripcion){ descripcion_ = descripcion; }
        inline void setPrioridad(std::string prioridad){ prioridad_ = prioridad; } 



};

#endif
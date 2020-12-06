#ifndef PERSONA_H
#define PERSONA_H

#include <string>;

#include "date.h"
#include "nombreCompleto.h"

class Persona{

    private:

        nombreCompleto nombre_;
        std::string dni_;
        std::string telefono_;
        date fechaNacimiento_;
        std::string direccion_;
        std::string correo_;

    public:

        Persona( std::string nombre,           std::string primerApellido,
                 std::string segundoApellido,  std::string dni,
                 std::string telefono,         int dia = 0,
                 int mes = 0,                  int año = 0, 
                 std::string direccion = "",   std::string correo = ""); 

        inline nombreCompleto getNombre(){ return nombre_; }                     
        inline std::string getDni(){ return dni_; }                           
        inline std::string getTelefono(){ return telefono_; }                 
        inline date getFechaNacimiento(){ return fechaNacimiento_; }   
        inline std::string getDireccion(){ return direccion_; }               
        inline std::string getCorreo(){ return correo_; }       

        void setNombre(nombreCompleto nombre);
        void setDni(std::string dni);
        void setTelefono(std::string telefono);
        void setFechaNacimiento(date fechaNacimiento);
        void setDireccion(std::string direccion);
        void setCorreo(std::string correo);
};

#endif
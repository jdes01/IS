<<<<<<< HEAD
#ifndef PERSONA_H
#define PERSONA_H

#include <string>

#include "fecha.h"
#include "nombre.h"

class Persona{

    private:

        nombre nombre_;
        std::string dni_;
        std::string telefono_;
        fecha fechaNacimiento_;
        std::string direccion_;
        std::string correo_;

    public:

        Persona( std::string nombre,           std::string primerApellido,
                 std::string segundoApellido,  std::string dni,
                 std::string telefono,         int dia = 0,
                 int mes = 0,                  int ano = 0, 
                 std::string direccion = "",   std::string correo = ""); 

        inline nombre getNombre(){ return nombre_; }                     
        inline std::string getDni(){ return dni_; }                           
        inline std::string getTelefono(){ return telefono_; }                 
        inline fecha getFechaNacimiento(){ return fechaNacimiento_; }   
        inline std::string getDireccion(){ return direccion_; }               
        inline std::string getCorreo(){ return correo_; }       

        void setNombre(nombre nombre);
        void setDni(std::string dni);
        void setTelefono(std::string telefono);
        void setFechaNacimiento(fecha fechaNacimiento);
        void setDireccion(std::string direccion);
        void setCorreo(std::string correo);
};

=======
#ifndef PERSONA_H
#define PERSONA_H

#include <string>

#include "fecha.h"
#include "nombre.h"

class Persona{

    private:

        nombre nombre_;
        std::string dni_;
        std::string telefono_;
        fecha fechaNacimiento_;
        std::string direccion_;
        std::string correo_;

    public:

        Persona( std::string nombre,           std::string primerApellido,
                 std::string segundoApellido,  std::string dni,
                 std::string telefono,         int dia = 0,
                 int mes = 0,                  int ano = 0, 
                 std::string direccion = "",   std::string correo = ""); 

        inline nombre getNombre(){ return nombre_; }                     
        inline std::string getDni(){ return dni_; }                           
        inline std::string getTelefono(){ return telefono_; }                 
        inline fecha getFechaNacimiento(){ return fechaNacimiento_; }   
        inline std::string getDireccion(){ return direccion_; }               
        inline std::string getCorreo(){ return correo_; }       

        void setNombre(nombre nombre);
        void setDni(std::string dni);
        void setTelefono(std::string telefono);
        void setFechaNacimiento(fecha fechaNacimiento);
        void setDireccion(std::string direccion);
        void setCorreo(std::string correo);
};

>>>>>>> be146fe0ca404552b76e390eab76df2db1a3187e
#endif
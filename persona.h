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
                 std::string telefono,         int dia,
                 int mes,                  int ano, 
                 std::string direccion = "",   std::string correo = ""){
                       
                    nombre_.nombre = nombre;
                    nombre_.primerApellido = primerApellido;
                    nombre_.segundoApellido = segundoApellido;

                    dni_ = dni;
                    telefono_ = telefono;

                    fechaNacimiento_.dia = dia;
                    fechaNacimiento_.mes = mes;
                    fechaNacimiento_.ano = ano;
                    
                    direccion_ = direccion;
                    correo_ = correo;
                }

        inline nombre      getNombre(){ return nombre_; }                     
        inline std::string getDni(){ return dni_; }                           
        inline std::string getTelefono(){ return telefono_; }                 
        inline fecha       getFechaNacimiento(){ return fechaNacimiento_; }   
        inline std::string getDireccion(){ return direccion_; }               
        inline std::string getCorreo(){ return correo_; }       

        void setNombre(nombre nombre);
        void setDni(std::string dni);
        void setTelefono(std::string telefono);
        void setFechaNacimiento(fecha fechaNacimiento);
        void setDireccion(std::string direccion);
        void setCorreo(std::string correo);
};

#endif
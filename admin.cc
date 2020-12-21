#include "admin.h"
#include <string>

Persona::Admin( std::string nombre,           std::string primerApellido,
                std::string segundoApellido,  std::string dni,
                std::string telefono,         int dia,
                int mes,                      int ano, 
                std::string direccion,        std::string correo){
                       
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

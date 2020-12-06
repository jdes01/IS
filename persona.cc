#include "persona.h"
#include <string>

Persona::Persona( std::string nombre,           std::string primerApellido,
                  std::string segundoApellido,  std::string dni,
                  std::string telefono,         int dia = 0,
                  int mes = 0,                  int año = 0, 
                  std::string direccion = "",   std::string correo = ""){
                       
                    nombre_.nombre = nombre;
                    nombre_.primerApellido = primerApellido;
                    nombre_.segundoApellido = segundoApellido;
                    dni_ = dni;
                    telefono_ = telefono;
                    fechaNacimiento_.dia = dia;
                    fechaNacimiento_.mes = mes;
                    fechaNacimiento_.año = año;
                    direccion_ = direccion;
                    correo_ = correo;
                }

void Persona::setNombre(nombreCompleto nombre){ nombre_ = nombre; }

void Persona::setDni(std::string dni){ dni_ = dni; }

void Persona::setTelefono(std::string telefono){ telefono_ = telefono; }

void Persona::setFechaNacimiento(date fechaNacimiento){ fechaNacimiento_ = fechaNacimiento; }

void Persona::setDireccion(std::string direccion){ direccion_ = direccion; }

void Persona::setCorreo(std::string correo){ correo_ = correo; }
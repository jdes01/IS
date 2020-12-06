<<<<<<< HEAD
#include "persona.h"
#include <string>

Persona::Persona( std::string nombre,           std::string primerApellido,
                  std::string segundoApellido,  std::string dni,
                  std::string telefono,         int dia,
                  int mes,                      int año, 
                  std::string direccion,        std::string correo){
                       
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

void Persona::setNombre(nombre nombre){ nombre_ = nombre; }

void Persona::setDni(std::string dni){ dni_ = dni; }

void Persona::setTelefono(std::string telefono){ telefono_ = telefono; }

void Persona::setFechaNacimiento(fecha fechaNacimiento){ fechaNacimiento_ = fechaNacimiento; }

void Persona::setDireccion(std::string direccion){ direccion_ = direccion; }

void Persona::setCorreo(std::string correo){ correo_ = correo; }
=======
hola
>>>>>>> a2fa770724235fbb45d6754a227cd1242b4d8560

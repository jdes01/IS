#include "persona.h"
#include <string>

void Persona::setNombre(nombre nombre){ nombre_ = nombre; }

void Persona::setDni(std::string dni){ dni_ = dni; }

void Persona::setTelefono(std::string telefono){ telefono_ = telefono; }

void Persona::setFechaNacimiento(fecha fechaNacimiento){ fechaNacimiento_ = fechaNacimiento; }

void Persona::setDireccion(std::string direccion){ direccion_ = direccion; }

void Persona::setCorreo(std::string correo){ correo_ = correo; }

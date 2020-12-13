#include "visitante.h"
#include <string>

Visitante::Visitante(std::string discapacidad):Persona(nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo){

    discapacidad_=discapacidad;
}
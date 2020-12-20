#include "visita.h"
#include "fecha.h"
#include <string>

Visita::Visita(int aforo, int dia, int mes, int ano, Ruta ruta, Monitor monitor){
                       
            id_ = 0;
            plazasLibres_ = 0;
            aforo_ = aforo;
            ruta_ = &ruta;
            monitor_ = &monitor;
            fechaNacimiento_.dia = dia;
            fechaNacimiento_.mes = mes;
            fechaNacimiento_.ano = ano;
}

void Visita::setFecha(fecha fecha){ fecha_ = fecha; }

void setRuta(Ruta ruta){ ruta_ = &ruta; }

void Visita::setAforo(int aforo){ aforo_ = aforo; }

void Visita::setPlazasLibres(int plazasLibres){ plazasLibres_ = plazasLibres; }

//void setVisitantes(){}

void setMonitor(Monitor monitor){ monitor_ = &monitor; }

void Visita::setId(std::string id){ id_ = id; }
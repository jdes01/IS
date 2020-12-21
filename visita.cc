#include "visita.h"
#include "fecha.h"
#include <string>

void Visita::setFecha(fecha fecha){ fecha_ = fecha; }

void Visita::setRuta(Ruta ruta){ ruta_ = &ruta; }

void Visita::setAforo(int aforo){ aforo_ = aforo; }

void Visita::setPlazasLibres(int plazasLibres){ plazasLibres_ = plazasLibres; }

//void setVisitantes(){}

void Visita::setMonitor(Monitor monitor){ monitor_ = &monitor; }

void Visita::setId(std::string id){ id_ = id; }
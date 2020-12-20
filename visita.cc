#include "visita.h"
#include "fecha.h"
#include <string>

Visita::Visita( std::string id, int aforo, int plazasLibres, fecha fecha){
                       
            id_ = id;
            aforo_ = aforo;
            plazasLibres = plazasLibres;
            fecha_ = fecha;
}

void Visita::setFecha(fecha fecha){ fecha_ = fecha; }

//void setRuta(){}

void Visita::setAforo(int aforo){ aforo_ = aforo; }

void Visita::setPlazasLibres(int plazasLibres){ plazasLibres_ = plazasLibres; }

//void setVisitantes(){}

//void setMonitor(){}

void Visita::setId(std::string id){ id_ = id; }
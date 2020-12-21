#include "monitor.h"
#include "incidencia.h"
#include <iostream>

void Monitor::crearIncidencia(Sendero sendero){

    Incidencia aux("","");

    std::string id, titulo, descripcion, prioridad;
    std::cout<<"Introduzca el id de la incidencia:";
    std::cin>>id;
    aux.setId(id);

    std::cout<<"Introduzca el titulo de la incidencia:";
    std::cin>>titulo;
    aux.setTitulo(titulo);

    std::cout<<"Introduzca la descripción de la incidencia:";
    std::cin>>descripcion;
    aux.setTitulo(descripcion);

    std::cout<<"Introduzca la prioridad de la incidencia:";
    std::cin>>prioridad;
    aux.setTitulo(prioridad);

    aux.setSendero(sendero);
    
    sendero.incidencias_.push_back(aux);
}

void Monitor::editarIncidencia(Incidencia incidencia){

    for(std::list<Incidencia>::iterator i=incidencia.getSendero().getIncidencias().begin();i!=incidencia.getSendero().getIncidencias().end();i++){

        if(incidencia.getId()==(*i).getId()){

        std::string id, titulo, descripcion, prioridad;
        std::cout<<"Introduzca el id de la incidencia:";
        std::cin>>id;
        (*i).setId(id);
        std::cout<<"Introduzca el titulo de la incidencia:";
        std::cin>>titulo;
        (*i).setTitulo(titulo);
        std::cout<<"Introduzca la descripción de la incidencia:";
        std::cin>>descripcion;
        (*i).setTitulo(descripcion);
        std::cout<<"Introduzca la prioridad de la incidencia:";
        std::cin>>prioridad;
        (*i).setTitulo(prioridad);
        }

    }

}

void Monitor::eliminarIncidencia(Incidencia incidencia){
 
    for(std::list<Incidencia>::iterator i=incidencia.getSendero().getIncidencias();i!=incidencia.getSendero().getIncidencias();i++){

        if((*i).getId()==incidencia.getId()){incidencia.getSendero().getIncidencias().erase(i);}

    }

}

void Monitor::crearRuta(Parque parque){

    Parque aux("","");
    std::string nombre, id;
    int aforo;
    std::cout<<"Introduzca el id de la ruta:";
    std::cin>>id;
    aux.setId(id);
    std::cout<<"Introduzca el nombre de la ruta:";
    std::cin>>nombre;
    aux.setNombre(nombre);
    std::cout<<"Introduzca el aforo de la ruta:";
    std::cin>>aforo;
    aux.setAforo(aforo);
    aux.setParque(parque);
    parque.rutas_.push_back(aux);
}

void Monitor::editarRuta(Ruta ruta){

            std::string nombre, id;
            int aforo;
            std::cout<<"Introduzca el id de la ruta:";
            std::cin>>id;
            ruta.setId(id);
            std::cout<<"Introduzca el nombre de la ruta:";
            std::cin>>nombre;
            ruta.setNombre(nombre);
            std::cout<<"Introduzca el aforo de la ruta:";
            std::cin>>aforo;
            ruta.setAforo(aforo);

}

void Monitor::eliminarRuta(Ruta ruta){



}
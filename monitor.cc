#include "monitor.h"
#include "incidencia.h"
#include "ruta.h"
#include <iostream>

void Monitor::crearIncidencia(Sendero sendero){

    std::string titulo, descripcion, prioridad;

    std::cout<<"introduzca el Titulo: ";
    std::cin>>titulo;

    std::cout<<"introduzca la descripcion: ";
    std::cin>>descripcion;
    
    std::cout<<"introduzca la prioridad: ";
    std::cin>>prioridad;

    Incidencia incidencia(titulo, descripcion, prioridad, sendero);

    sendero.addIncidencia(incidencia);
}

void Monitor::editarIncidencia(Incidencia incidencia){

    std::string titulo, descripcion, prioridad;

    std::cout<<"introduzca el Titulo: ";
    std::cin>>titulo;

        incidencia.setTitulo(titulo);

    std::cout<<"introduzca la descripcion: ";
    std::cin>>descripcion;

        incidencia.setDescripcion(descripcion);
    
    std::cout<<"introduzca la prioridad: ";
    std::cin>>prioridad;

        incidencia.setPrioridad(prioridad);

}

void Monitor::eliminarIncidencia(Incidencia incidencia){}

void Monitor::crearRuta(Parque parque){

    std::string nombre;
    int aforo;

    std::cout<<"introduzca el nombre: ";
    std::cin>>nombre;

    std::cout<<"introduzca el aforo: ";
    std::cin>>aforo;

    Ruta ruta(nombre, aforo, parque);

    parque.addRuta(ruta);
}

void Monitor::editarRuta(Ruta ruta){

    std::string nombre;
    int aforo;

    std::cout<<"introduzca el nombre: ";
    std::cin>>nombre;

        ruta.setNombre(nombre);

    std::cout<<"introduzca el aforo: ";
    std::cin>>aforo;

        ruta.setAforo(aforo);
}

void Monitor::eliminarRuta(Ruta ruta){}


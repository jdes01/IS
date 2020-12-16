#include "monitor.h"
#include "incidencia.h"

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

void Monitor::editarIncidencia(std::string id){

    Sendero aux("/0","/0");
    for(std::list<Incidencia>::iterator i=incidencias_.begin();i!=incidencias_.end();i++){

        if(id==(*i).getId){

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

void Monitor::eliminarIncidencia(std::string id){

    for(std::list<Incidencia>::iterator i=incidencias_.begin();i!=incidencias_.end();i++){

        if((*i).getId()==id){incidencias_.erase(i);}

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

void Monitor::editarRuta(std::string id){

    Parque aux("/0","/0");
    for(std::list<Incidencia>::iterator i=rutas_.begin();i!=rutas_.end();i++){

        if(id==(*i).getId){

            Parque aux("","");
            std::string nombre, id;
            int aforo;
            std::cout<<"Introduzca el id de la ruta:";
            std::cin>>id;
            (*i).setId(id);
            std::cout<<"Introduzca el nombre de la ruta:";
            std::cin>>nombre;
            (*i).setNombre(nombre);
            std::cout<<"Introduzca el aforo de la ruta:";
            std::cin>>aforo;
            (*i).setAforo(aforo);

        }

    }

}

void Monitor::eliminarRuta(std::string id){

    for(std::list<Incidencia>::iterator i=rutas_.begin();i!=rutas_.end();i++){

        if((*i).getId()==id){rutas_.erase(i);}

    }

}
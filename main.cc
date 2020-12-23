#include "admin.cc"
#include "nombre.h"
#include "fecha.h"
#include "parque.cc"
#include "sendero.cc"
#include "persona.cc"
#include "monitor.cc"

#include <list>

#include <iostream>
#include <cstdlib>

int main(){

    Admin admin("nombre", "primerApellido", "segundoApellido", "dni", "telefono", 1, 2, 3, "direccion", "correo");

    Monitor monitor("nombre", "primerApellido", "segundoApellido", "dni", "telefono", 1, 2, 3, "direccion", "correo");

    Parque parque("Nombre", "ubicacion", 0);

    Sendero sendero("sendero");

    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"    //////////////////////////////////////////////////////////////////////////////\n";
    std::cout<<"    /                                                                            /\n";
    std::cout<<"    /         Bienvenido al GESTOR DE PARQUES:                                   /\n";
    std::cout<<"    /                                                                            /\n";
    std::cout<<"    /         Esto es un prueba donde y existen un serie de parques con          /\n";
    std::cout<<"    /                                                                            /\n";
    std::cout<<"    /         sus senderos, rutas etc. creadas previamente; sientase libre       /\n";
    std::cout<<"    /                                                                            /\n";
    std::cout<<"    /         de añadir más o modificar las existentes a su antojo.              /\n";
    std::cout<<"    /                                                                            /\n";
    std::cout<<"    //////////////////////////////////////////////////////////////////////////////\n";
    std::cout<<"\n";

    
    int n;

    do{

        std::cout<<"    //////////////////////////////////////////////////////////////////////////////\n";
        std::cout<<"    /                                                                            /\n";
        std::cout<<"    / - 1 -  Añadir Parque                                                       /\n";
        std::cout<<"    /                                                                            /\n";
        std::cout<<"    / - 2 -  Añadir Ruta                                                         /\n";
        std::cout<<"    /                                                                            /\n";
        std::cout<<"    / - 3 -  Añadir Incidencia                                                   /\n";
        std::cout<<"    /                                                                            /\n";
        std::cout<<"    / - 0 -  EXIT                                                                /\n";
        std::cout<<"    /                                                                            /\n";
        std::cout<<"    //////////////////////////////////////////////////////////////////////////////\n";

        std::cin>>n;

        switch(n){
            
            case 0:

                std::cout<<"    / Muchas gracias por utilizar nuestro software                               /\n";
                std::cout<<"    /                                                                            /\n";
                std::cout<<"    //////////////////////////////////////////////////////////////////////////////\n";

            break;

            case 1:
            
                admin.crearParque();

            break;

            case 2:

                monitor.crearRuta(parque);

            break;

            case 3:

                monitor.crearIncidencia(sendero);

            break;

            default:

                std::cout<<"    //////////////////////////////////////////////////////////////////////////////\n";
                std::cout<<"    /                                                                            /\n";
                std::cout<<"    / Opción errónea, por favor,introdúzcala de nuevo                            /\n";
                std::cout<<"    /                                                                            /\n";

            break;
        }

    } while(n!=0);

}
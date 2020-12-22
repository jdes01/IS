#include "admin.h"
#include "nombre.h"
#include "fecha.h"
#include "parque.h"
#include "sendero.h"


#include <iostream>
#include <cstdlib>

int main(){

    Admin admin("nombre", "primerApellido", "segundoApellido", "dni", "telefono", 1, 2, 3, "direccion", "correo");

    Parque parque("nombre", "ubicacion", 1);

    Sendero sendero("nombre", parque);


    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"    //////////////////////////////////////////////////////////////////////////////";
    std::cout<<"    /                                                                            /";
    std::cout<<"    /         Bienvenido al GESTOR DE PARQUES:                                   /";
    std::cout<<"    /                                                                            /";
    std::cout<<"    /         Esto es un prueba donde y existen un serie de parques con          /";
    std::cout<<"    /                                                                            /";
    std::cout<<"    /         sus senderos, rutas etc. creadas previamente; sientase libre       /";
    std::cout<<"    /                                                                            /";
    std::cout<<"    /         de añadir más o modificar las existentes a su antojo.              /";
    std::cout<<"    /                                                                            /";
    std::cout<<"    //////////////////////////////////////////////////////////////////////////////";
    std::cout<<"\n";

    
    int n, pantalla;

    do{
 

        std::cout<<"    //////////////////////////////////////////////////////////////////////////////";
        std::cout<<"    /                                                                            /";
        std::cout<<"    / - 1 -  Gestionar Paques:                                                   /";
        std::cout<<"    /                                                                            /";
        std::cout<<"    / - 2 -  Gestionar Senderos:                                                 /";
        std::cout<<"    /                                                                            /";
        std::cout<<"    / - 3 -  Gestionar Rutas:                                                    /";
        std::cout<<"    /                                                                            /";
        std::cout<<"    / - 0 - Cerrar el menú.                                                      /";
        std::cout<<"    /                                                                            /";
        std::cout<<"    //////////////////////////////////////////////////////////////////////////////";

        std::cin>>pantalla;

        switch(pantalla){
            
            case 0:

                std::cout<<"    / Muchas gracias por utilizar nuestro software                               /";

            break;

            case 1:

                do{

                std::cout<<"    //////////////////////////////////////////////////////////////////////////////";
                std::cout<<"    /                                                                            /";
                std::cout<<"    / - 1 -  Añadir Parque                                                       /";
                std::cout<<"    /                                                                            /";
                std::cout<<"    / - 2 -  Editar Parque                                                       /";
                std::cout<<"    /                                                                            /";
                std::cout<<"    / - 0 -  Volver al menu principal                                            /";
                std::cout<<"    /                                                                            /";
                std::cout<<"    //////////////////////////////////////////////////////////////////////////////";

                } while(n!=0);
            
            break;       

            default:

                std::cout<<"    /                                                                            /";
                std::cout<<"    / Opción errónea, por favor,introdúzcala de nuevo                            /";
                std::cout<<"    /                                                                            /";

            break;
        }

    } while(pantalla!=0);

}
#include "admin.h"
#include "parque.h"

#include <iostream>
#include <string>

void Admin::crearParque(){

    std::string nombre, ubicacion;
    int superficie;

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;

    std::cout<<"introduzca la Ubicacion: ";
    std::cin>>ubicacion;
    
    std::cout<<"introduzca la superficie: ";
    std::cin>>superficie;

    Parque parque(nombre, ubicacion, superficie);
}

void Admin::editarParque(Parque parque){

    int i;

    std::string nombre, ubicacion;
    int superficie;

    std::cout<<"Si quiere editar el nombre pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;  
    parque.setNombre(nombre);
    }

    std::cout<<"Si quiere editar la ubicacion pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca la Ubicacion: ";
    std::cin>>ubicacion;  
    parque.setUbicacion(ubicacion);
    } 

    std::cout<<"Si quiere editar la superficie pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca la superficie: ";
    std::cin>>superficie; 
    parque.setSuperficie(superficie);
    } 

}

void Admin::eliminarParque(Parque parque){}


void Admin::crearSendero(Parque parque){

    std::string nombre;

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;

    Sendero sendero(nombre, parque);
}

void Admin::editarSendero(Sendero sendero){

    int i;

    std::string nombre;

    std::cout<<"Si quiere editar el nombre pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;  
    sendero.setNombre(nombre);
    } 

}

void Admin::eliminarSendero(Sendero sendero){}


void Admin::crearMonitor(){

    std::string nombre, primerApellido, segundoApellido, dni, telefono, direccion, correo;
    int dia, mes, ano; 
                  

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;

    std::cout<<"introduzca el primer apellido: ";
    std::cin>>primerApellido;

    std::cout<<"introduzca el segundo apellido: ";
    std::cin>>segundoApellido;

    std::cout<<"introduzca el dni: ";
    std::cin>>dni;

    std::cout<<"introduzca el telefono: ";
    std::cin>>telefono;

    std::cout<<"introduzca la direccion: ";
    std::cin>>direccion;

    std::cout<<"introduzca el correo: ";
    std::cin>>correo;

    std::cout<<"introduzca la fecha (dia): ";
    std::cin>>dia;

    std::cout<<"introduzca la fecha (mes): ";
    std::cin>>mes;

    std::cout<<"introduzca la fecha (ano): ";
    std::cin>>ano;


    Monitor(nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo);  
}

void Admin::editarMonitor(Monitor monitor){

    nombre nombreCompleto;
    fecha fechaNacimiento;
    std::string nombre, primerApellido, segundoApellido, dni, telefono, direccion, correo;
    int dia, mes, ano;

    int i;


    std::cout<<"Si quiere editar el nombre pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;  
    std::cout<<"introduzca el primer apellido: ";
    std::cin>>primerApellido; 
    std::cout<<"introduzca el segundo apellido: ";
    std::cin>>segundoApellido; 

    nombreCompleto.nombre = nombre;
    nombreCompleto.primerApellido = primerApellido;
    nombreCompleto.segundoApellido = segundoApellido;

    monitor.setNombre(nombreCompleto);
    }

    std::cout<<"Si quiere editar el dni pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el dni: ";
    std::cin>>dni;  
    monitor.setDni(dni);
    } 

    std::cout<<"Si quiere editar el telefono pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el telefono: ";
    std::cin>>telefono; 
    monitor.setTelefono(telefono);
    }

    std::cout<<"Si quiere editar la direccion pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca la direccion: ";
    std::cin>>direccion; 
    monitor.setDireccion(direccion);
    }

    std::cout<<"Si quiere editar el correo pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el correo: ";
    std::cin>>correo; 
    monitor.setCorreo(correo);
    }

    std::cout<<"Si quiere editar la fecha de nacimiento pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el dia: ";
    std::cin>>dia;  
    std::cout<<"introduzca el mes: ";
    std::cin>>mes; 
    std::cout<<"introduzca el ano: ";
    std::cin>>ano; 

    fechaNacimiento.dia = dia;
    fechaNacimiento.mes = mes;
    fechaNacimiento.ano = ano;

    monitor.setFechaNacimiento(fechaNacimiento);
    }

}

void Admin::eliminarMonitor(Monitor monitor){}


void Admin::crearVisita(Ruta ruta, Monitor monitor){

    int aforo, dia, mes, ano;
    

    std::cout<<"introduzca la aforo: ";
    std::cin>>direccion;

    std::cout<<"introduzca la fecha (dia): ";
    std::cin>>dia;

    std::cout<<"introduzca la fecha (mes): ";
    std::cin>>mes;

    std::cout<<"introduzca la fecha (ano): ";
    std::cin>>ano;

    Visita(aforo, dia, mes, ano, ruta, monitor);

}

void Admin::editarVisita(Visit visita){

    fecha fechaCompleta;
    int dia, mes, ano;
    int aforo;
    int plazasLibres;

    int i;


    std::cout<<"Si quiere editar la fecha pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el dia: ";
    std::cin>>dia;  
    std::cout<<"introduzca el mes: ";
    std::cin>>mes; 
    std::cout<<"introduzca el ano: ";
    std::cin>>ano; 

    fechaCompleta.dia = dia;
    fechaCompleta.mes = mes;
    fechaCompleta.ano = ano;

    visita.setFecha(fechaCompleta);
    }

    std::cout<<"Si quiere editar el aforo pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el aforo: ";
    std::cin>>aforo;  
    visita.setAforo(aforo);
    } 

    std::cout<<"Si quiere editar las plazas libres pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca las plazas libres: ";
    std::cin>>plazasLibres; 
    visita.setPlazasLibres(plazasLibres);
    }
}

void Admin::eliminarVisita(Visita visita){}


void Admin::crearVisitante(){

    std::string discapacidad, nombre, primerApellido, segundoApellido, dni, telefono, direccion, correo;
    int dia, mes, ano;

    std::cout<<"introduzca (si tuviera) un discapacidad: ";
    std::cin>>nombre;

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;

    std::cout<<"introduzca el primer apellido: ";
    std::cin>>primerApellido;

    std::cout<<"introduzca el segundo apellido: ";
    std::cin>>segundoApellido;

    std::cout<<"introduzca el dni: ";
    std::cin>>dni;

    std::cout<<"introduzca el telefono: ";
    std::cin>>telefono;

    std::cout<<"introduzca la direccion: ";
    std::cin>>direccion;

    std::cout<<"introduzca el correo: ";
    std::cin>>correo;

    std::cout<<"introduzca la fecha (dia): ";
    std::cin>>dia;

    std::cout<<"introduzca la fecha (mes): ";
    std::cin>>mes;

    std::cout<<"introduzca la fecha (ano): ";
    std::cin>>ano;


    Visitante(discapacidad, nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo);  

}

void Admin::editarVisitante(Visitante visitante){

    nombre nombreCompleto;
    fecha fechaNacimiento;
    std::string nombre, primerApellido, segundoApellido, dni, telefono, direccion, correo, discapacidad;
    int dia, mes, ano;

    int i;


    std::cout<<"Si quiere editar el nombre pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;  
    std::cout<<"introduzca el primer apellido: ";
    std::cin>>primerApellido; 
    std::cout<<"introduzca el segundo apellido: ";
    std::cin>>segundoApellido; 

    nombreCompleto.nombre = nombre;
    nombreCompleto.primerApellido = primerApellido;
    nombreCompleto.segundoApellido = segundoApellido;

    visitante.setNombre(nombreCompleto);
    }

    std::cout<<"Si quiere editar el dni pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el dni: ";
    std::cin>>dni;  
    visitante.setDni(dni);
    } 

    std::cout<<"Si quiere editar el telefono pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el telefono: ";
    std::cin>>telefono; 
    visitante.setTelefono(telefono);
    }

    std::cout<<"Si quiere editar la direccion pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca la direccion: ";
    std::cin>>direccion; 
    visitante.setDireccion(direccion);
    }

    std::cout<<"Si quiere editar el correo pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el correo: ";
    std::cin>>correo; 
    visitante.setCorreo(correo);
    }

    std::cout<<"Si quiere editar la fecha de nacimiento pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca el dia: ";
    std::cin>>dia;  
    std::cout<<"introduzca el mes: ";
    std::cin>>mes; 
    std::cout<<"introduzca el ano: ";
    std::cin>>ano; 

    fechaNacimiento.dia = dia;
    fechaNacimiento.mes = mes;
    fechaNacimiento.ano = ano;

    visitante.setFechaNacimiento(fechaNacimiento);
    }

    std::cout<<"Si quiere editar la discapacidd pulse 1; si desea avanzar, pulse cualquier otra tecla";
    std::cin>>i;

    if (i=1){

    std::cout<<"introduzca la discapacidad: ";
    std::cin>>discapcidad; 
    visitante.setDiscapacidad(discapacidad);
    }

}


void Admin::eliminarVisitante(std::string dni);
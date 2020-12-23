#include "admin.h"
#include "persona.h"
#include "parque.h"
#include "monitor.h"
#include "sendero.h"

#include "fecha.h"
#include "nombre.h"

#include <iostream>
#include <fstream>
#include <string>


void Admin::crearParque(){

    std::string nombre, ubicacion;
    int superficie;

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;

    std::cout<<"introduzca la Ubicacion: ";
    std::cin>>ubicacion;
    
    std::cout<<"introduzca la superficie (IMPORTANTE, la dimension debe ser expresad en enteros): ";
    std::cin>>superficie;

    Parque parque(nombre, ubicacion, superficie);


    std::fstream f;

    f.open("listaParques.txt", std::ios::out | std::ios::app);

    if(f.is_open()){        
            
            f<<parque.getNombre()<<','<<parque.getUbicacion()<<','<<parque.getSuperficie()<<','<<'\n';         
          
    } 

}

void Admin::editarParque(Parque parque){

    std::string nombre, ubicacion;
    int superficie;


    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;

        parque.setNombre(nombre);

    std::cout<<"introduzca la Ubicacion: ";
    std::cin>>ubicacion;  

        parque.setUbicacion(ubicacion);

    std::cout<<"introduzca la superficie: ";
    std::cin>>superficie; 

        parque.setSuperficie(superficie);
}

void Admin::eliminarParque(Parque parque){}



void Admin::crearSendero(Parque parque){

    std::string nombre;

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre;

    Sendero sendero(nombre);

    parque.addSendero(sendero);

    std::fstream f;

    f.open("listaSenderos.txt", std::ios::out | std::ios::app);

    if(f.is_open()){        
            
            f<<sendero.getNombre()<<','<<'\n';         
          
    } 
}

void Admin::editarSendero(Sendero sendero){

    std::string nombre;

    std::cout<<"introduzca el Nombre: ";
    std::cin>>nombre; 

        sendero.setNombre(nombre);
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

    Monitor monitor(nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo);  

}

void Admin::editarMonitor(Monitor monitor){

    nombre nombreCompleto;
    fecha fechaNacimiento;

    std::string nombre, primerApellido, segundoApellido, dni, telefono, direccion, correo;
    int dia, mes, ano; 
                  
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

    std::cout<<"introduzca el dni: ";
    std::cin>>dni;

        monitor.setDni(dni);

    std::cout<<"introduzca el telefono: ";
    std::cin>>telefono;

        monitor.setTelefono(telefono);

    std::cout<<"introduzca la direccion: ";
    std::cin>>direccion;

        monitor.setDireccion(direccion);

    std::cout<<"introduzca el correo: ";
    std::cin>>correo;

        monitor.setCorreo(correo);

    std::cout<<"introduzca la fecha (dia): ";
    std::cin>>dia;

    std::cout<<"introduzca la fecha (mes): ";
    std::cin>>mes;

    std::cout<<"introduzca la fecha (ano): ";
    std::cin>>ano;

        fechaNacimiento.dia = dia;
        fechaNacimiento.mes = mes;
        fechaNacimiento.ano = ano;

        monitor.setFechaNacimiento(fechaNacimiento);
}

void Admin::eliminarMonitor(Monitor monitor){}



void Admin::crearVisita(){

    int aforo, dia, mes, ano;
    

    std::cout<<"introduzca el aforo: ";
    std::cin>>aforo;

    std::cout<<"introduzca la fecha (dia): ";
    std::cin>>dia;

    std::cout<<"introduzca la fecha (mes): ";
    std::cin>>mes;

    std::cout<<"introduzca la fecha (ano): ";
    std::cin>>ano;

    Visita visita(aforo, dia, mes, ano);

}

void Admin::editarVisita(Visita visita){

    fecha fechaCompleta;
    int aforo, dia, mes, ano;
    

    std::cout<<"introduzca el aforo: ";
    std::cin>>aforo;

        visita.setAforo(aforo);

    std::cout<<"introduzca la fecha (dia): ";
    std::cin>>dia;

    std::cout<<"introduzca la fecha (mes): ";
    std::cin>>mes;

    std::cout<<"introduzca la fecha (ano): ";
    std::cin>>ano;

    fechaCompleta.dia = dia;
    fechaCompleta.mes = mes;
    fechaCompleta.ano = ano;

    visita.setFecha(fechaCompleta);
}

void Admin::eliminarVisita(Visita visita){}



void Admin::crearVisitante(){

    std::string discapacidad, nombre, primerApellido, segundoApellido, dni, telefono, direccion, correo;
    int dia, mes, ano;

    std::cout<<"introduzca (si tuviera) un discapacidad: ";
    std::cin>>discapacidad;

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


    Visitante visitante (discapacidad, nombre, primerApellido, segundoApellido, dni, telefono, dia, mes, ano, direccion, correo);  

}

void Admin::editarVisitante(Visitante visitante){

    fecha fechaCompleta;
    nombre nombreCompleto;
    std::string discapacidad, nombre, primerApellido, segundoApellido, dni, telefono, direccion, correo;
    int dia, mes, ano;

    std::cout<<"introduzca (si tuviera) un discapacidad: ";
    std::cin>>discapacidad;

        visitante.setDiscapacidad(discapacidad);

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

    std::cout<<"introduzca el dni: ";
    std::cin>>dni;

        visitante.setDni(dni);

    std::cout<<"introduzca el telefono: ";
    std::cin>>telefono;

        visitante.setTelefono(telefono);

    std::cout<<"introduzca la direccion: ";
    std::cin>>direccion;

        visitante.setDireccion(direccion);

    std::cout<<"introduzca el correo: ";
    std::cin>>correo;

        visitante.setCorreo(correo);

    std::cout<<"introduzca la fecha (dia): ";
    std::cin>>dia;

    std::cout<<"introduzca la fecha (mes): ";
    std::cin>>mes;

    std::cout<<"introduzca la fecha (ano): ";
    std::cin>>ano;

        fechaCompleta.dia = dia;
        fechaCompleta.mes = mes;
        fechaCompleta.ano = ano;

        visitante.setFechaNacimiento(fechaCompleta);
}

void Admin::eliminarVisitante(Visitante visitante){}

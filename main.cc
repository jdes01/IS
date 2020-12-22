#include <iostream>
#include <cstdlib>

int main(){
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"    /////////////////////////////\n";
    std::cout<<"    /                           /\n";
    std::cout<<"    /         Bienvenido        /\n";
    std::cout<<"    /                           /\n";
    std::cout<<"    /          al gestor        /\n";
    std::cout<<"    /                           /\n";
    std::cout<<"    /         de parques        /\n";
    std::cout<<"    /                           /\n";
    std::cout<<"    /////////////////////////////\n";
    std::cout<<"\n";
    std::cout<<"\n";
    
    int n;
    do{
        std::cout<<"0/  Cerrar el menú\n";
        std::cout<<"\n";
        std::cout<<"1/  Hacer algo\n";
        std::cout<<"\n";
        std::cout<<"Introduzca la opción que desee: ";
        std::cin>>n; 
        std::cout<<"\n";
        system("clear");
        switch(n){
            
            case 0:

            std::cout<<"Muchas gracias por utilizar nuestro software\n";
            break;

            case 1:

            //Hacer algo
            break;       

        default:

            std::cout<<"Opción errónea, por favor,introdúzcala de nuevo\n";
            break;
        }

        std::cout<<"\n";
    }while(n!=0);

}
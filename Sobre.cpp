#include <iomanip>
#include "Sobre.hpp"

//Iniciamos constante de clase
const double Sobre::cargoAdicional = 79.90;

//Constructor por defecto
Sobre::Sobre(){
    ancho = 0;
    largo = 0;
}
//Constructor con parámetros
Sobre::Sobre(Persona& r, Persona& d, double an, double la):Envio(r,d){
    Sobre::setAncho(an);
    Sobre::setLargo(la);
}

//Genera los getters de ancho y largo
double Sobre::getAncho() const { 
    return ancho;
}

double Sobre::getLargo() const { 
    return largo;
}

//Genera los setters de ancho y largo
void Sobre::setAncho(double an) { 
    ancho = an;
}

void Sobre::setLargo(double la) { 
    largo = la;
}

//Sobreescribir calculaCosto de la clase envio
double Sobre::calculaCosto() { 
    if (largo > 25 || ancho > 30) {
        return Envio::calculaCosto() + cargoAdicional;
    } 
    else { 
        return Envio::calculaCosto();
    }
}

//Sobreescribir imprime de la clase envio
void Sobre::imprime() { 
    return Envio::imprime(); 
    std::cout << "Ancho del paquete: " << ancho << std::endl;
    std::cout << "Largo del paquete: " << largo << std::endl;
    std::cout << "Costo total: $" << std::setprecision(2) << std::fixed << Sobre::calculaCosto() << std::endl;
}
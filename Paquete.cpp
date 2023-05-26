#include <iomanip>
#include "Paquete.hpp"

//iniciamos la constante de clase
const double Paquete::costoPorKilo = 23.45;

Paquete::Paquete(Persona& r, Persona& d, double p, double an, double la, double pro):Envio(r,d){
    setPeso(p);
    setAncho(an);
    setLargo(la);
    setProfundidad(pro);
}

double Paquete::getPeso() const{
    return peso;
}

double Paquete::getAncho() const{
    return ancho;
}

double Paquete::getLargo() const{
    return largo;
}

double Paquete::getProfundidad() const{
    return profundidad;
}

void Paquete::setPeso(double p){
    peso = (p < 0)? 0 : p;
}

void Paquete::setAncho(double an){
    ancho = an;
}

void Paquete::setLargo(double la){
    largo = la;
}

void Paquete::setProfundidad(double pro){
    profundidad = pro;
}

double Paquete::calculaCosto(){
    return costoPorKilo * peso + Envio::calculaCosto();
}

void Paquete::imprime(){
    Envio::imprime();
    std::cout << "Datos del paquete: " << std::endl;
    std::cout << "Peso: " << peso << std::endl;
    std::cout << "Ancho: " << ancho << std::endl;
    std::cout << "Largo: " << largo << std::endl;
    std::cout << "Profundidad: " << profundidad << std::endl; 
    //Completa para que se imprima el peso, ancho, largo y profundidad
    
    std::cout << "A PAGAR: $" << std::setprecision(2) << std::fixed << calculaCosto() << std::endl;
    //Completa para que se imprima el costo del paquete con 2 decimales
}
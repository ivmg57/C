#include "Circulo.hpp"

const double Circulo::PI = 3.1415967;

Circulo::Circulo(){
    radio = 1;
}

Circulo::Circulo(int x_, int y_, int radio_):Figura(x_,y_){
    setRadio(radio_);
}

int Circulo::getRadio() const{
    return radio;
}

void Circulo::setRadio(int radio_){
    radio = radio_ <= 0? 1: radio_; // Condicional ternario 
}

double Circulo::circunferencia(){
    return 2 * PI * radio;
}

std::string Circulo::dibuja(){
    return Figura::dibuja() + ": Circulo";
}
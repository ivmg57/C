#include "Rectangulo.hpp"

Rectangulo::Rectangulo(){
    ancho = 1;
    largo = 1;
}

Rectangulo::Rectangulo(int x_, int y_, int ancho_, int largo_):Figura(x_,y_){
    setAncho(ancho_);
    setLargo(largo_);
}

int Rectangulo::getAncho() const{
    return ancho;
}

void Rectangulo::setAncho(int ancho_){
    ancho = ancho_ <= 0? 1: ancho_;
}

int Rectangulo::getLargo() const{
    return largo;
}

void Rectangulo::setLargo(int largo_){
    largo = largo_ <= 0? 1: largo_;
}

int Rectangulo::perimetro(){
    return 2 * (ancho + largo);
}

std::string Rectangulo::dibuja(){
    return Figura::dibuja() + ": Rectangulo";
}
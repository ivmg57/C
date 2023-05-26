#pragma once
#include <iostream>
#include "Figura.hpp"

class Rectangulo: public Figura{
    public:
        Rectangulo();
        Rectangulo(int x_, int y_, int ancho_, int largo_);
        int getAncho() const;
        int getLargo() const;
        void setAncho(int ancho_);
        void setLargo(int largo_);
        std::string dibuja();
        int perimetro();
    private:
        int ancho;
        int largo;
};
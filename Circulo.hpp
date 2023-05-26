#pragma once
#include <iostream>
#include "Figura.hpp"

class Circulo: public Figura{
    public:
        const static double PI;
        Circulo();
        Circulo(int x_, int y_, int radio_);
        int getRadio() const;
        void setRadio(int radio_);
        std::string dibuja();
        double circunferencia();
    private:
        int radio;
};
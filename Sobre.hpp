#pragma once
#include "Envio.hpp"

//Escribe la definición de la clase, recuerda que hereda de Envio

class Sobre: public Envio{ 
    public: 
        // Constructores
        Sobre();
        Sobre(Persona&, Persona&, double, double);

        // Getters
        double getAncho() const;
        double getLargo() const; 

        // Setters 
        void setAncho(double);
        void setLargo(double);

        // Adicionales
        double calculaCosto();
        void imprime();

    private: 
        static const double cargoAdicional;
        double ancho;
        double largo;

};
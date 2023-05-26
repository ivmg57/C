#include "Complejo.hpp"
#include <iostream>

// Constructor default
Complejo::Complejo()
{
    real = 0;
    imaginario = 0;
}

// Constructor con parámetros
Complejo::Complejo(double real_, double imaginario_)
{
    real = real_;
    imaginario = imaginario_;
}

// Getter de real
double Complejo::getReal() const
{
    return real;
}

// Getter de imaginario
double Complejo::getImaginario() const
{
    return imaginario;
}

// Setter de real
void Complejo::setReal(double real_)
{
    real = real_;
}

// Setter de imaginario
void Complejo::setImaginario(double imaginario_)
{
    imaginario = imaginario_;
}

// Agregar
void Complejo::agregar(Complejo& c1)
{
    real += c1.real;
    imaginario += c1.imaginario;
}

// Conjugado
Complejo Complejo::conjugado()
{
   return Complejo(real, -imaginario);
}

// Suma
Complejo Complejo::suma(Complejo& c1)
{
    double r, im;
    r = real + c1.real;
    im = imaginario + c1.imaginario;
    return Complejo(r, im);
}

// Multiplicación
Complejo Complejo::multiplicacion(Complejo& c1)
{
    double r, im;
    r = real * c1.real - imaginario * c1.imaginario;
    im = real * c1.imaginario + imaginario * c1.real;
    return Complejo(r, im);
}

// MultiEscalar
Complejo Complejo::multiEscalar(double escalar)
{
    double r, im;
    r = real * escalar;
    im = imaginario * escalar;
    return Complejo(r, im);
}

// Imprime
void Complejo::imprime()
{
    if (imaginario >= 0)
    {
        std::cout << "(" << real << " + " << imaginario << "i)" << std::endl;
    }
    else
    {
        std::cout << "(" << real << " - " << imaginario << "i)" << std::endl;
    }
}
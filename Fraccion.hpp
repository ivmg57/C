#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>
class Fraccion
{
    public:
        Fraccion();
        Fraccion(int, int);
        int getNum() const;
        int getDen() const;
        void setNum(int);
        void setDen(int);
        Fraccion suma(Fraccion&);
        void imprime();

    private:
        int num;
        int den;
        int mcd(int, int);
};

#endif // FRACCION_H
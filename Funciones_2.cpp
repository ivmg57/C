#include<iostream>
#include "misfunciones.h"

using namespace std;

//Prototipo.
int suma(int, int);

double suma(double, double);

int main()
{
    cout << suma(5.5,2.3) << endl;

    cout << resta(10,7) << endl;

}

//En C++ se especifica el tipo de dato de los parámetros.
int suma(int a, int b){
    int res = a + b;
    return res;
}

double suma(double a, double b){
    return a + b;
}
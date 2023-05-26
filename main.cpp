#include <iostream>
#include <stdlib.h>

using namespace std;

void intercambia(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int x = 5;
    int z = 15;
    int &y = x;
    y = 20;
    cout << "X: " << x << " Y: " << y << endl;
    cout << &x << " - " << &y << endl;
    intercambia(x, z);
    cout << "X: " << x << " Z: " << z << endl;
    cout << "Y: " << y << endl;
    int* ptrX;
    ptrX = &x;
    cout << ptrX << "Valor: " << *ptrX << &ptrX << endl;
    int* ptrZ = new int(35);
    cout << "El valor al cual apunta ptr2 es: " << *ptrZ << endl;
    Circulo* ptrC1 = new Circulo(1,1,7);
    cout << "Circunferencia del Circulo: " << ptrC1->circunferencia() << endl;
    Circulo c2(2,2,8);
    Figura fig;
    fig = c2;
    cout << fig.dibuja() << endl;
    Figura* ptrF;
    Circulo c3(3,3,6);
    ptrF = &c3;
    cout << ptrF->dibuja() << endl;
    return 0;
}
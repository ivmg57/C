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
    
    return 0;
}
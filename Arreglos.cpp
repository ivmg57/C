#include<iostream>

using namespace std;

int main()
{
    //Definir un arreglo de 10 elementos.
    int arr[10];

    //Imprimir el primer elemento del arreglo.
    //Los índices inician en 0.
    cout << arr[0] << endl;

    //Asignar valores a un arreglo por índice.
    arr[0] = 5;

    cout << arr[0];

    // Obtener el tamaño del arreglo.
    int size = sizeof(arr) / sizeof(arr[0]);

    //Inicializar los elementos del arreglo.
    for(int i=0; i<size; i++){
        arr[i] = i;
    }

    //Imprimir los valores del arreglo.
    for(int i=0; i<size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    char michar = 'a';

    cout << sizeof(michar);

}
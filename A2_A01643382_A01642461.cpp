#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <random>

using namespace std;

void numeroImpar()
{
    cout << "NUMERO IMPAR" << endl;
    cout << "Número impar: ";
    int impar;
    cin >> impar;
    while(impar%2 == 0)
    {
        cout << "Número impar: ";
        cin >> impar;    
    }
}

void sumaPares()
{
    cout << endl << "SUMA PARES";
    int sumatoria = 0;
    for(int i=0; i<101; i++)
    {
        if(i%2 == 0)
        {
            sumatoria = sumatoria + i;
        }
    }
    cout << endl << "Suma: " << sumatoria << endl;
}

void mediaAritmetica()
{
    cout << endl << "MEDIA ARITMETICA" << endl;
    cout << "Cuántos números vas a introducir: ";
    double numeros;
    cin >> numeros;
    double acumulador = 0;
    for(int i=0; i<numeros; i++)
    {
        cout << "Número: ";
        double num;
        cin >> num;
        acumulador = acumulador + num;
    }
    double media;
    media = acumulador/numeros;
    cout << "Media aritmética: " << media << endl;
}

void numeroMagico()
{
    cout << endl << "NUMERO MAGICO" << endl;
    int numIntentos = 1;
    srand((unsigned) time(NULL));
    int aleatorio = 1 + (rand()%100);
    int num;
    cout << "Número: ";
    cin >> num;

    while(aleatorio!=num)
    {
        if(num>aleatorio)
        {
            cout << "MENOS" << endl;
        }
        else if(num<aleatorio)
        {
            cout << "MÁS" << endl;
        }
        cout << "Número: ";
        cin >> num;
        numIntentos = numIntentos + 1;
    }
    cout << "Acertaste con el valor mágico "<<aleatorio<<" después de "<<numIntentos<<" intentos" << endl;
}

int main()
{
    numeroImpar();
    sumaPares();
    mediaAritmetica();
    numeroMagico();
}
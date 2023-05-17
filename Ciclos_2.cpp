#include<iostream>

using namespace std;

int main()
{

    int contador = 0;

    do{
        cout << contador << endl;
        contador++;
    }
    while(contador < 10);

    cout << "contador = " << contador;

}
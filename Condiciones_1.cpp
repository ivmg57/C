#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    if(a > b){
        cout << "a es mayor que b.";
    }
    else if(a < b){
        cout << "a es menor que b.";
    }
    else{
        cout << "a y b son iguales.";
    }
    
    // Revisar que c sea mayor a 10 y que sea número par.
    int c = 20;
    if(c > 10 && c%2 == 0){
        cout << endl << "True";
    }

    // El OR es con '||'.
    // Diferente: '!='.
    

}
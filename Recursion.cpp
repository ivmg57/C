//Recursion
//Dvidir un problema en subproblemas iguales
//Definir condicion de paro
//Agregar los resultados de los subproblemas

//Ej. Fibonacci
//1 1 2 3 5 8 13 21 34 ...
//fib(i) = fib(i-1) + fib(i-2)

#include <iostream>
using namespace std;

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    cout << fib(11) << endl;
}
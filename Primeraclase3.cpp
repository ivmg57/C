// Programa para sumar dos números.
#include<iostream>

int main()
{

    int num1 = 0;
    int num2 = 0;
    int suma = 0;

    std::cout << "\nEscriba el primer entero: ";
    std::cin >> num1;

    std::cout << "Escriba el segundo entero: ";
    std::cin >> num2;

    suma = num1 + num2;

    std::cout << "Resultado = " << suma << std::endl;

    return 0;
}

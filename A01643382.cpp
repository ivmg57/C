#include<iostream>
#include<string>
using namespace std;
class Direccion
{
    private:
        string calle;
        int numero;
    public:
        Direccion()
        {
            calle = " ";
            numero = 0;
        }
        Direccion(string nuevaCalle, int nuevoNumero)
        {
            calle = nuevaCalle;
            numero = nuevoNumero;
        }
        ~Direccion(){}
        void imprime()
        {
            cout << "Calle: " << getCalle() << endl;
            cout << "Numero: " << getNumero() << endl;
        }
        void setCalle(string nuevaCalle)
        {
            calle = nuevaCalle;
        }
        void setNumero(int nuevoNumero)
        {
            numero = nuevoNumero;
        }
        string getCalle()
        {
            return calle;
        }
        int getNumero()
        {
            return numero;
        }
};
class Persona
{
    private:
        string nombre;
        int edad;
        Direccion direccion;
    public:
        Persona()
        {
            nombre = " ";
            edad = 0;
        }
        Persona(string nuevoNombre, int nuevaEdad, Direccion nuevaDireccion)
        {
            nombre = nuevoNombre;
            edad = nuevaEdad;
            direccion = nuevaDireccion;
        }
        ~Persona(){}
        void imprimePersona()
        {
            cout << "Nombre: " << getNombre() << endl;
            cout << "Edad: " << getEdad() << endl;
            cout << "Calle: " << getDireccion().getCalle() << endl;
            cout << "Numero: " << getDireccion().getNumero() << endl;
        }
        void setNombre(string nuevoNombre)
        {
            nombre = nuevoNombre;
        }
        void setEdad(int nuevaEdad)
        {
            edad = nuevaEdad;
        }
        void setDireccion(Direccion nuevaDireccion)
        {
            direccion = nuevaDireccion;
        }
        string getNombre()
        {
            return nombre;
        }
        int getEdad()
        {
            return edad;
        }
        Direccion getDireccion()
        {
            return direccion;
        }
};
int main()
{
    int NUM;
    NUM = 2;
    Persona personas[NUM];
    for(int i=0; i<NUM; i++)
    {
        string name;
        int age;
        string street;
        int number;
        Direccion adress;
        cout << "Ingresa el nombre de la persona: "<< endl;
        cin >> name;
        personas[i].setNombre(name);
        cout << "Ingresa la edad de la persona: "<< endl;
        cin >> age;
        personas[i].setEdad(age);
        cout << "Ingresa la calle donde vive la persona: "<< endl;
        cin >> street;
        adress.setCalle(street);
        cout << "Ingresa el número donde vive la persona: "<< endl;
        cin >> number;
        adress.setNumero(number);
        personas[i].setDireccion(adress);
    }
    for(int i=0; i<NUM; i++)
    {
        personas[i].imprimePersona();
    }
}
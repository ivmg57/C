#include<iostream>
#include<string>

using namespace std;

class Superpoder
{
    public:
        string descripcion;
        
        //Constructores. Se ejecutan al momento de crear los objetos.
        Superpoder()
        {
            descripcion = " ";
        }

        Superpoder(string nuevaDescripcion)
        {
            descripcion = nuevaDescripcion;
        }

        //Destructores. Se ejecuta cuando temrina el "scope" del objeto.
        ~Superpoder(){}
};

class Superheroe
{
    private:
        string nombre;
        int edad;
        Superpoder superpoder;
        Superpoder superpoderes[10];
        
    public:
        void incrementaEdad(int incremento);

        void imprimeNombre()
        {
            cout << "Nombre: " << getNombre() << " Edad: " << getEdad() << endl;
        }

        //Setters. Sirven para establecer el valor de las variables privadas.
        void setNombre(string nuevoNombre)
        {
            nombre = nuevoNombre;
        }

        void setEdad(int nuevaEdad)
        {
            edad = nuevaEdad;
        }

        void setSuperpoder(Superpoder nuevoSuperpoder)
        {
            superpoder = nuevoSuperpoder;
        }

        void setSuperpoder(Superpoder nuevoSuperpoder, int pos)
        {
            superpoderes[pos] = nuevoSuperpoder;
        }

        //Getters. Sirven para obtener el valor de las variables.
        string getNombre()
        {
            return nombre;
        }

        int getEdad()
        {
            return edad;
        }

        Superpoder getSuperpoder()
        {
            return superpoder;
        }

        Superpoder getSuperpoder(int pos)
        {
            return superpoderes[pos];
        }
};

void Superheroe::incrementaEdad(int incremento)
{
    edad = edad + incremento;
}

int main()
{
    Superheroe superHeroe1;
    Superheroe superHeroe2;

    //superHeroe1.nombre = "Dohko";
    //cout << "Nombre: " << superHeroe1.nombre;

    superHeroe1.setNombre("Dohko");
    superHeroe1.setEdad(23);
    superHeroe1.incrementaEdad(10);
    superHeroe1.imprimeNombre();

    Superpoder sp1("Volar");
    superHeroe1.setSuperpoder(sp1);
    cout << superHeroe1.getSuperpoder().descripcion << endl;

    superHeroe1.setSuperpoder(sp1, 0);
    Superpoder sp2("Congelar objetos");
    superHeroe1.setSuperpoder(sp2, 1);

    cout << superHeroe1.getSuperpoder(1).descripcion << endl;

    superHeroe2.setNombre("Astroboy");
    superHeroe2.setEdad(8);
    superHeroe2.imprimeNombre();
}
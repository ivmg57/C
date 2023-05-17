#include<iostream>
#include<string>

using namespace std;

class Superpoder
{
    public:
        string descripcion;
        
        //Definir constructores.
        //Estos se ejecutan al momento de crear los objetos.
        Superpoder()
        {
            cout << "Constructor predeterminado." << endl;
            descripcion = "---";
        }

        Superpoder(string nuevaDescripcion)
        {
            cout << "Constructor personalizado." << endl;
            descripcion = nuevaDescripcion;
        }

        //Destructores. Se ejecuta cuando temrina el "scope" del objeto.
        ~Superpoder()
        {
            cout << "Ejecutando destructor..." << endl;
        }
};

int main()
{
    Superpoder superpoder1;
    cout << superpoder1.descripcion << endl;

    Superpoder superpoder2("Congelar objetos.");
    cout << superpoder2.descripcion << endl;

    for(int i=0; i<3; i++)
    {
        //superpoderTemporal sólo existe dentro del for.
        Superpoder superpoderTemporal;
    }
}
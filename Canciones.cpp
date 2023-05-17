#include<iostream>
#include<string>
using namespace std;
class Cancion
{
    private:
        string nombre;
        int duracion; // Duracion de la cancion en segundos.
    public:
        void setNombre(string nuevoNombre)
        {
            nombre = nuevoNombre;
        }
        void setDuracion(int nuevaDuracion)
        {
            duracion = nuevaDuracion;
        }
        string getNombre()
        {
            return nombre;
        }
        int getDuracion()
        {
            return duracion;
        }
        Cancion()
        {
            nombre = "";
            duracion = 0;
        }
        Cancion(string nuevoNombre, int nuevaDuracion)
        {
            nombre = nuevoNombre;
            duracion = nuevaDuracion;
        }
        void imprime()
        {
            cout << "Nombre: " << getNombre() << "Duracion: " << getDuracion() << endl;
        }
};

int main()
{
    Cancion c1; //Se manda llamar el constructor vacio.
    //c1.imprime();
    Cancion c2("Surfacing, Slipknot", 2400);
    //c2.imprime();
    c2.setDuracion(2500);
    c2.imprime();

    //Arreglos de objetos.
    Cancion canciones[2];
    //canciones[0].imprime(); //Imprimir la primer canción.
    canciones[0].setNombre("Cancion 1, Artista 1 "); //Establecer nombre de la canción.
    canciones[0].setDuracion(1500);
    //canciones[0].imprime();
    
    //canciones[1].imprime(); //Imprimir la segunda canción.
    canciones[1].setNombre("Cancion 2, Artista 2 "); //Establecer nombre de la canción.
    canciones[1].setDuracion(1352);
    //canciones[1].imprime();

    for(int i=0; i<2; i++)
    {
        canciones[i].imprime();
    }

    //canciones[2] se saldría del arreglo
}
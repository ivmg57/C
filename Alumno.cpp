#include<iostream>
#include<string>

using namespace std;

class Alumno
{
    private:
        string matricula;
        string nombre;
        int edad;
        string carrera;

    public:
        Alumno()
        {
            matricula = "";
            nombre = "";
            carrera = "";
            edad = 0;
        }

        Alumno(string nuevaMatricula, string nuevoNombre, string nuevaCarrera, int nuevaEdad)
        {
            matricula = nuevaMatricula;
            nombre = nuevoNombre;
            edad = nuevaEdad;
            carrera = nuevaCarrera;
        }

        ~Alumno(){}

        void imprimeAlumno()
        {
            cout << "Nombre: " << getNombre() << endl;
            cout << "Edad: " << getEdad() << endl;
            cout << "Matrícula: " << getMatricula() << endl;
            cout << "Carrera: " << getCarrera() << endl;
        }

        void cumpleaños()
        {
            edad = edad + 1;
        }

        void setMatricula(string nuevaMatricula)
        {
            matricula = nuevaMatricula;
        }

        void setNombre(string nuevoNombre)
        {
            nombre = nuevoNombre;
        }

        void setEdad(int nuevaEdad)
        {
            edad = nuevaEdad;
        }

        void setCarrera(string nuevaCarrera)
        {
            carrera = nuevaCarrera;
        }

        string getMatricula()
        {
            return matricula;
        }

        string getNombre()
        {
            return nombre;
        }

        int getEdad()
        {
            return edad;
        }

        string getCarrera()
        {
            return carrera;
        }
};

int main()
{
    Alumno alumno1;
    alumno1.setNombre("Carlos");
    alumno1.setEdad(18);
    alumno1.setMatricula("A01643574");
    alumno1.setCarrera("BGB");

    alumno1.cumpleaños();
    alumno1.imprimeAlumno();
}
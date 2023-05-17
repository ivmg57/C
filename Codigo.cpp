#include<iostream>
#include<string>

using namespace std;

class Pacientes //Base de datos de cada cliente
{
    private:
        string sintomas, nombre, factoresRiesgo, domicilio, sexo, nacionalidad, estadoCivil, ocupacion;
        int edad, numeroTelefono, numeroDosis;
    public:
        Pacientes()
        {
            sintomas = " ";
            nombre = " ";
            factoresRiesgo = " ";
            domicilio = " ";
            sexo = " ";
            nacionalidad = " ";
            estadoCivil = " ";
            ocupacion = " ";
            edad = 0;
            numeroTelefono = 0;
            numeroDosis = 0;
        }
        Pacientes(string nuevosSintomas, string nuevoNombre, string nuevosFactoresRiesgo, string nuevoDomicilio, string nuevoSexo, string nuevaNacionalidad, string nuevoEstadoCivil, string nuevaOcupacion, int nuevaEdad, int nuevoNumeroTelefono, int nuevoNumeroDosis)
        {
            sintomas = nuevosSintomas;
            nombre = nuevoNombre;
            factoresRiesgo = nuevosFactoresRiesgo;
            domicilio = nuevoDomicilio;
            sexo = nuevoSexo;
            nacionalidad = nuevaNacionalidad;
            estadoCivil = nuevoEstadoCivil;
            ocupacion = nuevaOcupacion;
            edad = nuevaEdad;
            numeroTelefono = nuevoNumeroTelefono;
            numeroDosis = nuevoNumeroDosis;
        }
        ~Pacientes(){}
        void imprime()
        {
            cout << "Nombre: " << getNombre() << endl;
            cout << "Edad: " << getEdad() << endl;
            cout << "Sexo: " << getSexo() << endl;
            cout << "Nacionalidad: " << getNacionalidad() << endl;
            cout << "Estado Civil: " << getEstadoCivil() << endl;
            cout << "Ocupación: " << getOcupacion() << endl;
            cout << "Domicilio: " << getDomicilio() << endl;
            cout << "Número Telefónico: " << getNumeroTelefono() << endl;
            cout << "Factores de riesgo: " << getFactoresRiesgo() << endl;
            cout << "Síntomas: " << getSintomas() << endl;
            cout << "Dosis aplicadas: " << getNumeroDosis() << endl;
        }
        void setSintomas(string nuevosSintomas)
        {
            sintomas = nuevosSintomas;
        }
        void setNombre(string nuevoNombre)
        {
            nombre = nuevoNombre;
        }
        void setFactoresRiesgo(string nuevosFactoresRiesgo)
        {
            factoresRiesgo = nuevosFactoresRiesgo;
        }
        void setDomicilio(string nuevoDomicilio)
        {
            domicilio = nuevoDomicilio;
        }
        void setSexo(string nuevoSexo)
        {
            sexo = nuevoSexo;
        }
        void setNacionalidad(string nuevaNacionalidad)
        {
            nacionalidad = nuevaNacionalidad;
        }
        void setEstadoCivil(string nuevoEstadoCivil)
        {
            estadoCivil = nuevoEstadoCivil;
        }
        void setOcupacion(string nuevaOcupacion)
        {
            ocupacion = nuevaOcupacion;
        }
        void setEdad(int nuevaEdad)
        {
            edad = nuevaEdad;
        }
        void setNumeroTelefono(int nuevoNumeroTelefono)
        {
            numeroTelefono = nuevoNumeroTelefono;
        }
        void setNumeroDosis(int nuevoNumeroDosis)
        {
            numeroDosis = nuevoNumeroDosis;
        }
        string getSintomas()
        {
            return sintomas;
        }
        string getNombre()
        {
            return nombre;
        }
        string getFactoresRiesgo()
        {
            return factoresRiesgo;
        }
        string getDomicilio()
        {
            return domicilio;
        }
        string getSexo()
        {
            return sexo;
        }
        string getNacionalidad()
        {
            return nacionalidad;
        }
        string getEstadoCivil()
        {
            return estadoCivil;
        }
        string getOcupacion()
        {
            return ocupacion;
        }
        int getEdad()
        {
            return edad;
        }
        int getNumeroTelefono()
        {
            return numeroTelefono;
        }
        int getNumeroDosis()
        {
            return numeroDosis;
        }
};

class Ventas //Le ofrece la vacuna al cliente
{
    private:
        Pacientes cliente;
        int dosis;
    public:
        Ventas()
        {
            dosis = cliente.getNumeroDosis() + 1;
        }
        Ventas(Pacientes nuevoCliente, int nuevaDosis)
        {
            cliente = nuevoCliente;
            dosis = nuevaDosis+1;
        }
        ~Ventas(){}
        void imprimeVenta()
        {
            cout << "Nombre: " << cliente.getNombre() << endl;
            cout << "Domicilio: " << cliente.getDomicilio() << endl;
            cout << "Número Telefónico: " << cliente.getNumeroTelefono() << endl;
            cout << "Número de dósis: " << getDosis() << endl;
        }
        void setCliente(Pacientes nuevoCliente)
        {
            cliente = nuevoCliente;
        }
        void setDosis(int nuevaDosis)
        {
            dosis = nuevaDosis;
        }
        Pacientes getCliente()
        {
            return cliente;
        }
        int getDosis()
        {
            return dosis;
        }
};

void baseDatosPacientes(Pacientes patients[], int NUM)
{
    for(int i=0; i<NUM; i++)
    {
        string symptom, name, riskFactors, address, sex, citizenship, maritalStatus, occupation;
        int age, phoneNumber, dosesNumber;
        cout << "Ingresa el nombre del paciente: "<< endl;
        cin >> name;
        patients[i].setNombre(name);
        cout << "Ingresa la edad del paciente: "<< endl;
        cin >> age;
        patients[i].setEdad(age);
        cout << "Ingresa el sexo del paciente: "<< endl;
        cin >> sex;
        patients[i].setSexo(sex);
        cout << "Ingresa la nacionalidad del paciente: "<< endl;
        cin >> citizenship;
        patients[i].setNacionalidad(citizenship);
        cout << "Ingresa el estado civil del paciente: "<< endl;
        cin >> maritalStatus;
        patients[i].setEstadoCivil(maritalStatus);
        cout << "Ingresa la ocupación del paciente: "<< endl;
        cin >> occupation;
        patients[i].setOcupacion(occupation);
        cout << "Ingresa el domicilio del paciente: "<< endl;
        cin >> address;
        patients[i].setDomicilio(address);
        cout << "Ingresa el número telefónico del paciente: "<< endl;
        cin >> phoneNumber;
        patients[i].setNumeroTelefono(phoneNumber);
        cout << "Ingresa los factores de riesgo que tenga el paciente: "<< endl;
        cin >> riskFactors;
        patients[i].setFactoresRiesgo(riskFactors);
        cout << "Ingresa los síntomas del paciente: "<< endl;
        cin >> symptom;
        patients[i].setSintomas(symptom);
        cout << "¿Cuántas dosis se ha aplicado?: "<< endl;
        cin >> dosesNumber;
        patients[i].setNumeroDosis(dosesNumber);
    }
}

void imprimeBaseDatos(Pacientes patients[], int NUM)
{
    for(int i=0; i<NUM; i++)
    {
        patients[i].imprime();
    }
}

int main()
{
    int NUM;
    NUM = 1;
    Pacientes pacientes[NUM];
    baseDatosPacientes(pacientes,NUM);
    Ventas venta1{pacientes[0],pacientes[0].getNumeroDosis()};
    venta1.imprimeVenta();
    return 0;
}
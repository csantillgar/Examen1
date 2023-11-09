#include<iostream>
using namespace std;

class Estudiante {
public:
    string nombre; // Atributos
    int edad;
    string grado;

    void mostrar_info(){// Metodos
        cout << "Nombre: " << nombre << endl;//
        cout << "Edad: " << edad << " anos"<< endl;
        cout << "Grado: " << grado << endl;
    }
};
int main(){
    Estudiante estudiante1;// Instancia de la clase
    estudiante1.nombre = "Juan";// Accediendo a los atributos
    estudiante1.edad = 15;
    estudiante1.grado = "Segundo";

    estudiante1.mostrar_info();// Accediendo a los metodos

    return 0;
}
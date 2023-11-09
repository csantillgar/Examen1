#include<iostream>
using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    string grado;

    void mostrar_info(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " anos"<< endl;
        cout << "Grado: " << grado << endl;
    }
};
int main(){
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 15;
    estudiante1.grado = "Segundo";

    estudiante1.mostrar_info();

    return 0;
}
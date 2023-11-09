#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    string grado;
    vector<string> materias; // Vector para almacenar las materias registradas

public:
    // Constructor que recibe el nombre, edad y grado del estudiante
    Estudiante(string _nombre, int _edad, string _grado)
            : nombre(_nombre), edad(_edad), grado(_grado) {}

    // Función miembro para agregar una materia a la lista
    void registrar_materia(string materia) {
        materias.push_back(materia);
    }

    // Función miembro para mostrar todas las materias registradas
    void mostrar_materias() {
        cout << "Materias registradas para " << nombre << ":" << endl;
        for (const auto &materia : materias) {
            cout << "- " << materia << endl;
        }
    }
};

int main() {
    // Crear un objeto de la clase Estudiante
    Estudiante estudiante1("Juan", 15, "Segundo");

    // Registrar algunas materias
    estudiante1.registrar_materia("Matematicas");
    estudiante1.registrar_materia("Historia");
    estudiante1.registrar_materia("Programacion");

    // Mostrar las materias registradas
    estudiante1.mostrar_materias();

    return 0;
}

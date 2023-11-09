#include <iostream>
#include <vector>

using namespace std;

// Función para calcular el promedio de calificaciones
double calcular_promedio(const vector<int>& calificaciones) {
    if (calificaciones.empty()) {
        // Manejar el caso de un vector vacío para evitar división por cero
        cerr << "Error: El vector de calificaciones está vacío." << endl;
        return 0.0;
    }

    // Calcular la suma de las calificaciones
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / calificaciones.size();
    return promedio;
}

int main() {
    // Ejemplo de uso
    vector<int> calificaciones = {85, 90, 78, 92, 88};

    // Calcular y mostrar el promedio
    double promedio = calcular_promedio(calificaciones);
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}

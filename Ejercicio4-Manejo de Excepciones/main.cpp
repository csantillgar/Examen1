#include<iostream>
#include<stdexcept>
using namespace std;
void operacion_Ruben(int divisor){//Definicion de la funcion que simula una operacion que puede lanzar una excepcion
    if (divisor == 0){//verifica si el divisor es 0
        throw runtime_error("Division por cero");
    }
//Si no hubiera ningun problema realizaría la operación
int resultado=10 /divisor;
cout << "Resultado:" <<resultado << endl;
}

int main(){
try{
    operacion_Ruben(2);// llama a la funcion con un divisor valido

    operacion_Ruben(0);// llama a la funcion con un divisor invalido
}
catch (const runtime_error &e){//captura la excepcion
   cout<< "Error:" << e.what() << endl;
}

return 0;
}
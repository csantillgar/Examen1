#include<iostream>
using namespace std;
void intercambiar_valores(int* a, int* b){//Paso por referencia
    int temp = *a;
    *a = *b;
    *b = temp;//puntero temporal
}
int main(){
int num1 = 7;//Asignacion de valores iniciales
int num2 = 9;

cout <<"Valores originales: " << num1 << " " << num2 << endl;//Se imprimen los valores originales

intercambiar_valores(&num1, &num2);//Intercambio de valores
cout<<"Valores intercambiados: " << num1 << " " << num2 << endl;//Se imprimen los valores intercambiados

    return 0;
}
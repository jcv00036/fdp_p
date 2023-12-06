//@title: Potencia
//@author: Juan Carrasco Vico
//@desc: El programa pide al usuario 2 numeros y eleva el primero al segundo

#include <iostream>
using namespace std;

int main(){

    int base, exponente, potencia = 1;

    do{
        cout << "Escribe una base (entero positivo): " << endl;
        cin >> base;
    }while(base <= 0);

    do{
        cout << "Escribe un exponente (entero positivo): " << endl;
        cin >> exponente;
    }while(exponente <= 0);

    for(int i = 0; i < exponente; ++i){
        potencia = potencia * base;
    }

    cout << base << " ^ " << exponente << " = " << potencia;

}
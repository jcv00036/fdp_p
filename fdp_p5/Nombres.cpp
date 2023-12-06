//@title: Nombres
//@author: Juan Carrasco Vico
//@desc: Escribe un programa que solicite de la entrada estándar un nombre y compruebe si el
//nombre se encuentra o no en un vector iniciado con una serie de nombres.

#include <iostream>

using namespace std;

const int NUMERO_DE_NOMBRES = 5;

int main() {
    string cadena = "", nombres[NUMERO_DE_NOMBRES] ={"Juan", "Pepe", "Natalia", "Maria","Alfredo"};
    bool coincide = false;

    cout << "Introduce un nombre: " << endl;
    getline(cin >> ws, cadena);

    //imprimir el vector de nombres y comprobar si alguno coincide
    cout << "Los nombres almacenados son: ";
    for (int i = 0; i < NUMERO_DE_NOMBRES; ++i) {
        cout << nombres[i];
        if(i < NUMERO_DE_NOMBRES-1){
            cout << ", ";
        }else{
            cout << endl;
        }
        if(cadena == nombres[i] && !coincide){
            coincide = true;
        }
    }

    if(coincide){
        cout << "El nombre " << cadena << " esta dentro del vector.";
    }else{
        cout << "El nombre " << cadena << " no esta dentro del vector.";
    }

    return 0;
}
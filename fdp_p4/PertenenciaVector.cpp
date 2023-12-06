//@title: PertenenciaVector
//@author: Juan Carrasco Vico
//@desc:   Escribe un programa que defina un vector de números enteros, solicite al usuario un
//entero y muestre un mensaje en la salida estándar indicando si el entero introducido por
//el usuario se encuentra en el vector.

#include <iostream>

using namespace std;

const int MAX_INDEX = 5;

int main(){

    int vector[MAX_INDEX] = {1,2,3,4,5,}, numero;
    bool isIgual = false;

    cout << "Introduce un numero: " << endl;
    cin >> numero;

    cout << "El vector es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        cout << i+1 << ": " << vector[i];
        if(i<MAX_INDEX-1){
            cout <<", ";
        }

        //Compruebo si el elemento actual es igual al numero introducido:
        if(numero  == vector[i] && !isIgual){
            isIgual = true;
        }
    }

    if(isIgual){
        cout << endl << "El numero introducido se encuentra en el vector";
    }else{
        cout << endl <<"El numero introducido no se encuentra en el vector";
    }

}
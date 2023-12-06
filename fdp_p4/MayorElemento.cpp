//@title: MayorElemento
//@author: Juan Carrasco Vico
//@desc:   Desarrolla un programa que inicie un vector de enteros con valores leídos de la entrada
//estándar y, a continuación, calcule el mayor elemento del vector.
#include <iostream>

using namespace std;

const int MAX_INDEX = 5;

int main(){

    int vector[MAX_INDEX], numeroMayor;

    //leer elementos vector desde entrada estandar
    for(int i = 0; i< MAX_INDEX; ++i){
        cout << "Introduce el numero " << i+1 << endl;
        cin >> vector[i];
    }

    //supongamos que el primer numero es mas grande, despues leeremos los demás
    // indices para ver si hay alguno más grande:
    numeroMayor = vector[0];
    cout << "El vector es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        cout << i+1 << ": " << vector[i];
        if(i<MAX_INDEX-1){
            cout <<", ";
        }

        //Compruebo si el elemento actual es mayor que el elemento que ya tengo almacenado
        //como mayor
        if(numeroMayor<vector[i]){
            numeroMayor = vector[i];
        }
    }

    cout << endl << "El elemento mas grande del vector es: " << numeroMayor;

}
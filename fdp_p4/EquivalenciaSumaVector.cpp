//@title: EquivalenciaSumaVector
//@author: Juan Carrasco Vico
//@desc:Escribe un programa que defina un vector de números y calcule si existe algún número
//en el vector cuyo valor equivale a la suma del resto de números del vector.
#include <iostream>

using namespace std;

const int MAX_INDEX = 5;

int main(){

    int vector[MAX_INDEX]{1,2,3,4,10,}, indiceEquivalente;
    bool isEquivalente = false;

    cout << "El vector es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        cout << i+1 << ": " << vector[i];
        if(i<MAX_INDEX-1){
            cout <<", ";
        }

    }

    for(int i = 0; i < MAX_INDEX; ++i){

        //compruebo si este elemento es igual a la suma de los demas:
        int sumaPrueba = 0;
        for (int j = 0; j < MAX_INDEX; ++j){
            if(j!=i){
                sumaPrueba += vector[j];
            }
        }
        if(sumaPrueba == vector[i]){
            isEquivalente = true;
            cout << endl << "El elemento "<< vector[i] << " de indice " << i << " es equivalente a la suma de los demas elementos." << endl;
        }
    }

    if(!isEquivalente){
        cout << endl << "No hay elementos equivalentes a la suma de los demas elementos";
    }
}
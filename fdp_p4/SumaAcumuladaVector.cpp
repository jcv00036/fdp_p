//@title: SumaAcumuladaVector
//@author: Juan Carrasco Vico
//@desc:  Escribe un programa que defina un vector de números y calcule la suma acumulada de
//sus elementos.
#include <iostream>

using namespace std;

const int MAX_INDEX = 5;

int main(){

    int vector[MAX_INDEX] = {1,2,3,4,5}, suma = 0 ;

    cout << "El vector es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        cout << i+1 << ": " << vector[i];
        if(i<MAX_INDEX-1){
            cout <<", ";
        }

        //sumo todos los indices anteriores al actual:
        for(int j = 0; j <= i; ++j){
            suma += vector[j];
        }
    }

    cout << endl << "La suma acumulada de< los elementos del vector es: " << suma;

}
//@title: SumaVector
//@author: Juan Carrasco Vico
//@desc:  Escribe un programa que defina un vector de números y calcule la suma de sus
//elementos.

#include <iostream>

using namespace std;

const int MAX_INDEX = 5;

int main(){

    int vector[MAX_INDEX] = {1,2,3,4,5}, suma = 0;

    cout << "El vector es: " << endl;
    for(int i = MAX_INDEX-1; i >= 0; --i){
        cout << i+1 << ": " << vector[i];
        if(i>0){
            cout <<", ";
        }
        suma += vector[i];
    }

    cout << endl << "La suma de los elementos del vector es: " << suma;

}
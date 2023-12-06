//@title:MostrarVector
//@author: Juan Carrasco Vico
//@desc:Escribe un programa que lea de la entrada estándar una serie de números y los
//almacene en un vector. Una vez rellenado el vector con los números leídos, muestre en
//la salida estándar los números del vector con sus índices asociados.

#include <iostream>

using namespace std;

const int MAX_INDEX = 5;

int main(){

    int vector[MAX_INDEX];

    for(int i = 0; i< MAX_INDEX; ++i){
        cout << "Introduce el numero " << i+1 << endl;
        cin >> vector[i];
    }


    cout << "El vector es: " << endl;
    for(int i = 0; i< MAX_INDEX; ++i){
        cout << i+1 << ": " << vector[i];
        if(i<MAX_INDEX-1){
            cout <<", ";
        }
    }

}
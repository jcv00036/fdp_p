//@title:VectorInverso
//@author: Juan Carrasco Vico
//@desc: Escribe un programa que defina un vector de números y muestre en la salida estándar
//el vector en orden inverso (es decir, del último al primer elemento).

#include <iostream>

using namespace std;

const int MAX_INDEX = 5;

int main(){

    int vector[MAX_INDEX] = {1,2,3,4,5};

    cout << "El vector es: " << endl;
    for(int i = MAX_INDEX-1; i >= 0; --i){
        cout << i+1 << ": " << vector[i];
        if(i>0){
            cout <<", ";
        }
    }

}
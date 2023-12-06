//@title: ParImpar
//@author: Juan Carrasco Vico
//@desc: El programa indica si un número introducido es par o impar

#include <iostream>

using namespace std;

int main(){
    int edad;

    cout << "Escribe tu edad: " << endl;
    cin >> edad;

    if (edad >= 18 && edad <= 25){
        cout << "Tu edad esta entre 18 y 25 anios";
    }else{
        cout << "Tu edad no esta entre 18 y 25 anios";
    }

    return 0;

}
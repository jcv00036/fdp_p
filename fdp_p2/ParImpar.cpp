//@title: ParImpar
//@author: Juan Carrasco Vico
//@desc: El programa indica si un número introducido es par o impar

#include <iostream>

using namespace std;

int main(){
    int numero;

    cout << "Dime un numero: ";
    cin >> numero;

    if ( (numero % 2) == 0){
        cout << "El numero es par";
    }else{
        cout << "El numero es impar";
    }

    return 0;
}
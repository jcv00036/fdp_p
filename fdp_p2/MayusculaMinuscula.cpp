//@title: ParImpar
//@author: Juan Carrasco Vico
//@desc: El programa indica si un número introducido es par o impar

#include <iostream>

using namespace std;

int main(){
    char caracter;

    cout << "Introduce un caracter: ";
    cin >> caracter;

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
        cout << "El caracter es una vocal minuscula";
    }else if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
        cout<< "El caracter es una vocal mayuscula";
    }else{
        cout << "El caracter no es una vocal";
    }

    return 0;

}
//@title: ParImpar
//@author: Juan Carrasco Vico
//@desc: El programa indica si un número introducido es par o impar

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2;

    cout << "Introduce un numero: " << endl;
    cin >> numero1;

    cout << "Introduce otro numero: " << endl;
    cin >> numero2;

    if (numero1 > numero2){
        cout << numero1 << " es mayor que " << numero2;
    }else if (numero2 > numero1) {
        cout << numero2 << " es mayor que " << numero1;
    }else{
        cout<< "Ambos numero son iguales";
    }

    return 0;

}
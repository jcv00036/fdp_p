//@title: ParImpar
//@author: Juan Carrasco Vico
//@desc: El programa indica si un número introducido es par o impar

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, numero3;

    cout << "Introduce un numero: " << endl;
    cin >> numero1;

    cout << "Introduce otro numero: " << endl;
    cin >> numero2;

    cout << "Introduce otro numero: " << endl;
    cin >> numero3;

    if (numero1 > numero2 && numero1 > numero3){
        cout << numero1 << " es mayor que " << numero2 << " y que " << numero3;
    }else if (numero2 > numero1 && numero2 > numero3){
        cout << numero2 << " es mayor que " << numero1 << " y que " << numero3;
    }else if (numero3 > numero1 && numero3 > numero2){
        cout << numero3 << " es mayor que " << numero1  << " y que " << numero2;
    }else {
        cout << "No hay un solo numero mayor, al menos dos coinciden";
    }

    return 0;

}
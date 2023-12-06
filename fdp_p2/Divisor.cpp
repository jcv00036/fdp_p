//@title: ParImpar
//@author: Juan Carrasco Vico
//@desc: El programa indica si un número introducido es par o impar

#include <iostream>

using namespace std;

int main(){
    int dividendo, divisor;

    cout << "Dime un numero: ";
    cin >> dividendo;

    cout << "Dime otro numero: ";
    cin >> divisor;

    if ( (dividendo % divisor) == 0){
        cout << "El numero " << dividendo << " es divisible por " << divisor;
    }else{
        cout << "El numero " << dividendo << " no es divisible por " << divisor;
    }

    return 0;

}
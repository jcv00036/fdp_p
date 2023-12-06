//@file edad.cpp
//@author Created by Juan Carrasco Vico
//@date 18/09/2023.
//@desc Este programa pide el año en que naciste y te dice cuantos años tienes

#include <iostream>

using namespace std;

int main() {

    int numero1,numero2;

    cout << "Dame un numero: " ;
    cin >> numero1;

    cout << endl << "Dame otro numero: " ;
    cin >> numero2;

    //Suma
    int suma = numero1 + numero2;
    cout << endl << numero1 << " + " << numero2 << " = " << suma;

    //Resta
    int resta = numero1 - numero2;
    cout << endl << "Suma: " << numero1 << " - " << numero2 << " = " << resta;

    //Producto
    int producto = numero1 * numero2;
    cout << endl << "Producto: " << numero1 << " * " << numero2 << " = " << producto;

    //División
    int division = numero1 / numero2;
    cout << endl << "Division: " << numero1 << "  / " << numero2 << " = " << division;

    return 0;
}
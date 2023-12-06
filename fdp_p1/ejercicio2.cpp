//@file edad.cpp
//@author Created by Juan Carrasco Vico
//@date 18/09/2023.
//@desc Este programa pide el año en que naciste y te dice cuantos años tienes

#include <iostream>
using namespace std;

const float iva = 0.21;

int main() {

    float precio;

    cout << "Cuanto vale el producto?" << endl;
    cin >> precio;

    float precio_impuesto = precio + precio*iva;

    cout << endl << "El producto vale " << precio_impuesto << " euros si le anadimos el IVA";

    return 0;
}
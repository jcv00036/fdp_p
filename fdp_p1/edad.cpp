//@file edad.cpp
//@author Created by Juan Carrasco Vico
//@date 18/09/2023.
//@desc Este programa pide el año en que naciste y te dice cuantos años tienes

#include <iostream>

using namespace std;

int main() {
    int ano_de_nacimiento;
    int edad;

    cout << "En que anio naciste?" << endl; //La ñ no se imprime correctamente
    cin >> ano_de_nacimiento;

    edad = 2023 - ano_de_nacimiento;

    cout << "Tienes " << edad << " anios";

    return 0;
}
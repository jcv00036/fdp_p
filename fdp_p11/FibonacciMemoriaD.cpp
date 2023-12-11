//@Title: FibonacciMemoriaD
//@Author: Juan Carrasco Vico
//@Desc:Realiza un programa que solicite al usuario un número n y calcule y muestre en la
//pantalla los primeros n números de la serie de Fibonacci. Almacena los números de la
//serie en un vector dinámico.

#include <iostream>
#include <sstream>
using namespace std;

/**
 * Imprime un vector cualquiera
 * @param vector
 * @param tam
 * @return stringstream con los datos
 */
string imprimirVector(int vector[],int tam){
    stringstream sso;

    sso << "[";
    for (int i = 0; i < tam; ++i) {
        sso << vector[i];
        if (i<tam-1) sso << " , ";
    }
    sso << "]";

    return sso.str();
}

int main(){

    int tamIndicado;
    cout << "Cuantos numeros quieres de la sucesion?" << endl;
    cin >> tamIndicado;

    int *vector = new int[tamIndicado];
    vector[0] = 0;
    vector[1] = 1;

    for (int i = 2; i < tamIndicado; ++i) {
        vector[i] = vector[i-2] + vector[i-1];
    }

    cout << imprimirVector(vector,tamIndicado);

    delete[] vector;
    return 0;
}

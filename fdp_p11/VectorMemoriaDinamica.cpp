//@Title: VectorMemoriaDinamica
//@Author: Juan Carrasco Vico
//@Desc:  Realiza un programa que solicite al usuario un tamaño de vector y reserve memoria
//dinámica para un vector de enteros con el tamaño indicado. A continuación rellene el
//vector con valores solicitados al usuario. Realiza también una función que muestre el
//contenido de un vector y utilízala para comprobar que los valores solicitados al usuario
//se han leído correctamente.

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
    cout << "De que tam quieres el vector?" << endl;
    cin >> tamIndicado;

    int *vector = new int[tamIndicado];

    for (int i = 0; i < tamIndicado; ++i) {
        cout << "Indique el valor de la posicion " << i <<":"<< endl;
        cin >> vector[i];
    }

    cout << imprimirVector(vector,tamIndicado);

    delete[] vector;
    return 0;
}

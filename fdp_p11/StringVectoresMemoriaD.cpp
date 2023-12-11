//@Title: StringVectoresMemoriaD
//@Author: Juan Carrasco Vico
//@Desc:Realiza las siguientes funciones para el trabajo con vectores de string:
//  ○ Función que recibe como entrada un tamaño y devuelve un vector ubicado
//    en memoria dinámica de ese tamaño.
//  ○ Función que recibe como entrada un vector de strings y su tamaño y muestre
//    en la salida estándar los strings. Cada string debe aparecer en una línea
//    distinta.
//  ○ Función que recibe un vector de strings ubicado en memoria dinámica, su
//    tamaño y un nuevo tamaño. La función debe trasladar el vector original a otro
//    vector en memoria dinámica que tenga el nuevo tamaño. El nuevo tamaño
//    puede ser menor o mayor que el tamaño previo. Se debe liberar la memoria
//    ocupada por el vector original y se debe devolver la dirección de inicio en
//    memoria dinámica del nuevo vector.
//  ○ Función que reciba un vector de strings y devuelva una copia del vector.
//  ○ Función main que permita probar las funciones anteriores.

#include <iostream>
#include <sstream>
using namespace std;

/**
 * Crea un nuevo vector en memoria dinamica con el tamaño especificado en parámetros
 * @param tam
 * @return nuevoVector
 */
string* crearVectorStrings(int tam){
    string *nuevoVector = new string[tam];
    return nuevoVector;
}

/**
 * Imprime un vector de strings
 * @param vector
 * @param tam
 * @return stringstream con los datos
 */
string imprimirVectorStrings(string vector[],int tam){
    stringstream sso;

    sso << "_____________________________" << endl;
    for (int i = 0; i < tam; ++i) {
        sso << i << ". " << '"' << vector[i]<< '"'<< endl;
    }
    sso << "_____________________________" <<endl;

    return sso.str();
}

/**
 * La funcion traslada el vector original a otro vector en memoria
 * dinámica que tenga el nuevo tamaño "nuevoTam"
 * @param vectorOriginal
 * @param tam
 * @param vectorNuevo
 * @param nuevoTam
 * @return
 */
string* traspasarVectores(string vectorOriginal[], int tam, string vectorNuevo[], int nuevoTam){
    for (int i = 0; i < nuevoTam; ++i) {
        if(i < tam){
            vectorNuevo[i] = vectorOriginal[i];
        }else{
            vectorNuevo[i] = "**vacio!**";
        }
    }

    delete[] vectorOriginal;
    return &vectorNuevo[0];
}

/**
 * Copiar el contenido de un vector en uno nuevo
 * @param vector
 * @param tam
 * @return
 */
string* copiarVector(string vector[],int tam){
    string *vectorCopia = crearVectorStrings(tam);
    for (int i = 0; i < tam; ++i) {
        vectorCopia[i] = vector[i];
    }
    return vectorCopia;
}

int main(){

    int tam = 3, tamTraspasado =5;
    string *vector = new string[tam];
    vector[0] = "Lleva la tarara";
    vector[1] = "un vestido";
    vector[2] = "blanco lleno de cascabeles";

    cout << imprimirVectorStrings(vector,tam);

    string *nuevoVector = new string[tamTraspasado];
    traspasarVectores(vector,tam,nuevoVector,tamTraspasado);
    cout << imprimirVectorStrings(nuevoVector,tamTraspasado);

    string *vectorCopiar = copiarVector(nuevoVector,tamTraspasado);
    cout << imprimirVectorStrings(vectorCopiar,tamTraspasado);

    delete[] nuevoVector;
    delete[] vectorCopiar;
    delete[] vector;
    return 0;
}

//@Title: Intercambio
//@Author: Juan Carrasco Vico
//@Desc: Escribe una función que tome como parámetros dos punteros a datos del mismo tipo e
//intercambie el contenido de las zonas de memoria a las que apuntan los punteros. Es
//decir, la función debe intercambiar a sus dos parámetros---recibidos por referencia
//mediante sintaxis de paso de punteros.

#include <iostream>
using namespace std;

void intercambiarInt(int *puntero1, int *puntero2){

    int aux = *puntero2;
    *puntero2 = *puntero1;
    *puntero1 = aux;

}

int main(){

    int numero1 = 125, numero2 = 412;

    int *puntero1 = &numero1;
    int *puntero2 = &numero2;

    cout << *puntero1 << "  " << *puntero2 << endl;

    intercambiarInt(puntero1,puntero2);

    cout << *puntero1 << "  " << *puntero2;
    return 0;
}
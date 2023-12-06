//@Title:CambiarSignos
//@Author: Juan Carrasco Vico
//@Desc: Realiza una función que tome como parámetros un vector de números y su tamaño y
//cambie el signo de los elementos del vector.

#include <iostream>
using namespace std;

int const MAX_VALORES = 20;

void invertirValores(int  numeros[MAX_VALORES], int tamano){
    for(int i = 0; i < tamano; ++ i ){
        numeros[i] = -numeros[i];
    }
}

string imprimirArray(int numeros[MAX_VALORES], int tamano){
    string cadenaAImprimir = "[ ";
    for(int i = 0; i < tamano; ++ i ){
        cadenaAImprimir += to_string(numeros[i]);
        if(i < (tamano-1)){
            cadenaAImprimir+= ",";
        }else{
            cadenaAImprimir+= " ]";
        }
    }
    return cadenaAImprimir;
}

int main(){
    int numeros[MAX_VALORES] = {0,2,3,45,67,1,24}, tamReal = 7;

    cout << "La inversion de los elementos del vector " << imprimirArray(numeros,tamReal) << " resultan en el vector ";
    invertirValores(numeros,tamReal);
    cout << imprimirArray(numeros,tamReal);

    return 0;
}

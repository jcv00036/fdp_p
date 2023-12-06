//@Title:SumaElementos
//@Author: Juan Carrasco Vico
//@Desc: Implementa una función que tome como parámetros un vector de números y devuelva la
//suma de sus elementos.

#include <iostream>
using namespace std;

int const MAX_VALORES = 20;

int sumarValores(int const numeros[MAX_VALORES], int tamano){
    int suma = 0;
    for(int i = 0; i < tamano; ++ i ){
        suma+=numeros[i];
    }
    return suma;
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
    int numeros[MAX_VALORES] = {0,2,3,45,67,1,24}, tamReal = 7,suma = sumarValores(numeros,tamReal);

    cout << "Los elementos del vector " << imprimirArray(numeros,tamReal) << " suman un valor de " << suma;

    return 0;
}

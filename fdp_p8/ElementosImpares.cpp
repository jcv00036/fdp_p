//@Title: ElementosImpares
//@Author: Juan Carrasco Vico
//@Desc: Realiza una función que tome como parámetros un vector de enteros y su tamaño y
//devuelva un vector con los elementos impares del vector recibido.

#include <iostream>
using namespace std;

int const MAX_VALORES = 20;

void vectorImpares(int  numeros[MAX_VALORES], int tamano, int impares[MAX_VALORES], int &tamanoImpares){
    tamanoImpares=0;
    for(int i = 0; i < tamano; ++ i ){
        if((i+1)%2 != 0){
            impares[tamanoImpares] = numeros[i];
            ++ tamanoImpares;
        }
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
    int numeros[MAX_VALORES] = {0,2,3,45,67,1,24}, tamReal = 7,
    numerosImpares[MAX_VALORES], tamRealImpares = 0;
    cout << "Los elementos impares del vector " << imprimirArray(numeros,tamReal) << " son ";
    vectorImpares(numeros,tamReal,numerosImpares,tamRealImpares);
    cout << imprimirArray(numerosImpares,tamRealImpares);

    return 0;
}

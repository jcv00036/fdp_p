//@Title: OrdenarVector
//@Author: Juan Carrasco Vico
//@Desc: En este ejercicio se va a implementar el algoritmo de selección, que sirve para ordenar
//de forma creciente una secuencia de elementos, en nuestro caso, almacenados en un
//vector. Dado un vector de n elementos, por ejemplo: { 5, 9, 2, 1, 4 }, el algoritmo
//selecciona el mínimo de los elementos del vector y lo intercambia por el elemento que
//ocupa la primera posición del vector, en el ejemplo esto produce el vector { 1, 9, 2, 5, 4 }.
//A continuación selecciona el mínimo de los elementos entre las posiciones 1 y n-1 y lo
//intercambia por el elemento en la posición 1. En el ejemplo, esto produce el vector { 1, 2,
//9, 5, 4 }. En general, en la iteración i se selecciona el mínimo entre las posiciones [i,n-1] y
//se intercambia con el valor en la posición i, tras ello se verifica que las posiciones [0,i] del
//vector contienen los i+1 elementos menores del vector ordenados.

#include <iostream>
using namespace std;

int const MAX_VALORES = 20;

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

void igualarVectores(const int vector1[], int vector2[], int tam){
    for (int i = 0; i < tam; ++i) {
        vector2[i] = vector1[i];
    }
}

int minimoArray(int const vector[MAX_VALORES],int const tam){
    int minimo = 0;
    for (int j = 1; j < tam; ++j) {
        if(vector[j] < vector[j-1] && vector[j]<vector[minimo]){
            minimo = j;
        }
    }
    return minimo;
}

void intercambioArray(int vector[MAX_VALORES],int const tam, int posMin){
    for (int j = posMin; j < (tam-1); ++j) {
        vector[j] = vector[j+1];
    }
}

/** *
 * @param vector
 * @param tamaño real del vector
 * @returns vector ordenado *
 */
void ordenarArray(int const vector[MAX_VALORES], const int tam, int vectorOrdenados[MAX_VALORES]){
    int vectorDesordenados[tam], ordenados, desordenados = tam, minimo;
    //el vector de desordenados es igual al vector parametro en un principio
    igualarVectores(vector,vectorDesordenados,tam);
    for (int i = 0; i < tam; ++i) {
        minimo = minimoArray(vectorDesordenados, desordenados);

        vectorOrdenados[i] = vectorDesordenados[minimo]; // añadir a vector de numeros ordenados

        intercambioArray(vectorDesordenados,desordenados,minimo);

        -- desordenados;
        ++ ordenados;
    }
}

int main(){
    int vector[MAX_VALORES] =  { 5, 9, 2, 1, 4,10,2987,13,24 }, tamReal = 9, vectorOrdenado[MAX_VALORES];

    ordenarArray(vector,tamReal, vectorOrdenado);

    cout << "El vector ordenado de " << imprimirArray(vector,tamReal) << " es " << imprimirArray(vectorOrdenado,tamReal) << endl;

    return 0;
}

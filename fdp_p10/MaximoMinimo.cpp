//@Title: MaximoMinimo
//@Author: Juan Carrasco Vico
//@Desc:  Escribe una función que tome como parámetro un vector y su tamaño y devuelva el
//máximo y el mínimo de sus elementos. Utilice parámetros de tipo puntero para
//especificar el vector y los parámetros de salida de la función.

#include <iostream>
using namespace std;

int maximo(int vector[], int tam){
    int max = 0;
    for (int i = 0; i < tam; ++i) {
        if(vector[i]>vector[max]) max = i;
    }
    return vector[max];
}
int minimo(int vector[], int tam){
    int min = 0;
    for (int i = 0; i < tam; ++i) {
        if(vector[i]<vector[min]) min = i;
    }
    return vector[min];
}

int main(){

    int *pVector = new int[4];
    int contador = 0;
    pVector[contador] = 1;
    pVector[++ contador] = 6;
    pVector[++ contador] = 7;
    pVector[++ contador] = 3;
    pVector[++ contador] = 9;
    int tamReal = ++contador;

    cout << "El maximo del vector es: " << maximo(pVector,tamReal) <<
    " y el minimo es: " << minimo(pVector,tamReal) << endl;

    delete [] pVector;
    return 0;
}
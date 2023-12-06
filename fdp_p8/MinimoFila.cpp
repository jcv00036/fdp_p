//@Title: MinimoFila
//@Author: Juan Carrasco Vico
//@Desc: Realiza una función que dada una matriz y un número de fila de la matriz devuelva el
//mínimo de los elementos almacenados en dicha fila.

#include <iostream>
using namespace std;

int const MAX_VALORES = 20;

int minimoFila(int  matriz[MAX_VALORES][MAX_VALORES], int filas, int columnas, int filaEvaluada){
    int minimo = matriz[filaEvaluada][0];
    for (int i = 1; i < columnas; ++i) {
        if (matriz[filaEvaluada][i] < matriz[filaEvaluada][i-1] && matriz[filaEvaluada][i] < minimo){
            minimo = matriz[filaEvaluada][i];
        }
    }
    return minimo;
}

string imprimirMatriz(int matriz[MAX_VALORES][MAX_VALORES], int filas, int columnas){
    string cadenaAImprimir = "";
    for(int i = 0; i < filas; ++ i ){
        cadenaAImprimir+= " [ ";
        for (int j = 0; j < columnas; ++j) {
            cadenaAImprimir += to_string(matriz[i][j]);
            if(j < (columnas-1)){
                cadenaAImprimir+= ",";
            }else{
                cadenaAImprimir+= " ] \n";
            }
        }
    }
    return cadenaAImprimir;
}

int main(){
    int matriz[MAX_VALORES][MAX_VALORES] = {{0,2,3},
                                            {3,2,5},
                                            {8,1,3}}, filas=3, columnas = 3;
    int minimoFila1 = minimoFila(matriz,filas,columnas,1); //el minimo de la fila 1

    cout << "El minimo de la fila 1 de la matriz" << endl << imprimirMatriz(matriz,filas,columnas) << "es " << minimoFila1;

    return 0;
}

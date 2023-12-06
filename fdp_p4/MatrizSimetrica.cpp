//@title: MatrizSimetrica
//@author: Juan Carrasco Vico
//@desc: Desarrolla un programa que determine si una matriz es simétrica o no.
#include <iostream>

using namespace std;

int main(){

    int filas, columnas;
    bool isSimetrica = true; //asumimos que la matriz es simetrica hasta que calculemos que no lo es

    cout << "Introduce el numero de filas: " << endl;
    cin >> filas;
    cout << "Introduce el numero de columnas: " << endl;
    cin >> columnas;

    int matriz[columnas][filas];

    cout << "Introduce los elementos de la matriz: " << endl;
    for(int i = 0; i < filas; ++i){
        for(int j = 0; j < columnas; ++j){
            cout << "Valor " << i << "," << j << ": " << endl;
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    cout << "La matriz es: " << endl;
    for(int i = 0; i < filas; ++i){
        for(int j = 0; j < columnas; ++j){
            cout <<matriz[i][j];
            if(j<filas-1){
                cout <<", ";
            }
        }
        cout << endl;
    }

    if(filas==columnas){
        for(int i = 0; i < filas; ++i){
            for(int j = 0; j < columnas; ++j){
                if(matriz[i][j] != matriz[j][i] && isSimetrica){
                    isSimetrica = false;
                }
            }
            cout << endl;
        }

        if(isSimetrica){
            cout << "La matriz es simetrica";
        }else{
            cout << "La matriz no es simetrica";
        }

    }else{
        cout << "La matriz no es simetrica";
    }

}
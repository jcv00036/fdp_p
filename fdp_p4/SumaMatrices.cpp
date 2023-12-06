//@title: SumaMatrices
//@author: Juan Carrasco Vico
//@desc: Realiza un programa que lea una matriz de 3x3 y cree su matriz traspuesta
#include <iostream>

using namespace std;

const int MAX_INDEX = 3;

int main(){

    int matrizA[MAX_INDEX][MAX_INDEX] = {{1,2,3,},
                                         {4,5,6,},
                                         {7,8,9,}};

    int matrizB[MAX_INDEX][MAX_INDEX] = {{1,2,3,},
                                         {4,5,6,},
                                         {7,8,9,}};;
    int matrizSuma[MAX_INDEX][MAX_INDEX];

    cout << "La matrizA es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        for(int j = 0; j < MAX_INDEX; ++j){
            cout <<matrizA[i][j];
            if(j<MAX_INDEX-1){
                cout <<", ";
            }
        }
        cout << endl;
    }

    cout << "La matrizB es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        for(int j = 0; j < MAX_INDEX; ++j){
            cout << matrizB[i][j];
            if(j<MAX_INDEX-1){
                cout <<", ";
            }
            matrizSuma[i][j] = matrizA[i][j]+matrizB[i][j];
        }
        cout << endl;
    }

    cout << "La matriz suma es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        for(int j = 0; j < MAX_INDEX; ++j){
            cout << matrizSuma[i][j];
            if(j<MAX_INDEX-1){
                cout <<", ";
            }
        }
        cout << endl;
    }

}
//@title: Traspuesta
//@author: Juan Carrasco Vico
//@desc: Realiza un programa que lea una matriz de 3x3 y cree su matriz traspuesta
#include <iostream>

using namespace std;

const int MAX_INDEX = 3;

int main(){

    int matriz[MAX_INDEX][MAX_INDEX] = {{1,2,3,},
                                        {4,5,6,},
                                        {7,8,9,}};
    int matrizTraspuesta[MAX_INDEX][MAX_INDEX];

    cout << "La matriz es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        for(int j = 0; j < MAX_INDEX; ++j){
            cout <<matriz[i][j];
            if(j<MAX_INDEX-1){
                cout <<", ";
            }
            matrizTraspuesta[j][i] =matriz [i][j];
        }
        cout << endl;
    }

    cout << "La matriz traspuesta es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        for(int j = 0; j < MAX_INDEX; ++j){
            cout << matrizTraspuesta[i][j];
            if(j<MAX_INDEX-1){
                cout <<", ";
            }
        }
        cout << endl;
    }

}
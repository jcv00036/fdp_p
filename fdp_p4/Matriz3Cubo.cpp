//@title: Matriz3Cubo
//@author: Juan Carrasco Vico
//@desc:Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre
//la diagonal principal de la matriz.
#include <iostream>

using namespace std;

const int MAX_INDEX = 3;

int main(){

    int matriz[MAX_INDEX][MAX_INDEX] = {{1,2,3,},
                                        {4,5,6,},
                                        {7,8,9,}};

    cout << "La diagonal de la matriz es: " << endl;
    for(int i = 0; i < MAX_INDEX; ++i){
        cout << i+1 << "," << i+1 << ": " << matriz[i][i];
        if(i<MAX_INDEX-1){
            cout <<", ";
        }
    }

}
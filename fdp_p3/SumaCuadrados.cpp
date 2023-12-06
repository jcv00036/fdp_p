//@title: SumaCuadrados
//@author: Juan Carrasco Vico
//@desc: El programa muestra la suma de los cuadrados de los numeros enteros
//       del 1 al 10

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int suma = 0;

    for(int i=1;i<=10;++i){
        cout << i << "^2";
        if (i < 10){
            cout << " + ";
        }
        suma += pow(i,2);
    }

    cout << " = " << suma;

}
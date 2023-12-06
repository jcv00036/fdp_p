//@title: TablasMultiplicar
//@author: Juan Carrasco Vico
//@desc: El programa muestra la tabla de multiplicar de un número indicado
//       por el usuario

#include <iostream>
using namespace std;

int main(){

    int numero;

    do {
        cout << "Introduce un numero del 1 al 10 para "
                "ver su tabla de multiplicar: " <<endl;
        cin >> numero;
    }while(numero > 10 || numero < 1);

    cout << "La tabla del " << numero << ": " << endl;
    for(int i=0;i<=10;++i){
        cout << numero << " * " << i << " = " << numero * i << endl;
    }
}
//@Title:IntercambiarValores
//@Author: Juan Carrasco Vico
//@Desc: Escribe una función que intercambie el valor de sus dos parámetros

#include <iostream>
using namespace std;

void flip(int &numero1, int &numero2){
    int aux = numero1;
    numero1 = numero2;
    numero2 = aux;
}

int main(){
    int numero1 = 12, numero2 = 15;
    cout << numero1 << " | " << numero2 <<endl;
    flip(numero1,numero2);
    cout << numero1 << " | " << numero2;
    return 0;
}

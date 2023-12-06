//@Title: Absoluto
//@Author: Juan Carrasco Vico
//@Desc: Implementa una función que tome como parámetro un número real y devuelva su valor
//absoluto.

#include <iostream>
using namespace std;

int Absoluto(int entrada){
    if(entrada >= 0) return entrada;
    else return -entrada;
}

int main(){
    int numerin = 0, numerinAbsoluto = 0;
    cout << "Dame un numero: " << endl;
    cin >> numerin;
    numerinAbsoluto = Absoluto(numerin);
    cout << "El valor absoluto de " << numerin << " es " << numerinAbsoluto;
    return 0;
}
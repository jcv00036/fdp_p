//@title: ParImpar
//@author: Juan Carrasco Vico
//@desc: El programa indica si un número introducido es par o impar

#include <iostream>

using namespace std;

int main(){
    float numero1, numero2, numero3, numero4;

    cout << "Escribe un numero: " << endl;
    cin >> numero1;

    cout << "Escribe otro numero: " << endl;
    cin >> numero2;

    cout << "Escribe otro numero: " << endl;
    cin >> numero3;

    cout << "Escribe otro numero: " << endl;
    cin >> numero4;

    if(numero4 == numero1 || numero4 == numero2 || numero4 == numero3){
        cout << "El numero " << numero4 << " coincide con alguno de los tres anteriores.";
    }else{
        cout << "El numero " << numero4 << " no coincide con ninguno de los tres anteriores.";
    }

    return 0;

}
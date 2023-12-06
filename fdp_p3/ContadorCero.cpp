//@title: ContadorCero
//@author: Juan Carrasco Vico
//@desc: El programa pide al usuario numeros hasta que este introduce un 0,
//       luego dice la cantidad de números positivos que se introdujeron.

#include <iostream>
using namespace std;

int main(){

    int numero = 1;
    int contador;

    while(numero!= 0){
        cout << "Introduce un numero, si quieres parar introduce 0: " <<endl;
        cin >> numero;
        if(numero > 0) ++contador;
    }

    cout << "Se introdujeron " << contador << " numeros positivos "
                                              "hasta el 0";
}
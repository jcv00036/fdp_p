//@title: EnterosHastaIntervalo
//@author: Juan Carrasco Vico
//@desc: El programa pide al usuario numeros hasta que este introduce un 0,
//       o un numero en el intervalo [20,30].

#include <iostream>
using namespace std;

int main(){

    int numero = 1;

    while(numero!= 0 && !(numero>=20 && numero <=30)){
        cout << "Introduce un numero, si quieres parar introduce 0 o uno en el"
                " intervalo [20,30]: " <<endl;
        cin >> numero;
    }
}
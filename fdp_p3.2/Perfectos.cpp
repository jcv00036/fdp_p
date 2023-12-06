//@name: Perfectos
//@autor: Juan Carrasco Vico
//@desc: Un número perfecto es un número entero positivo que es igual a la suma de sus
//divisores propios positivos (sin incluirse él mismo). Por ejemplo, 6 es un número
//perfecto porque sus divisores positivos son: 1, 2 y 3 y 6 = 1 + 2 + 3. El siguiente número
//perfecto es el 28. Escribe un programa que lea un número natural e indique si es
//perfecto o no.


#include <iostream>

using namespace std;

int main() {

    int numero = 0, sumaDivisores = 0;

    cout <<"Introduce un numero: ";
    cin >> numero;

    for (int i = 1; i< numero; ++i){
        if((numero % i) == 0){
            sumaDivisores += i;
        }
    }

    if(numero == sumaDivisores){
        cout << "El numero " << numero << " es perfecto.";
    }

    return 0;
}
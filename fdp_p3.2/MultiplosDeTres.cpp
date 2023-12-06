//@name: MultiplosDeTres
//@autor: Juan Carrasco Vico
//@desc: El programa suma los multiplos de 3 entre 9 y 45
//       no comprendidos entre 21 y 27.

#include <iostream>

using namespace std;

int main() {

    int suma = 0;

    for(int i =  9; i <= 45; i += 3){
        if(i <= 21 || i >= 27){
            suma += i;
        }
    }
    cout << "La suma de los multiplos de 3 entre 9 y 45 y no comprendidos"
            " entre 21 y 27 es de " << suma;
    return 0;
}
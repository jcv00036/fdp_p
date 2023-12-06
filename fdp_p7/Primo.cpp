//@Title: Primo
//@Author: Juan Carrasco Vico
//@Desc:  Realiza una función que determine si un entero positivo es primo

#include <iostream>
using namespace std;

/**
 * Esta función comprueba si un numero es primo
 * @param numeroAComprobar
 * @return True si numeroAComprobar es un primo; False en caso contrario
 */
bool esPrimo(int entrada){
    for(int i = 2; i < entrada; ++i){
        if(entrada%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int numerin;
    cout << "Dime un numerin: " << endl;
    cin >> numerin;
    if(esPrimo(numerin)){
        cout << numerin << " es primo" << endl;
    }else{
        cout << numerin << " no es primo" << endl;
    }
    return 0;
}
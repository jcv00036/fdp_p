//@name: Peces
//@autor: Juan Carrasco Vico
//@desc: El programa advierte si la presa introducida una a una supera el limite establecido


#include <iostream>

using namespace std;

const float MAX_KILOS = 50;

int main() {

    float kilosTotal = 0 , kilos = 0;

    do{
        cout << "Introduzca el peso de la presa: " << endl;
        cin >> kilos;
        if(kilos != 0 ){
            kilosTotal += kilos;
            if(kilosTotal > MAX_KILOS){
                cout << "El peso total de la presa supera el permitido de " << MAX_KILOS << "kg.";
            }
        }
        cout << "El peso total de la presa es de: " << kilosTotal << "kg.";
    }while(kilosTotal < MAX_KILOS && kilos != 0);

    return 0;
}
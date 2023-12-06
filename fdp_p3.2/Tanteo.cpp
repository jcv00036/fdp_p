//@name: Tanteo
//@autor: Juan Carrasco Vico
//@desc: El programa descubre el numero en el que esta pensando el usuario


#include <iostream>

using namespace std;

int main() {

    bool isAdivinado = false;

    cout << "Piensa en un numero entero entre le numero 1 y 1000. ";

    int tanteo = 0, contador = 0, rangoAbajo = 0, rangoArriba = 1000;
    char respuesta;
    while(!isAdivinado && contador != 10){
        tanteo = rand() % (rangoArriba-rangoAbajo) + rangoAbajo;
        cout << "Tu numero es el " << tanteo<< "? (S/N)" << endl;
        cin >> respuesta;
        if(respuesta != 'S'){
            cout << "Tu numero es mayor o menor que " << tanteo<< "? (</>)" << endl;
            cin >> respuesta;
            if(respuesta == '>' && tanteo != 1000){
                rangoAbajo = tanteo + 1;
            }else if(respuesta == '<' && tanteo != 0){
                rangoArriba = tanteo - 1;

            }else{
                cout << "No estas pensando en un numero entre el 1 y el 1000";
                return 0;
            }
        } else {
            isAdivinado = true;
        }
        ++contador;
    }

    if(contador = 10 && !isAdivinado){
        cout << "Me ganaste!";
    }
    return 0;
}
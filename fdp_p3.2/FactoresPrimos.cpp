//@name: TrianguloIsosceles
//@autor: Juan Carrasco Vico
//@desc: El programa dibuja un triangulo isosceles de base y altura n


#include <iostream>

using namespace std;

int main() {

    int numero = 0;
    bool isPrimo = false;

    cout << "Introduce un numero: " << endl;
    cin >> numero;

    cout << numero << " se descompone: " ;

    for(int i = 1; numero > 1; ++i){
        isPrimo = false;

        //comprobar que el numero que vamos a comprobar es primo:
        for(int j = 1; !isPrimo; ++j){
            if(i%j != 0 && !isPrimo){
                isPrimo = true;
            }else{
                isPrimo = false;
            }
        }

        if(isPrimo && numero%i == 0) {
            cout << i << " * " ;
            numero /= i;
            i = 1;
        }
    }

    return 0;
}
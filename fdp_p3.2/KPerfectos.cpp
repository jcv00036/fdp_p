//@name: KPerfectos
//@autor: Juan Carrasco Vico
//@desc: Realiza un programa que calcule los K primeros números perfectos


#include <iostream>

using namespace std;

int main() {

    int numero = 0, perfectos = 0;

    cout <<"Introduce un numero: " << endl;
    cin >> numero;

    cout << "Los primeros " << numero<< " numeros perfectos son: ";
    while(perfectos != numero){

        for(int j = 1; perfectos < numero; ++j){

            int sumaDivisores = 0;

            for (int i = 1; i < j; ++i){
                if((j % i) == 0){
                    sumaDivisores += i;
                }
            }

            if(j == sumaDivisores){
                ++perfectos;
                cout << j;
                if(perfectos < numero){
                    cout << ", ";
                }
            }

        }

    }


    return 0;
}
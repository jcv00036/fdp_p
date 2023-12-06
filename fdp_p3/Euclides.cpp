//@title: Euclides
//@author: Juan Carrasco Vico
//@desc: El programa aplica el algoritmo de Euclides a dos números

#include <iostream>
using namespace std;

int main(){
    int numero1, numero2;

    cout << "Introduce un numero: " << endl;
    cin >> numero1;
    cout << "Introduce otro numero: " << endl;
    cin >> numero2;

    //Si la división de los numeros es exacta, el mcd sera el divisor
    if((numero1 % numero2) == 0){
        cout << "mcd(" << numero1 << " , " << numero2 << ") = " << numero2;
    }else{
        //Si la división no es exacacta, mcd(numero1,numero2) = mcd(numero2, numero1%numero2)
        int y = numero1 % numero2; //cambio la variable para mantener los valores originales

        while((numero2 % y)!=0){
            y = (numero2 % y);
        }

        cout << "mcd(" << numero1 << " , " << numero2 << ") = " << y;

    }

}
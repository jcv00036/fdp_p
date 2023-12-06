//@Title: SumaDigitos
//@Author: Juan Carrasco Vico
//@Desc: Implementa una función que calcule la suma de los dígitos de un número entero positivo.

#include <iostream>
using namespace std;

/**
 * Esta función realiza la suma de los dígitos de un numero entero
 * @param número
 * @return suma de los dígitos que forman el número
 */
int sumaDigitos(int entrada){
    string cadenaDigitos = to_string(entrada);
    int sumaDigitos = 0;
    for(int i = 0; i< cadenaDigitos.length(); ++i){
        sumaDigitos += cadenaDigitos[i]-'0';
    }
    return sumaDigitos;
}

int main(){
    int numerin;
    cout << "Dime un numerin: " << endl;
    cin >> numerin;
    cout << "La suma de sus digitos es: " << sumaDigitos(numerin)<<endl;
    return 0;
}
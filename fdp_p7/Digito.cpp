//@Title: Digito
//@Author: Juan Carrasco Vico
//@Desc:  Implementa una función que, dado un carácter, devuelva si es un dígito.

#include <iostream>
using namespace std;

/**
 * Esta función comprueba si un caracter es un digito
 * @param caracterAComprobar
 * @return True si caracterAComprobar es un digito; False en caso contrario
 */
bool esDigito(char entrada){
    if(entrada >= '0' && entrada <= '9'){
        return true;
    }else{
        return false;
    }
}

int main(){
    char caracter;
    cout << "Dime un caracter: " << endl;
    cin >> caracter;
    if(esDigito(caracter)){
        cout << caracter << " es un digito";
    }else{
        cout << caracter << " no es un digito";
    }
    return 0;
}
//@Title: DigitoEnCadena
//@Author: Juan Carrasco Vico
//@Desc:  Realiza una función que, dada una cadena de caracteres, devuelva cuantos digitos
//contiene. Usa la función del ejercicio anterior(Digito.cpp) para, dado un carácter de la cadena,
//comprobar si el carácter es un dígito

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
    string cadena;
    cout << "Dime una frase: " << endl;
    getline(cin>>ws,cadena);
    for(int i = 0; i< cadena.length(); ++i){
        if(esDigito(cadena[i])){
            cout << cadena[i] << " es un digito" << endl;
        }else{
            cout << cadena[i] << " no es un digito" << endl;
        }
    }
    return 0;
}
//@title: PalindromosFrase
//@author: Juan Carrasco Vico
//@desc: Realiza un programa como el del ejercicio anterior pero en el que se permitan espacios
//en blanco. Este programa debe reconocer como palíndromos las frases: “dabale arroz a
//la zorra el abad'' y “la ruta nos aporto otro paso natural'.

#include <iostream>

using namespace std;

int main() {
    string cadena = "", cadenaOriginal = "";
    bool isPalindromo = true;
    int ajusteLongitud = 0;


    cout << "Introduce una frase: " << endl;
    getline(cin >> ws, cadena);
    cadenaOriginal = cadena;

    //hacer comprobaciones de espacios:
    for (int i = 0; i < cadena.length(); ++i) {
        if(cadena[i] == ' '){
            for (int j = i; j < cadena.length(); ++j) {
                if(cadena[j] == cadena.length()-1){
                    cadena[j] = ' ';
                }else{
                    cadena[j] = cadena[j+1];
                }
            }
            ++ajusteLongitud;
        }
    }

    for (int i = 0; i < cadena.length()/2; ++i) {

        if(cadena[i] != cadena[cadena.length()-1-i-ajusteLongitud]) {
            isPalindromo = false;
        }
    }

    if(isPalindromo){
        cout << "La cadena \"" << cadenaOriginal << "\" es palindroma";
    }else{
        cout << "La cadena \"" << cadenaOriginal << "\" no es palindroma";
    }

    return 0;
}
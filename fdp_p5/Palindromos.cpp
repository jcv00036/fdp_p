//@title: Palindromos
//@author: Juan Carrasco Vico
//@desc:  Realiza un programa que lea una cadena de caracteres e indique si es un palíndromo.
//Un palíndromo es una frase o palabra que se lee igual de delante hacia atrás que de
//atrás hacia delante, por ejemplo: reconocer o anilina. Para simplificar se supone que la
//cadena leída no contiene ni mayúsculas, ni signos de puntuación, ni espacios en blanco
//ni tildes.

#include <iostream>

using namespace std;

int main() {
    string cadena = "";
    bool isPalindromo = true;


    cout << "Introduce una palabra: " << endl;
    getline(cin >> ws, cadena);

    //hacer comprobaciones:
    for (int i = 0; i < cadena.length()/2; ++i) {
        if(cadena[i] != cadena[cadena.length()-1-i]) {
            isPalindromo = false;
        }
    }

    if(isPalindromo){
        cout << "La cadena \"" << cadena << "\" es palindroma";
    }else{
        cout << "La cadena \"" << cadena << "\" no es palindroma";
    }

    return 0;
}
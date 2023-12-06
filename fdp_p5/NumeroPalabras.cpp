//@title: NumeroPalabras
//@author: Juan Carrasco Vico
//@desc: Realiza un programa que lea una cadena de caracteres e indique cuántas palabras tiene.
//Una palabra puede venir separada de otra por uno o más caracteres de espacio en
//blanco.

#include <iostream>

using namespace std;

int main() {
    string cadena = "";
    int numeroDePalabras = 1, siguienteSinEspacios = 0;
    bool siguienteEncontrado = false, todoEspacios = true;


    cout << "Introduce una cadena de palabras separadas por espacios: " << endl;
    getline(cin >> ws, cadena);

    //comprobar que no sea una string nula o que solo tenga espacios
    for (int i = 0; i < cadena.length(); ++i) {
        if(cadena[i] != ' '){
            todoEspacios = false;
        }
    }
    if(cadena == "" || todoEspacios){
        cout << "La cadena no tiene palabras";
        return 0;
    }

    //hacer comprobaciones de espacios:
    for (int i = 0; i < cadena.length(); ++i) {
        //si nos topamos con un espacio, saltar hasta el siguiente punto sin espacios
        if(cadena[i] == ' '){
            for (int j = i; j < cadena.length(); ++j) {
                if(cadena[j] != ' ' && !siguienteEncontrado){
                    siguienteSinEspacios = j;
                    siguienteEncontrado = true;
                }
            }
            if(siguienteEncontrado){
                i = siguienteSinEspacios;
                siguienteEncontrado = false;
                ++ numeroDePalabras;
            }else{
                i = cadena.length();
            }
        }
    }

    cout << "La cadena \"" << cadena << "\" tiene " << numeroDePalabras << " palabras:";

    return 0;
}
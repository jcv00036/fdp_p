//@Title: NumeroCaracteres
//@Author: Juan Carrasco Vico
//@Desc: Implementa una función que tome como parámetro un número real y devuelva su valor
//absoluto.

#include <iostream>
using namespace std;

/**
 * Esta función devuelve el número de caracteres de una string
 * @param entrada
 * @return numero de caracteres
 */
int Longitud(string entrada){
    int caracteres = 0;
    for(int i = 0; i < entrada.length(); ++i){
        if(entrada[i] != ' ') ++caracteres;
    }
    return caracteres;
}

int main(){
    string cadena;
    int numeroCaracteres;
    cout << "Escribe una cadena: " << endl;
    getline(cin>> ws, cadena);
    numeroCaracteres = Longitud(cadena);
    cout << "La cadena tiene " << numeroCaracteres << " caracteres.";
    return 0;
}
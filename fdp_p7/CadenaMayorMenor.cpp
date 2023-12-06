//@Title: CadenaMayorMenor
//@Author: Juan Carrasco Vico
//@Desc:  Realiza una función que tome como parámetros dos cadenas de caracteres y usando la
//función anterior devuelva la cadena mayor (en númeroro de caracteres) o la primera si
//ambas tienen la misma longitud.

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
    string cadena1,cadena2;
    int numeroCaracteres;
    cout << "Escribe una cadena: " << endl;
    getline(cin>> ws, cadena1);
    cout << "Escribe otra cadena: " << endl;
    getline(cin>> ws, cadena2);
    if(Longitud(cadena1) >= Longitud(cadena2)){
        cout << cadena1;
    }else{
        cout << cadena2;
    }

    return 0;
}
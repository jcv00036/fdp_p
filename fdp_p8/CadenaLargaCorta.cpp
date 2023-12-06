//@Title:CadenaLargaCorta
//@Author: Juan Carrasco Vico
//@Desc: Realiza una función que tome como parámetros dos cadenas de caracteres y devuelva la
//cadena más larga y la más corta.

#include <iostream>
using namespace std;

void compararCadenas(string cadena1, string cadena2, string &cadenaLarga,string &cadenaCorta){
    if(cadena1.length() > cadena2.length()){
        cadenaLarga = cadena1;
        cadenaCorta = cadena2;
    }else{
        cadenaLarga = cadena2;
        cadenaCorta = cadena1;
    }
}

int main(){
    string cadena1 = "Holaholahola", cadena2 = "Lleva la tarara", cadenaLarga="",cadenaCorta="";
    compararCadenas(cadena1,cadena2,cadenaLarga,cadenaCorta);
    cout << "La cadena mas larga es: \"" << cadenaLarga << "\", y la mas corta es: \"" << cadenaCorta << "\".";
    return 0;
}

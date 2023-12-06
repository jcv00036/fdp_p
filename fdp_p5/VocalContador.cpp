//@title: VocalContador
//@author: Juan Carrasco Vico
//@desc: Realiza un programa que lea una cadena de caracteres de la entrada estándar y muestre
//en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena.

#include <iostream>

using namespace std;

int main(){
    string cadena = "";
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;
    bool sinVocales = true;

    cout << "Introduce una cadena de caracteres: " <<endl;
    getline(cin >>ws, cadena);

    for (int i = 0; i < cadena.length(); ++i) {

        switch(cadena[i]){
            case 'a':
            case 'A':
                ++ contadorA;
                sinVocales = false;
                break;
            case 'e':
            case 'E':
                ++ contadorE;
                sinVocales = false;
                break;
            case 'i':
            case 'I':
                ++ contadorI;
                sinVocales = false;
                break;
            case 'o':
            case 'O':
                ++ contadorO;
                sinVocales = false;
                break;
            case 'u':
            case 'U':
                ++ contadorU;
                sinVocales = false;
                break;
        }//switch, no es necesario un default porque se espera que haya otro tipo de caracteres

    }//for

    if(sinVocales){
        cout << "La cadena no tiene vocales.";
    }else{
        cout << "La cadena tiene " << contadorA << " vocales 'A', "
             << contadorE << " vocales 'E', " << contadorI << " vocales 'I', "
             << contadorO << " vocales 'O' y " << contadorU << " vocales 'U'.";
    }

    return 0;
}
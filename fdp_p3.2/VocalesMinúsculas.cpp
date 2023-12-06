//@name: VocalesMinúsculas
//@autor: Juan Carrasco Vico
//@desc: El programa pide caracteres hasta que se introduce
//       + o -. Despues dice cuántos eran vocales minusculas.

#include <iostream>

using namespace std;

int main(){

    char respuesta;
    int vocalesMinus = 0;

    do{
        cout << "Escribe un caracter: " << endl;
        cin >> respuesta;
        if (respuesta == 'a', respuesta == 'e', respuesta == 'i', respuesta == 'o', respuesta == 'u'){
            ++vocalesMinus;
        }
    }while(respuesta!= '+' && respuesta != '-');

    cout << "Has introducido " << vocalesMinus << " vocales minusculas.";

    return 0;
}

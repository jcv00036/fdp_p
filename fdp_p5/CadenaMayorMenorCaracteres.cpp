//@title: CadenaMayorMenorCaracteres
//@author: Juan Carrasco Vico
//@desc: Realiza un programa igual que el anterior (CadenaMayorMenor.cpp), pero que el
// programa muestre la línea mayor y menor en cuanto a su número de caracteres.

#include <iostream>

using namespace std;

int main(){
    string cadenaAux = "", cadenaMayor = "", cadenaMenor = "";
    bool isFin = false, isPrimeraLinea = true;

    do{
        cout << "Introduce una cadena de caracteres, para parar introduce \"FIN\": " <<endl;
        getline(cin >>ws, cadenaAux);

        //hacer comprobaciones:
        if(cadenaAux == "FIN"){
            isFin = true;
        }else if(cadenaAux.length() > cadenaMayor.length() && !isFin){
            cadenaMayor = cadenaAux;
        }else if(cadenaAux.length() < cadenaMenor.length() && !isFin){
            cadenaMenor = cadenaAux;
        }else if(isPrimeraLinea && !isFin){
            //si es la primera linea, que la cadena menor sea esta primera para que las
            //comprobaciones se hagan con normalidad
            cadenaMenor = cadenaAux;
        }
    }while(!isFin);

    cout << "La linea con mas caracteres de las leidas ha sido: \"" << cadenaMayor << "\"" << endl;
    cout << "La linea con menos caracteres de las leidas ha sido: \"" << cadenaMenor << "\"" << endl;

    return 0;
}
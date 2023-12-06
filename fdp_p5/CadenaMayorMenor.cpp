//@title: CadenaMayorMenor
//@author: Juan Carrasco Vico
//@desc: Realiza un programa que lea líneas de la entrada estándar hasta que se lea una línea
//cuyo contenido sea la cadena FIN. El programa debe mostrar en la salida estándar la
//línea mayor de las leídas y también la menor desde un punto de vista lexicográfico

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
        }else if(cadenaAux > cadenaMayor && !isFin){
            cadenaMayor = cadenaAux;
        }else if(cadenaAux < cadenaMenor && !isFin){
            cadenaMenor = cadenaAux;
        }else if(isPrimeraLinea && !isFin){
            //si es la primera linea, que la cadena menor sea esta primera para que las
            //comprobaciones se hagan con normalidad
            cadenaMenor = cadenaAux;
        }
    }while(!isFin);

    cout << "La linea mayor de las leidas ha sido: \"" << cadenaMayor << "\"" << endl;
    cout << "La linea menor de las leidas ha sido: \"" << cadenaMenor << "\"" << endl;

    return 0;
}
//@title: Temperaturas
//@author: Juan Carrasco Vico
//@desc: El programa recoge 6 temperaturas a lo largo del día y escribe
//       la temperatura media, máxima y mínima

#include <iostream>
using namespace std;

int main(){
    float temperaturasDia[6], temperaturaMaxima, temperaturaMinima, temperaturaTotal;

    /*Pedir la temperatura actual y sumarla a la variable
      temperaturaTotal para luego hacer la media.*/
    for(int i = 0; i < 6; ++i){
        cout << "Cual es la temperatura ahora?: " << endl;
        cin >> temperaturasDia[i];
        temperaturaTotal += temperaturasDia[i];
    }

    /*Comprueba los valores anteriormente introducidos
      para determinar la temperatura maxima y minima del dia */
    for(int i = 0; i<6 ; ++i){
        for(int j = 0; j < 6; ++j){
            if(temperaturasDia[j] < temperaturasDia[i]){
                temperaturaMinima = temperaturasDia[j];
            }
            if(temperaturasDia[j] > temperaturasDia[i]){
                temperaturaMaxima = temperaturasDia[j];
            }
        }
    }

    cout << "La temperatura media del dia fue de " << temperaturaTotal/6 <<
            " C, la temperatura maxima fue de " << temperaturaMaxima << " C, "
            "y la temperatura minima fue de " << temperaturaMinima << " C.";

}
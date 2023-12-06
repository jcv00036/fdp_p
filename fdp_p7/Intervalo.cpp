//@Title: Intervalo
//@Author: Juan Carrasco Vico
//@Desc:  Realiza una función que tome como parámetros los extremos de un intervalo y un valor y
//devuelva un valor lógico que indique si el valor pertenece al intervalo cerrado formado
//por los extremos.

#include <iostream>
using namespace std;

/**
 * Esta función comprueba si un numero esta dentro de un intervalo [a,b]
 * @param a,b,c
 * @return True si c está dentro de [a,b]; False en caso contrario
 */
bool estaDentro(int a,int b,int c){
    if(c>=a && c<=b){
        return true;
    }else{
        return false;
    }
}

int main(){
    int  extremoInferior = 0, extremoSuperior = 0, numerin = 0;
    cout << "Dime el extremo inferior del intervalo: " << endl;
    cin >> extremoInferior;
    cout << "Dime el extremo superior del intervalo: " << endl;
    cin >> extremoSuperior;
    cout << "Dime un numerin: " << endl;
    cin >> numerin;
    if(estaDentro(extremoInferior,extremoSuperior,numerin)){
        cout << numerin << " esta dentro del intervalo [" << extremoInferior << "," << extremoSuperior << "]";
    }else{
        cout << numerin << " no esta dentro del intervalo [" << extremoInferior << "," << extremoSuperior << "]";
    }
    return 0;
}
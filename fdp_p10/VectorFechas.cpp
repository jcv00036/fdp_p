//@Title: VectorFechas
//@Author: Juan Carrasco Vico
//@Desc:   Utilizando una estructura fecha como la del ejercicio anterior realiza las siguientes
//funciones:
//  ○ Función que reciba como entrada un vector de fechas y una fecha
//determinada y devuelva la dirección de memoria de la primera fecha del
//vector que coincide con la fecha. Si la fecha no se encuentra en el vector
//debe devolver la dirección de memoria 0.
//  ○ Función que utilice la función previa para contar cuántas ocurrencias de una
//fecha existen en un vector de fechas.
//  ○ Función main que defina un vector de fechas e invoque a la primera función
//para comprobar si una fecha está en el vector y para comprobar si una fecha
//está en la segunda mitad de un vector.

#include <iostream>
using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anio;
};

/**
 * Pide una fecha pòr entrada estandar
 * @param pFecha
 */
void escribirFecha(Fecha pFecha){
    cout << "Indique el dia: " << endl;
    cin >> pFecha.dia;
    cout << "Indique el mes: " << endl;
    cin >> pFecha.mes;
    cout << "Indique el anio: " << endl;
    cin >> pFecha.anio;
}

bool fechasIguales(Fecha pFecha1,Fecha pFecha2){
    return (pFecha1.anio == pFecha2.anio and pFecha1.mes == pFecha2.mes and pFecha1.dia == pFecha2.dia);
}

/**
 * Devuelve la dirección dememoria de la primera coincidencia en la busqueda en el vector de la fechaABuscar. Si no la encuentra, retorna la posición de memoria 0;
 *
 * @param *pFechas[]
 * @param tam
 * @param *pFechaABuscar
 *
 * @return pFechaEncontrada
 */
Fecha* direccionCoincidencia(Fecha pFechas[],int startIndex, int tam, Fecha pFechaABuscar){
    for (int i = startIndex; i < tam; ++i) {
        if(fechasIguales(pFechas[i],pFechaABuscar)){
            return &pFechas[i];
        }
    }
    return 0;
}

/**
 * Muestra una fecha pòr entrada estandar
 * @param pFecha
 */
void imprimirFecha(Fecha *pFecha){
    cout << pFecha->dia <<"/"<< pFecha->mes << "/" << pFecha->anio <<endl;
}

const int MAX_TAM = 10;
int main(){

    Fecha *pFechas = new Fecha[MAX_TAM], *pFechaIntroducida = new Fecha;
    pFechas[0] = {1,1,1999};
    pFechas[1] = {25,3,2005};
    pFechas[2] = {20,4,2005};
    pFechas[3] = {19,5,2023};
    int tamReal = 4;

    cout << "Escribe una fecha:" << endl;
    escribirFecha(*pFechaIntroducida);

    Fecha *pFechaEncontrada =  direccionCoincidencia(pFechas,0,tamReal,*pFechaIntroducida);

    cout << pFechaEncontrada;

    delete[] pFechas;
    delete pFechaIntroducida;
    return 0;
}
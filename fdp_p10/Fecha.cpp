//@Title: Fecha
//@Author: Juan Carrasco Vico
//@Desc:  Define una estructura fecha que almacene el día, mes y año como enteros. Realice las
//siguientes funciones:
//  ○ Función que reciba un puntero a una fecha y lea valores para la fecha desde
//  la entrada estándar.
//  ○ Función que reciba un puntero a una fecha y envíe la fecha a la salida
//  estándar con el formato día/mes/año.
//  ○ Función que dados dos punteros a fechas indique si la primera es anterior a
//  la segunda.
//  ○ El incremento en un año de una fecha. Tenga en cuenta los años bisiestos: el
//  29/2/2008 más un año es el 28/2/2009.
//Realiza también un programa principal que permita probar el funcionamiento de las
//funciones

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
void escribirFecha(Fecha *pFecha){
    cout << "Indique el dia: " << endl;
    cin >> pFecha->dia;
    cout << "Indique el mes: " << endl;
    cin >> pFecha->mes;
    cout << "Indique el anio: " << endl;
    cin >> pFecha->anio;
}

/**
 * Muestra una fecha pòr entrada estandar
 * @param pFecha
 */
void imprimirFecha(Fecha *pFecha){
    cout << pFecha->dia <<"/"<< pFecha->mes << "/" << pFecha->anio <<endl;
}

/**
 * Comprueba si la primera fecha es anterior o posterior
 * @param pFecha1
 * @param pFecha2
 * @return
 * Si anterior: true
 * Si posterior: false
 */
bool esAnterior(Fecha *pFecha1,Fecha *pFecha2){

    if(pFecha1->anio<pFecha2->anio){
        return true;
    }else if(pFecha1->anio==pFecha2->anio && pFecha1->mes<pFecha2->mes){
        return true;
    }else if(pFecha1->anio==pFecha2->anio && pFecha1->mes == pFecha2->mes && pFecha1->dia<pFecha2->dia){
        return true;
    }else{
        return false;
    }
}

bool esBisiesto(int anio){
    if(anio%4 == 0 and anio%100 != 0 or anio%400 == 0) //Condición de año bisiesto
        return true;
    else
        return false;
}

/**
 * Incrementa el año de la fecha en 1, teniendo en cuenta los años bisiestos
 * @param pFecha
 */
void incrementarAnio(Fecha *pFecha){
    if(!esBisiesto(pFecha->anio)){
        pFecha->anio++;
    }else{
        pFecha->anio++;
        pFecha->dia--;
    }
}

void menu(){
    cout << "***************************" <<endl
         << "1. Escribir una fecha" << endl
         << "2. Leer una fecha" << endl
         << "3. Fecha anterior" << endl
         << "4. Incrementar en 1 anio" << endl
         << "5. Salir" << endl;
    cout << "***************************" <<endl;
    cout << "Seleccione lo que quiere hacer: " <<endl;

}

int main(){

    Fecha* pFecha1 = new Fecha;
    Fecha* pFecha2 = new Fecha;

    *pFecha1 = {1,1,2001};
    *pFecha2 = {1,1,2000};

    char seleccion;
    bool running = true;

    while(running){
        menu();
        cin >> seleccion;
        switch (seleccion) {
            case '1':
                escribirFecha(pFecha1);
                break;
            case '2':
                imprimirFecha(pFecha1);
                break;
            case '3':
                if(esAnterior(pFecha1,pFecha2)) cout << "Es anterior" << endl;
                else cout << "Es posterior" << endl;
                break;
            case '4':
                incrementarAnio(pFecha1);
                break;
            case '5':
                running = false;
                break;
            default:
                cout << "Codigo de operacion equivocado"<<endl;
                break;
        }
    }

    delete pFecha1; delete pFecha2;
    return 0;
}
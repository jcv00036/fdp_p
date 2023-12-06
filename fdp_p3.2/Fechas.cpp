//@name: Fechas
//@autor: Juan Carrasco Vico
//@desc:  Se quiere implementar un programa que muestre al usuario un menú de opciones. El
//programa según la opción seleccionada podrá realizar una de las siguientes tareas:
//○    Dada una fecha desde teclado (día, mes y año) que muestre en pantalla si la
//      fecha es o no válida. Se considera válida cuando el año es positivo, el mes
//      está entre 1 y 12 y el día dependiendo del mes. En el caso del mes de
//      febrero puede tener 29 o 28 días en función de si el año es o no bisiesto. Un
//      año es bisiesto cuando es múltiplo de 4 y no lo es de 100, pero si es de 100
//      también es bisiesto cuando también es múltiplo de 400. De este modo 2004,
//      2008 o 2012 son bisiestos, pero no lo son 2100, 2200 o 2300.
//○     Dadas dos fechas desde teclado decir si la primera es anterior a la segunda.
//○      Terminar de ejecutar el programa.


#include <iostream>

using namespace std;

int main() {
    int fecha1[3], fecha2[3], opcion, suma1,suma2;

    cout <<"Elija una opcion: "<<endl<<
           "1. Validar fecha"<<endl<<
           "2. Comparar fechas"<<endl<<
           "3. Salir del programa"<<endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            //introducir la fecha
            cout << "Introduce el dia:" << endl;
            cin >> fecha1[0];
            cout << "Introduce el mes:" << endl;
            cin >> fecha1[1];
            cout << "Introduce el anio:" << endl;
            cin >> fecha1[2];

            if((fecha1[0]>=0 && fecha1[0]<=31)&& fecha1[2] >= 0 && (fecha1[1] > 0 && fecha1[1] < 13)){

                if(fecha1[1] == 2){
                    if(fecha1[0] <29 && fecha1[2]%4 != 0){
                        cout << "Fecha valida";
                    }else if(fecha1[0] <=29 && fecha1[2]%4 == 0 && (fecha1[2]%100 != 0 || fecha1[2]%400 == 0)){
                        cout << "Fecha valida";
                    }else{
                        cout << "Fecha invalida";
                    }
                }else if(fecha1[1]%2 == 0 && fecha1[1]<8){
                    if(fecha1[0] < 31){
                        cout << "Fecha valida";
                    }else{
                        cout << "Fecha invalida";
                    }
                }else if (fecha1[1]%2 != 0 && fecha1[1]>8){
                    if(fecha1[0] < 31){
                        cout << "Fecha valida";
                    }else{
                        cout << "Fecha invalida";
                    }
                }else{
                    cout << "Fecha valida";
                }

            }else{
                cout << "Fecha invalida";
            }

            break;
        case 2:

            cout << "Introduce el dia:" << endl;
            cin >> fecha1[0];
            cout << "Introduce el mes:" << endl;
            cin >> fecha1[1];
            cout << "Introduce el anio:" << endl;
            cin >> fecha1[2];

            cout << "Introduce el dia:" << endl;
            cin >> fecha2[0];
            cout << "Introduce el mes:" << endl;
            cin >> fecha2[1];
            cout << "Introduce el anio:" << endl;
            cin >> fecha2[2];

            suma1 = fecha1[0] + fecha1[1]*31 + fecha1[2]*365;
            suma2 = fecha2[0] + fecha2[1]*31 + fecha2[2]*365;

            if(suma1 < suma2){
                cout << "La primera fecha es anterior";
            }else{
                cout << "La primera fecha no es anterior";
            }

            break;
        case 3:
            return 0;
            break;
        default:
            cout << "ERROR: Opcion invalida";
    }

    return 0;
}
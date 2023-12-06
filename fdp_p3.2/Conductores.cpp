//@name: Conductores
//@autor: Juan Carrasco Vico
//@desc: Una compañía de seguros está preparando un estudio concerniente a todos los
//accidentes ocurridos en la provincia de Jaén en el último año. Para cada conductor
//involucrado en un accidente se tienen los siguientes datos: edad del conductor (en el
//rango [18, 90]), sexo (’M’ o ’F’) y código de registro (1 para los registrados en la ciudad
//de Jaén, 0 para los registrados fuera de la ciudad de Jaén). Realiza un programa que
//lea los datos de conductores hasta que se introduzca una edad de 0 y muestre las
//siguientes estadísticas


#include <iostream>

using namespace std;

const int MAX_REGISTROS = 1000;

int main() {

    int edad[MAX_REGISTROS], i = 0;
    char sexo[MAX_REGISTROS];
    int codigo[MAX_REGISTROS];

    do{
        do{
            cout <<((edad[i] < 18 || edad[i] > 90) && edad[i] != 0)<< "Indique la edad del conductor "<< i + 1 << ", la edad debe de"
                                                                " estar comprendida entre 18 y 90 anios: " << endl;
            cin >> edad[i];
        }while((edad[i] < 18 || edad[i] > 90) && (edad[i] != 0)); // no funcionaba el filtro (edad[i]<18 && edad[i] != 0) || edad[i] > 90

        if(edad[i] != 0){
            do{
                cout << "Indique el sexo del conductor " << i+1 << " (M/F): " << endl;
                cin >> sexo[i];
            }while(sexo[i] != 'M' && sexo[i] != 'F');
            do{
                cout << "Indique, con un 1, si el accidente fue en"
                        " Jaen o, con un 0, si fue fuera de la ciudad: " << endl;
                cin >> codigo[i];
            }while(codigo[i]<0 || codigo[i]>1);
            ++i;
        }
    }while(edad[i-1] != 0 && i != MAX_REGISTROS);

    int conductoresMenoresDe25 = 0, mujeres = 0, hombresMenoresDe25 = 0;

    for(int j = 0; j < i; ++j){
        if(edad[j]<25){
            ++conductoresMenoresDe25;
            if(sexo[j]=='M'){
                ++hombresMenoresDe25;
            }
        }

        if(sexo[j]=='F'){
            ++mujeres;
        }
    }

    cout << "Hay un " << (conductoresMenoresDe25/(i))*100 << "% de conductores menores de 25 anios, "
            " un " << (mujeres/(i))*100 << "% de conductoras y "
            " un" << (hombresMenoresDe25/(i))*100 << "% de hombres menores de 25 anos. ";

    return 0;
}
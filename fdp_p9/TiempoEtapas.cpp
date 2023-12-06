//@Title: TiempoEtapas
//@Author: Juan Carrasco Vico
//@Desc: Define una estructura que indique el tiempo empleado por un ciclista en una etapa. La
//estructura debe tener tres campos: horas, minutos y segundos. Escribe un programa que
//dado un vector con los tiempos que un ciclista ha empleado en cada etapa calcule el
//tiempo total empleado en correr todas las etapas.

#include <iostream>
#include <sstream>

using namespace std;

//constantes
int const MAX_TAM = 10;

//structs
struct Tiempo {
    int horas, minutos, segundos;
};

//funciones
string tiempoTotal(Tiempo tiempos[MAX_TAM], int tamReal) {
    string ss;
    int horas = 0, minutos = 0, segundos = 0;
    for (int i = 0; i < tamReal; ++i) {
        segundos += tiempos[i].segundos;
        minutos += tiempos[i].minutos;
        horas += tiempos[i].horas;
        if (segundos >= 60) {
            segundos -= 60;
            ++minutos;
        }if (minutos >= 60) {
            minutos -= 60;
            ++horas;
        }
    }
    ss = to_string(horas) + ":" + to_string(minutos) + ":" + to_string(segundos);
    return ss;
}

//main
int main() {

    Tiempo tiempos[MAX_TAM] = {{1, 30, 49},
                               {2, 31, 2},
                               {0, 49, 34}};
    int tamReal = 3;

    cout << "El ciclista tardo: " << tiempoTotal(tiempos,tamReal);

    return 0;
}
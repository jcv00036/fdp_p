//@Title: Personas
//@Author: Juan Carrasco Vico
//@Desc:  Define una estructura persona que conste de los campos nombre y edad. Define también
//un vector de personas. Crea un vector de punteros que mantenga el vector de personas
//ordenado por el nombre y otro vector de punteros que mantenga el vector de personas
//ordenado por la edad (observar la figura). Muestra en la salida estándar el vector
//ordenado por nombre y luego el vector ordenado por edad apoyándose en los vectores
//de punteros.

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

/**
 *
 * Ordena un vector de personas por su nombre (alfabéticamente)
 * @param personas
 * @param aOrdenar
 */
void ordenarPorNombre(Persona personas[], Persona* aOrdenar[], int const tam){
    for (int i = 0; i < tam; ++i) {
        for (int j = i; j < tam; ++j) {
            if(personas[j-1].nombre > personas[j].nombre){
                aOrdenar[j] = &personas[j-1];
                aOrdenar[j-1] = &personas[j];
            }
        }
    }
}

/**
 *
 * Ordena un vector de personas por su edad
 * @param personas
 * @param aOrdenar
 */
void ordenarPorEdad(Persona personas[], Persona* aOrdenar[], int const tam){
    for (int i = 0; i < tam; ++i) {
        for (int j = i; j < tam; ++j) {
            if(personas[j-1].edad > personas[j].edad){
                aOrdenar[j] = &personas[j-1];
                aOrdenar[j-1] = &personas[j];
            }
        }
    }
}

string to_string(Persona *persona){
    string toRet = persona->nombre + ", " + to_string(persona->edad);
    return toRet;
}

const int MAX_TAM = 10;
int main(){
    Persona personas[MAX_TAM] = {"Pedro", 18 ,
                                 "Paco", 19,
                                 "Francisco", 27,
                                 "Raulito",5};
    int tamReal = 4;

    Persona *nombreOrdenado = new Persona[MAX_TAM],*edadOrdenado = new Persona[MAX_TAM];
    ordenarPorNombre(personas,&nombreOrdenado,tamReal);
    ordenarPorEdad(personas,&edadOrdenado,tamReal);

    cout << "Lista de personas ordenadas alfabeticamente:" << endl;
    for (int i = 0; i < tamReal; ++i) {
        cout << i + ". " + to_string(&nombreOrdenado[i]) << endl;
    }

    delete nombreOrdenado;
    delete edadOrdenado;
    return 0;
}
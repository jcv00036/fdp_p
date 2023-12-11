//@Title: PersonasLocalizadasMemoriaD
//@Author: Juan Carrasco Vico
//@Desc:  Realiza una función que tome como parámetros de
//entrada un vector de personas, su longitud y una localidad y devuelva como salida un
//vector con los datos de las personas cuya localidad de nacimiento coincide con la
//localidad recibida como parámetro. El vector devuelto debe albergarse en memoria
//dinámica. Realiza también una función main que permita probar la función.

#include <iostream>
#include <sstream>
using namespace std;

struct Persona{

    string nombre;
    int edad;
    string localidad;

};

/**
 * Escribe en el vectorEncontrados los datos de las personas cuya localidad coincide con localidad
 * @param vector
 * @param tam
 * @param localidad
 * @param vectorEncontrados
 */
void buscarPersonas(Persona vector[],int tam, string localidad, Persona vectorEncontrados[],int &encontrados){
    encontrados = 0;
    for (int i = 0; i < tam; ++i) {
        if(vector[i].localidad == localidad){
            vectorEncontrados[encontrados] = vector[i];
            ++ encontrados;
        }
    }

}

/**
 * Imprime un vector de personas
 * @param vector
 * @param tam
 * @return stringstream con los datos
 */
string imprimirVectorPersonas(Persona vector[],int tam){
    stringstream sso;

    if (tam == 0) return "No hay coincidencias.";

    sso << "[";
    for (int i = 0; i < tam; ++i) {
        sso << "[" << vector[i].nombre << " , " << vector[i].edad << " anios" << " , " <<vector[i].localidad<< "]";
        if (i<tam-1) sso << " | ";
    }
    sso << "]";

    return sso.str();
}

int main(){


    int tamReal = 4, encontrados = 0;

    Persona *vectorPersonas = new Persona[tamReal];
    vectorPersonas[0] = {"Pepe",18,"Jaen"};
    vectorPersonas[1] = {"Alberto",18,"Jaen"};
    vectorPersonas[2] = {"Fede",18,"Cadiz"};
    vectorPersonas[3] = {"Juande",18,"Almeria"};

    Persona *vectorPersonasEncontradas = new Persona[tamReal];

    string ciudadABuscar;

    cout << "En que ciudad quieres encontrar a gente?:" << endl;
    getline(cin >> ws, ciudadABuscar);

    buscarPersonas(
            vectorPersonas,tamReal,ciudadABuscar,
            vectorPersonasEncontradas,encontrados);

    cout << "Las personas encontradas en " << ciudadABuscar << " son: " << endl;
    cout << imprimirVectorPersonas(vectorPersonasEncontradas,encontrados);

    delete[] vectorPersonas;
    delete[] vectorPersonasEncontradas;
    return 0;
}

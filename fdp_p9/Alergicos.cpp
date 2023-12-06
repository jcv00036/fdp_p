//@Title: Alergicos
//@Author: Juan Carrasco Vico
//@Desc: Define una estructura que sirva para representar a una persona. La estructura debe
//contener dos campos: el nombre de la persona y un valor de tipo lógico que indica si la
//persona tiene algún tipo de alergia. Realiza un programa que dado un vector de
//personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
//ningún tipo de alergia y otro que contenga las personas con alergia

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//constantes
int const MAX_TAM = 10;

//structs
struct Persona {
    string nombre;
    bool esAlergico;
};

//funciones
void organizarPersonas(Persona personas[MAX_TAM], int tamReal, Persona alergicos[MAX_TAM],
                         int &numAlergicos,Persona noAlergicos[MAX_TAM], int &numNoAlergicos) {
    for (int i = 0; i < tamReal; ++i) {
        if(personas[i].esAlergico){
            alergicos[numAlergicos] = personas[i];
            ++numAlergicos;
        }else{
            noAlergicos[numNoAlergicos] = personas[i];
            ++numNoAlergicos;
        }
    }
}
string imprimirPersonas(Persona personas[MAX_TAM], int tamReal) {
    string toRet = "[ \n";
    for (int i = 0; i < tamReal; ++i) {
        toRet += " " + personas[i].nombre + " , ";
        if (personas[i].esAlergico){
            toRet += "alergico \n";
        }else{ toRet += "no alergico \n";
        }
    }
    toRet += "]";
    return toRet;
}

//main
int main() {

    Persona personas[MAX_TAM] = {{"Pepe", true},
                                 {"Fede", false},
                                 {"Paula", false}},
    alergicos[MAX_TAM] = {}, noAlergicos[MAX_TAM] = {};
    int tamReal = 3, numAlergicos = 0, numNoAlergicos = 0;


    cout << "Todas las personas son: " <<endl << imprimirPersonas(personas,tamReal) << endl;

    organizarPersonas(personas,tamReal,alergicos,numAlergicos,noAlergicos,numNoAlergicos);

    cout << "Todas las personas alergicas son: " <<endl << imprimirPersonas(alergicos,numAlergicos) << endl;
    cout << "Todas las personas no alergicas son: " <<endl << imprimirPersonas(noAlergicos,numNoAlergicos) << endl;

    return 0;
}

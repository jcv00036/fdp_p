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
    float peso;
    float altura;
};

//funciones
/**
 *
 * Calcula el IMC de una persona
 *
 * @param peso
 * @param altura
 * @return IMC
 */
float calcularIMC(float peso,float altura){
    float IMC = 0;

    IMC = (peso/(altura*altura));

    return IMC;
}
/**
 *
 * Imprime un listado con todas las personas
 *
 * @param personas
 * @param tamReal
 * @return listado de personas
 */
string imprimirPersonas(Persona personas[MAX_TAM], int tamReal) {
    string toRet = "[ \n";
    for (int i = 0; i < tamReal; ++i) {
        toRet += " " + personas[i].nombre + " , " + to_string(personas[i].altura) + "m, "
                 + to_string(personas[i].peso) + "kg, IMC= " + to_string(calcularIMC(personas[i].peso,personas[i].altura));
    }
    toRet += "]";
    return toRet;
}
/**
 *
 * Imprime un listado de personas con mas de alturaMinima m de altura
 *
 * @param personas
 * @param tamReal
 * @param alturaMinima
 * @return listado
 */
string imprimirPersonasPorAltura(Persona personas[MAX_TAM], int tamReal,float alturaMinima) {
    string toRet = "[ \n";
    for (int i = 0; i < tamReal; ++i) {
        if(personas[i].altura > alturaMinima) toRet += " " + personas[i].nombre + " , ";
        }
    toRet += "]";
    return toRet;
}
int personaConMasIMC(Persona personas[MAX_TAM], int tamReal){
    int min = 0;
    for (int i = 0; i < (tamReal); ++i) {
        if(calcularIMC(personas[i].peso,personas[i].altura)>calcularIMC(personas[min].peso,personas[min].altura)){
            min = i;
        }
    }
    return min;
}
bool coincideIMC(Persona personas[MAX_TAM], int tamReal){

}
//main
int main() {

    Persona personas[MAX_TAM] = {{"Pepe",80,1.90}};
    cout << "Las personas almacenadas son: " << imprimirPersonas(personas,1) << endl;
    cout << "Las personas almacenadas que miden mas de 1,80m son: " << imprimirPersonasPorAltura(personas,1,1.8) << endl;
    cout << "Las persona con mayorIMC es: " << personas[personaConMasIMC(personas,1)].nombre << endl;

    return 0;
}

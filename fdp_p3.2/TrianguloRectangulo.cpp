//@name: TrianguloRectangulo
//@autor: Juan Carrasco Vico
//@desc: El programa dibuja un triangulo rectangulo de base y altura n


#include <iostream>

using namespace std;

int main() {

    int baseAltura = 0;

    cout << "Introduce un valor para la base (tambien sera la altura): " << endl;
    cin >> baseAltura;

    for(int i = 0; i < baseAltura; ++i){
        for(int j = 0; j < (i+1); ++j){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
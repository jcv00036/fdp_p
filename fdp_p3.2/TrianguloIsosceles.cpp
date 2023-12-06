//@name: TrianguloIsosceles
//@autor: Juan Carrasco Vico
//@desc: El programa dibuja un triangulo isosceles de base y altura n


#include <iostream>

using namespace std;

int main() {

    int baseAltura = 0;

    cout << "Introduce un valor para la base (tambien sera la altura): " << endl;
    cin >> baseAltura;

    for(int i = 0; i < baseAltura; ++i){
        for(int j = baseAltura; j> i; --j){
            cout << " ";
        }
        for(int k = 0; k < (i+1); ++k){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
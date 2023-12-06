//@name: Sumatoria
//@autor: Juan Carrasco Vico
//@desc: Implementa un programa que calcule la suma de los siguientes 100 términos de la
//serie:
//1 - 1/2 + 1/4 - 1/6 + 1/8 - 1/10 + 1/12 - ...


#include <iostream>

using namespace std;

int main() {

    float sumatoria = 1;

    for(int i = 2; i<=100; i += 2){
        if((i/2)%2 == 0 ){
            sumatoria += 1/(float)i;
        }else{
            sumatoria -= 1/(float)i;
        }
    }

    cout << sumatoria;

    return 0;
}
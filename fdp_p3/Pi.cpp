//@title: Pi
//@author: Juan Carrasco Vico
//@desc: El programa pide al usuario un valor y devuelve una aproximacion
//       de pi con ese valor

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float decimales = 0, sumatoria = 0;

    cout << "Que grado de aproximacion a pi quieres?: " << endl;
    cin >> decimales;

    for(int i=1; i <= decimales; ++i){
        sumatoria += 6/(pow(i,2));
    }

    cout << "Pi = " << sqrt(sumatoria);
}
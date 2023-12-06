#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Para ax^2 + bx + c = 0, introduzca un valor para a: " << endl;
    cin >> a;
    cout << "Introuzca un valor para b: " << endl;
    cin >> b;
    cout << "Introduzca un valor para c: " << endl;
    cin >> c;

    float x1 = (-b+sqrt(pow(b,2) - 4*a*c))/ (2 * a);
    float x2 = (-b-sqrt(pow(b,2) - 4*a*c))/ (2 * a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2;

    return 0;
}

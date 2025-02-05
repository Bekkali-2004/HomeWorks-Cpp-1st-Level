#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double A = 5, B = 6, C = 7;
    const double PI = 3.14;
    double P = (A + B + C) / 2;
    double T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    double Z = T * T;
    double Area = PI * Z;

    cout << round(Area) << endl; // 40

    return 0;
}
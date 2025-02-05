#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double A = 10;
    const double PI = 3.14;
    double Area = (PI * ((A / 2) * (A / 2)));

    cout << ceil(Area) << endl; // Area = 79

    return 0;
}
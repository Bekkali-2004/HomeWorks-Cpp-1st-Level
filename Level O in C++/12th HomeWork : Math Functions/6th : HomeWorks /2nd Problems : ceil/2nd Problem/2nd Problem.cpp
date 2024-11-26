#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double D = 10;
    const double PI = 3.14;
    double Area = (PI * (D * D) / 4);

    cout << ceil(Area) << endl;

    return 0;
}
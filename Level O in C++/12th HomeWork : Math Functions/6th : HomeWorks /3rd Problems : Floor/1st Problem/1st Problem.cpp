#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double L = 20.0;
    const double PI = 3.14;
    double Area = ((L * L) / (4 * PI));

    cout << floor(Area) << endl; // 31

    return 0;
}
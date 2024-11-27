#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double A = 20;
    double B = 10;
    const double PI = 3.14;
    double Area = ( PI * ((B * B) / 4) * ((2 * A - B) / (2 * A + B)));

    cout << floor(Area) << endl;
 
    return 0;
}
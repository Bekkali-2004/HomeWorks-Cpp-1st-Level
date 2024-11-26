#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double a = 5;
    double d = 40;

    double area = (a * sqrt((d * d) - (a * a)));

    cout << area << endl; // 198.431

    return 0;
}
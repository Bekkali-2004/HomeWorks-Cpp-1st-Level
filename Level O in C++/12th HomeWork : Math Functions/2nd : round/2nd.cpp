#include <iostream>
#include <cmath>

using namespace std;

int main (){

    float x = 50.50000; // 51
    float y = 50.49999; // 50

    cout << round(x) << endl; // Rounding Numbers
    cout << round(y) << endl; // Rounding Numbers
    cout << round(sqrt(y))<< endl; // Rounding Numbers = 7
    cout << round(sqrt(x))<< endl; // Rounding Numbers = 7

    return 0;
}
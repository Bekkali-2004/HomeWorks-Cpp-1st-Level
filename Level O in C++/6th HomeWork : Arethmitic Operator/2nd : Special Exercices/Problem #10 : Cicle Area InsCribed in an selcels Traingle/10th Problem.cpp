#include <iostream>

using namespace std;

int main (){

    double a = 10;
    double b = 15;
    const double PI = 3.14;
    double CircleArea = PI * (b * b) / 4 * ((2 * a - b) / (2 * a + b));

    cout << "The Circle Area is : " << CircleArea << endl;

    return 0;
}
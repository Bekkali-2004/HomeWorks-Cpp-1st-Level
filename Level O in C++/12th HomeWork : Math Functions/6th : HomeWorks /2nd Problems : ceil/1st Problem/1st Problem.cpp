#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double r = 5;
    const double PI = 3.14;
    double Area = PI * (r * r); 

    cout << ceil(Area) << endl; // ceil(78.54) ~ 79
    

    return 0;
}
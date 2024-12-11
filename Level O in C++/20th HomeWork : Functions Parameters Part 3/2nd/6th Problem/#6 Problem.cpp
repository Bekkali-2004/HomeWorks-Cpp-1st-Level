#include <iostream>
#include <cmath>

using namespace std;

void AreaCircle(){
    double r = 5;
    const double PI = 3.14;
    double Area = PI * ( r * r );
    cout << Area << endl;
}

int main (){

    AreaCircle();

    return 0;
}
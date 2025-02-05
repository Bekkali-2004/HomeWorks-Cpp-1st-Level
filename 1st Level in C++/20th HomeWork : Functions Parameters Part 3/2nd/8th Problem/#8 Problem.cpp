#include <iostream>
#include <cmath>

using namespace std;

double Area_Inscribed_In_The_Square(){
    int A = 10;
    const double PI = 3.14;
    double Area = (PI * ((A * A) / 4));
    return Area;
}

int main(){

    cout << Area_Inscribed_In_The_Square() << endl;

    return 0;
}
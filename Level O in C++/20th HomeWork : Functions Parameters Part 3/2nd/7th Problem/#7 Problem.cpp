#include <iostream>
#include <cmath>

using namespace std;

float DiameterCircle(float D){
    const float PI = 3.14;
    float Area = ((PI * (D * D)) / 4);
    return Area;
}

int main (){

    cout << DiameterCircle(10) << endl;

    return 0;
}
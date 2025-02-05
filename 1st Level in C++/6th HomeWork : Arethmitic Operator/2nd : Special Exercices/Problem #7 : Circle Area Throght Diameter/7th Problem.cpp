#include <iostream>

using namespace std;

int main (){

    double D;
    const double PI = 3.14;

    cout << "Enter The Number For Diameter : " << endl;
    cin >> D;

    cout << "------------------------------------" << endl;

    double area = (PI * D) / 4;

    cout << "The Are Of The Circle : " << area << endl;

    return 0;
}
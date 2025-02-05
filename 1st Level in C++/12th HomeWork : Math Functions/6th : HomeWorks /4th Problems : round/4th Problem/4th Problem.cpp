#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double DD;
    double HH;
    double MM;
    double SS;

    cout << "Enter The DD::HH::MM::SS -> TotalSeconds : " << endl << endl;

    cout << "DD :" << endl;
    cin >> DD;
    cout << "HH :" << endl;
    cin >> HH;
    cout << "MM :" << endl;
    cin >> MM;
    cout << "SS :" <<endl;
    cin >> SS;
    

    double TotalSeconds = round((DD * 24 * 60 * 60) + (HH * 60 * 60) + (MM * 60) + SS);

    cout << DD << "::" << HH << "::" << MM << "::" << SS << " -> " << TotalSeconds << " sec"<< endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int Number;

    cout << "Enter Only One Number : " << endl;
    cin >> Number;

    int a = pow(Number , 2); //or " int c = Number * Number; "
    int b = pow(Number , 3); //or " int c = Number * Number * Number; "
    int c = pow(Number , 4); //or " int c = Number * Number * Number * Number; "

    cout << "------------------------------------------" << endl;

    cout << "The Power " << Number << " Of 2 is : " << a << endl;
    cout << "The Power " << Number << " Of 3 is : " << b << endl;
    cout << "The Power " << Number << " Of 4 is : " << c << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int PowNum(){
    int number;
    cout << "Enter The Number For Power : " << endl;
    cin >> number;

    int power;
    cout << "Enter The Power for Number : " << endl;
    cin >> power;

    cout << "Result is : " << pow(number, power) << endl;
}

int main (){

    PowNum();

    return 0;
}
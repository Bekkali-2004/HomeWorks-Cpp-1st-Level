#include <iostream>

using namespace std;

int main (){

    int number1 = 10;
    int number2 = 20;
    int temp;

    cout << number1 << endl;
    cout << number2 << endl;
    cout << "----------------------------------" << endl;

    temp = number1;
    number1 = number2;
    number2 = temp;

    cout << number1 << endl;
    cout << number2 << endl;

    return 0;
}
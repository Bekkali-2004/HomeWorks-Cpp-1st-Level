#include <iostream>

using namespace std;

int main (){

    int a = 10; // b = a + 1 = 11
    int b = a++; // Value Of A 

    cout << b << endl; // 10
    cout << a << endl; // 11

    b = ++a;

    cout << a << endl;
    cout << b << endl;

    return 0;
}
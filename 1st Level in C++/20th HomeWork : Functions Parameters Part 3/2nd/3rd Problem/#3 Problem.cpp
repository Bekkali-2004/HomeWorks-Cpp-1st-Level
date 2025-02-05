#include <iostream>

using namespace std;

void SwapValues(){ // Precedure Function
    int temp;
    int Num1 = 5;
    int Num2 = 10;

    temp = Num1;
    Num1 = Num2;
    Num2 = temp;

    cout << Num1 << endl;
    cout << Num2 << endl;
}

int main(){

    SwapValues();

    return 0;
}
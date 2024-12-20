#include <iostream>

using namespace std;

int main (){

    float Num1 , Num2;
    char op;

    cout << "Enter the first number: ";
    cin >> Num1;
    cout << "Enter the second number: ";
    cin >> Num2;

    if (op == '+')
    {
        cout << Num1 + Num2 << endl;
    }
    else if(op == '-'){
        cout << Num1 - Num2 << endl;
    }
    else if(op == '*'){
        cout << Num1 * Num2 << endl;
    }
    else if(op == '/'){
        cout << Num1 / Num2 << endl;
    }
    

    return 0;
}
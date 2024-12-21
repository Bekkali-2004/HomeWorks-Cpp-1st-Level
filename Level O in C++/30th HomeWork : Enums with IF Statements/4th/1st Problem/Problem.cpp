#include <iostream>

using namespace std;

int main (){

    float Num1 , Num2;
    char op;

    cout << "Enter the first number: ";
    cin >> Num1;
    cout << "Enter the second number: ";
    cin >> Num2;

    switch (op)
    {
    case '+':
        cout << Num1 + Num2;
        break;
    case '-':
        cout << Num1 - Num2;
        break;
    case '*':
        cout << Num1 * Num2;
        break;
    case '/':
        cout << Num1 / Num2;
        break;
    
    default:
        cout << "Invalid Operator";
        break;
    }
    

    return 0;
}
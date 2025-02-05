#include <iostream>

using namespace std;

int main (){

    int PIN;

    cout << "Enter The PIN : " << endl;
    cin >> PIN;

    if (PIN == 1234)
    {
        cout << "This PIN IS Correct !" << endl;
        cout << "Ur Balance is : 0.5$ :) " << endl;
    }
    else {
        cout << "This Isn't Correct The PIN !" << endl;
    }
    

    return 0;
}
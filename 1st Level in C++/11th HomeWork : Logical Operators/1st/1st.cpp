#include <iostream>

using namespace std;

int main (){

    bool A = 1, B = 0; /// And int is correct Variable Here


    cout << (A || B) << endl; // True Or 1
    cout << (A && B) << endl; // False Or 0
    cout << !A << endl; // False Or 0
    cout << !B << endl; // True Or 1
    cout << !(A || B) << endl; // False Or 0 -> Is Mean !True
    cout << !(A && B) << endl; // True Or 1 -> Is Mean !False
    return 0;
}
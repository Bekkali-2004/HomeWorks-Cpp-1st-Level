 #include <iostream>

 using namespace std;

 int main (){

    int A = 10;
    int B = 20;
    bool Stuation = A == B;

    cout << Stuation << endl; // False Or 0

    Stuation = A != B;

    cout << Stuation << endl; // True Or 1

    Stuation = A >= B;

    cout << Stuation << endl; // False Or 0

    Stuation = A <= B;

    cout << Stuation << endl; // True Or 1

    Stuation = A > B;

    cout << Stuation << endl; // False Or 0

    Stuation = A < B;

    cout << Stuation << endl; // True Or 1


    return 0;
 }
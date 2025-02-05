#include <iostream>
#include <string>
using namespace std;

int x = 600; // Global Variable

void MyFunc1(){
    int x = 500; // Local Variable

    cout << "The Value Of x inside function is : " << x << endl;
}

int main () // Procedural Function Too 
{ 

    int x = 10; // Here U Can't Change value in the variable above ( Local Variable )

    cout << "The Value Of x inside Main is : " << x << endl; // 10
    MyFunc1(); // 500

    cout << " The Global Variable is : " << ::x << endl; // 600

    return 0;
}
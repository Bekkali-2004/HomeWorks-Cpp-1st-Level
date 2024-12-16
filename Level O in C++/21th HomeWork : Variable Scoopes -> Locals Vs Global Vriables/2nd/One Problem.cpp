#include <iostream>

using namespace std;

int x = 100;
int y = 200;

void MyFunc1(){
    int x = 50;

    cout << "The Value Of x inside function is : " << x << endl;
}

void MyFunc2(){
    int y = 150;

    cout << "The Value Of y inside function is : " << y << endl;
}

int main (){

    int x = 10;
    int y = 20;
    ::x = 300;
    ::y = 400;

    cout << "The Value Of x inside function is : " << x << endl;
    MyFunc1();
    cout << "The Value Of y inside function is : " << y << endl;
    MyFunc2();
    cout << "The Value Of x Global is : " << ::x << endl;
    cout << "The Value Of y Global is : " << ::y << endl;

    return 0;
}
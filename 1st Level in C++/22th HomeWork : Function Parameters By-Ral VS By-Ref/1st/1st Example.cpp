#include <iostream>

using namespace std;

void MyFunc1(int &num1){
    num1 = 7000;

    cout << "The Number Inside The Function is: " << num1 << endl;
}
int main (){

    int num1;

    num1 = 1000;

    MyFunc1(num1); // 7000 by refrence & 1000 By Value

    cout << "The Number After Calling The Function is: " << num1 << endl; // 7000 by refrence & 7000 By Value

    return 0;
}
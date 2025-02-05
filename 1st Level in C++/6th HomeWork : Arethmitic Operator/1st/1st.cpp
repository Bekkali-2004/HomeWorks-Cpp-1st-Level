#include <iostream>

using namespace std;

int main(){

    int FirstNum;
    int SecondNum;

    cout << "Please Enter The First Number :" << endl;
    cin >> FirstNum;
    cout << "Please Enter The Second Number :" << endl;
    cin >> SecondNum;

    cout << "-----------------------------" << endl;

    cout << FirstNum << " + " << SecondNum << " = " << FirstNum + SecondNum << endl;
    cout << FirstNum << " - " << SecondNum << " = " << FirstNum - SecondNum << endl;
    cout << FirstNum << " / " << SecondNum << " = " << FirstNum / SecondNum << endl;
    cout << FirstNum << " * " << SecondNum << " = " << FirstNum * SecondNum << endl;
    cout << FirstNum << " % " << SecondNum << " = " << FirstNum % SecondNum << endl;

    return 0;
}
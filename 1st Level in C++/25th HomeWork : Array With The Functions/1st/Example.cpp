#include <iostream>

using namespace std;

void ReadArrayData(int x[3]){

    cout << "Please Enter The Number 1 : " << endl;
    cin >> x[0];
    cout << "Please Enter The Number 2 : " << endl;
    cin >> x[1];
    cout << "Please Enter The Number 3 : " << endl;
    cin >> x[2];

}

void PrintArrayData(int x[3]){

    cout << "The Array DataNumbers Is : " << endl;
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;

}

int main (){

    int x[3];

    ReadArrayData(x);
    PrintArrayData(x);

    return 0;
}
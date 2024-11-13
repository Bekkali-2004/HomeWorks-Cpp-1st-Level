#include <iostream>

using namespace std;

int main (){

    int FirstNum ;
    int SecondNum ;
    int ThirdNum;

    cout << "Enter The First Number : " << endl;
    cin >> FirstNum;
    cout << "Enter The Second Number : " << endl;
    cin >> SecondNum;
    cout << "Enter The Third Number :" << endl;
    cin >> ThirdNum;
    cout << "---------------------------" << endl;

    cout << FirstNum << " +" <<endl;
    cout << SecondNum << " +" << endl;
    cout << ThirdNum << endl;
    cout << "_______________________" << endl << endl;
    cout << FirstNum + SecondNum + ThirdNum << endl;

    return 0;
}
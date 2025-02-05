#include <iostream>

using namespace std;

int main (){

    double Mark1, Mark2, Mark3;

    cout << "Enter 3 Marks (If U Want :) : " << endl;
    cout << "1st Mark :" << endl;
    cin >> Mark1;
    cout << "2nd Mark :" << endl;
    cin >> Mark2;
    cout << "3rd Mark :" << endl;
    cin >> Mark3;

    double Averange = (Mark1 + Mark2 + Mark3) / 3;

    cout << "------------------------------------------" << endl;

    cout << "Ur Averange Mark is : " << Averange << endl;

    return 0;
}
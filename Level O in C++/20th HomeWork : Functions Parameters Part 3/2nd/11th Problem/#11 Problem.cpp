#include <iostream>
#include <cmath>

using namespace std;

void NumPow(){

    int num;
    cout << "Enter The Number Of Basic for Pow 2 & 3 & 4 : " << endl;
    cin >> num;
    cout << "\n*******************************" << endl;
    cout << "The Result is : " << endl;
    cout << "Power Of 2 is : " <<pow(2, num) << endl;
    cout << "Power Of 3 is : " <<pow(3, num) << endl;
    cout << "Power Of 4 is : " << pow(4, num) << endl;
}

int main (){

    NumPow();

    return 0;
}
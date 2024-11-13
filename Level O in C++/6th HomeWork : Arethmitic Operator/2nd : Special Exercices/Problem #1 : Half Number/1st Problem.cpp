#include <iostream>

using namespace std;

int main (){

    double FirstNum;
    double SecondNum = 2;
    
    cout << "Enter The Number and is automatic Half : " << endl;
    cin >> FirstNum;

    double result = FirstNum / SecondNum;
    
    cout << "-----------------------------------------" << endl;

    cout << "The Half Of Number " << FirstNum << " is : " << result << endl;

    return 0;
}
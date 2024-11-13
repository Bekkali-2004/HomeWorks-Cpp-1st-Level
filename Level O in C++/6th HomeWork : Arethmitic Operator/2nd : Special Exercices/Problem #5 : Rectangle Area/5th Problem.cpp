#include <iostream>

using namespace std;

int main (){

    int A , B;

    cout << "Enter The Two Sides Hight and Width :" << endl;
    cout << "1st Height :" << endl;
    cin >> A;
    cout << "2nd Width :" << endl;
    cin >> B;

    int area = (A * B);
    cout << "------------------------------------------" << endl;

    cout << "The Area Of Rectangle is : " << area << " mPow2" << endl;

    return 0;
}
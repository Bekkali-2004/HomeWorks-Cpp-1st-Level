#include <iostream>

using namespace std;

int main (){

    int x[3];

    cout << "Enter The 1st Grade : " << endl;
    cin >> x[0];
    cout << "Enter The 2st Grade : " << endl;
    cin >> x[1];
    cout << "Enter The 3st Grade : " << endl;
    cin >> x[2];
    cout << "*********************" << endl;
    cout << "The Averange Of Grades is " << (x[0] + x[1] + x[2]) / 3 << endl;

    return 0;
}
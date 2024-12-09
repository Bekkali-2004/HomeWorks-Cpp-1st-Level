#include <iostream>
#include <string>

using namespace std;

int main(){

    string FullName;
    
    cout << " Enter Ur Full Name : " << endl;
    getline(cin, FullName);

    string NumberString;

    cout << "Please Enter The Number String : " << endl;
    cin >> NumberString;

    int NumberStr;

    cout << " Please Enter The NumStr : " << endl;
    cin >> NumberStr;

    cout << "-----------------------------------" << endl;

    cout << "The Length Of FullName is " << FullName.length() << endl;
    cout << "Characters at 0, 2, 4, 7 are : " << FullName[0] << FullName[2] << FullName[4] << FullName[7] << endl;
    cout << "Charactenating NumberString & NumberStr = " << (stoi(NumberString) * NumberStr) << endl;

    return 0;
}
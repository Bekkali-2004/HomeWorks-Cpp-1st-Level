/* Read String With Spaces */

#include <iostream>
#include <string>

using namespace std;

int main(){

    string FullName;

    //cin >> FullName; ~ Mohamed El Bekkkali -> Mohamed
    getline(cin, FullName); // Is Print all you write with space between letters
    cout << FullName << endl;

    return 0;
}
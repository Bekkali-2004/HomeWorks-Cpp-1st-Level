#include <iostream>
#include <string>

using namespace std;

string UserName() { // Function

    string name;
    cout << "Enter Your FullName: " << endl;
    getline(cin, name);
    cout << "\n--------------------------------" << endl;
    return name;
}

int main() {

    cout << UserName() << endl;

    return 0;
}
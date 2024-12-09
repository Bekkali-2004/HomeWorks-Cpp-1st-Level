#include <iostream>
#include <string>

using namespace std;

int main (){

    int Number;
    string Name;
    string Country;

    cout << " Enter The Number The Employees in The Company : " << endl;
    cin >> Number;

    cout << "Enter The Name : " << endl;
    cin.ignore(1, '\n');
    getline(cin, Name);

    cout << "Enter The Country : " << endl;
    cin >> Country;

    cout << "Number : " << Number << ", Name : " << Name << ", Country : " << Country << endl;

    return 0;
}
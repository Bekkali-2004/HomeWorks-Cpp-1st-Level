#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1 = "123.123";

    cout << " String -> integer : " << stoi(str1) << endl; // 123
    cout << " String -> float :  "<< stof(str1) << endl; // 123.123
    cout << " String -> Double : " << stod(str1) << endl; // 123.123

    return 0;
}
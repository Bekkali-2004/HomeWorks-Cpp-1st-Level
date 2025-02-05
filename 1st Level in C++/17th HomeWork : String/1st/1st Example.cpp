#include <iostream>
#include <string>

using namespace std;

int main () {

    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The Length of an alphabet is : "<< str.length() << endl; // 26

    cout << str[2] << endl; // C

    string S1 = "10", S2 = "20"; // string to integer

    string S3 = S1 + S2; // string concatenation
    cout << S3 << endl; // 1020

    int sum = stoi(S1) + stoi(S2); // string to integer
    cout << sum << endl; // 30

    return 0;
}
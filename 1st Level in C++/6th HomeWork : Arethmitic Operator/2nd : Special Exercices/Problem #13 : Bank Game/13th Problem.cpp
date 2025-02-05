#include <iostream>

using namespace std;

int main (){

    double Pinnies;
    double Nickels;
    double Dimes;
    double Qouarters;
    double Dollar;

    cout << "Enter the Pinnies : " << endl;
    cin >> Pinnies;
    cout << "Enter The Nickels : " << endl;
    cin >> Nickels;
    cout << "Enter The Dimes : " << endl;
    cin >> Dimes;
    cout << "Enter The Qouarters : " << endl;
    cin >> Qouarters;
    cout << "Enter The Dollar : " << endl;
    cin >> Dollar;

    double TotalPiennies = Pinnies * 1 + Nickels * 5 + Dimes * 10 + Qouarters * 25 + Dollar * 100;
    double TotalDollar = TotalPiennies / 100;

    cout << "----------------------------------" << endl;

    cout << "The Total Pinnies is : " << TotalPiennies << endl;
    cout << "The Total Dollar is : " << TotalDollar << "$" << endl;

    return 0;
}
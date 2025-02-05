#include <iostream>

using namespace std;

int main (){

    int PaymentTotalReturn = 5000;
    int PaymentPerMonth = 500;

    // soo How Many Month for Return All Money ?

    int TotalMonth = PaymentTotalReturn / PaymentPerMonth;

    cout << "Soo We Have : " << TotalMonth << " Months For Return All The Money !" << endl;

    return 0;
}
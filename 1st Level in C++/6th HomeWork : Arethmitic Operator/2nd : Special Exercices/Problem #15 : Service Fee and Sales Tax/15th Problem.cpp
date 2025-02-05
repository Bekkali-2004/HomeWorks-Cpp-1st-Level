#include <iostream>

using namespace std;

int main (){

    double BillValue = 100;

    double TotalBill = (BillValue * 1.1);
    TotalBill = (TotalBill * 1.16);

    cout << "The TotaLBill is : " << TotalBill << "$" << endl;

    return 0;
}
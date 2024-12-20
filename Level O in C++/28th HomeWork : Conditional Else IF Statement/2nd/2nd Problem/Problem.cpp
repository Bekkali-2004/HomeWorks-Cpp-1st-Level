#include <iostream>

using namespace std;

int main (){

    float TotalSales;
    float SalesTax = TotalSales * SalesTax;

    cout << "Enter the total sales: " << endl;
    cin >> TotalSales;

    if (TotalSales >= 1000000)
    {
        SalesTax = TotalSales * 0.01;
        cout << "The Total Taxes From " << TotalSales << " is : " << SalesTax << endl;
    }
    else if (TotalSales >= 500000 || TotalSales <= 1000000){
        SalesTax = TotalSales * 0.02;
        cout << "The Total Taxes From " << TotalSales << " is : " << SalesTax << endl;        
    }
    else if (TotalSales >= 100000 || TotalSales <= 500000){
        SalesTax = TotalSales * 0.03;
        cout << "The Total Taxes From " << TotalSales << " is : " << SalesTax << endl;
    }
    else if (TotalSales >= 50000 || TotalSales <= 100000){
        SalesTax = TotalSales * 0.05;
        cout << "The Total Taxes From " << TotalSales << " is : " << SalesTax << endl;
    }
    else{
        SalesTax = TotalSales;
        cout << "The Total Taxes From " << TotalSales << " is : " << SalesTax << endl;
    }
    

    return 0;
}
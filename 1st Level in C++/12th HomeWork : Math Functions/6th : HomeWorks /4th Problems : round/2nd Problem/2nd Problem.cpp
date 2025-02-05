#include <iostream>
#include <cmath>

using namespace std;

int main(){

    long double Num;

    cout << "Enter The Number anyNumber U want and Power it in 2 and 3 and 4 : " << endl;
    cout << "But If U Want Double Number U Can't Cuz This Result of automaticlly flooring Num Or Ceilling !!!!!!" << endl;
    cin >> Num;

    long double Num1 = floor(pow(Num , 2));
    long double Num2 = floor(pow(Num , 3));
    long double Num3 = floor(pow(Num , 4));
    
    cout << "The Power 2 and 3 and 4 of Number "  << Num << " is : " << Num1 << " and " << Num2 << " and " << Num3 << endl;
    
    return 0;
}
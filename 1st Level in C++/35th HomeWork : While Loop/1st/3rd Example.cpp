#include <iostream>


using namespace std;

int ReadRangeNumber(int From, int To){
    int Number;

    cout << "Enter a number between " << From << " and " << To << ": " << endl;
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Wrong number, please try again: " << endl;
        cout << "Enter a number between " << From << " and " << To << ": " << endl;
        cin >> Number;
    }
    
    return Number;
}

int main(){

    int From = 1, To = 100;

    cout << "The Number is : " << ReadRangeNumber(From, To) << endl;
}
#include <iostream>

using namespace std;

int main(){

    int Number;
    cout << "Enter a Positive Number : " << endl;
    cin >> Number;

    while (Number < 0){
        cout << "Wrong Number, Please Enter a Positive Number : " << endl;
        cin >> Number;
    }
    
    cout << "The Number is : " << Number << endl;

    return 0;
}

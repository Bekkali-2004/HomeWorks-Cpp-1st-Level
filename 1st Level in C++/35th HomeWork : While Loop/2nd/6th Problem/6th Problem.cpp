#include <iostream>

using namespace std;

int main (){

    int M , Num;
    cout << "Enter The Number Of Power M : " << endl;
    cin >> M;
    cout << "Enter The Number Of Power Num : " << endl;
    cin >> Num;

    if (M < 0)
    {
        cout << "Try Again This Number Is Negative" << endl;
        return 1;
    }

    int Result = 1;
    int counter = 0;

    while (counter < M)
    {
        Result *= Num;
        counter++;
    }
    
    cout << "The Result Is : " << Result << endl;

    return 0;
}
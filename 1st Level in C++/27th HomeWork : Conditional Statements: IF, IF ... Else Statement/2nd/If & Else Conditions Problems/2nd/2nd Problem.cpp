#include <iostream>

using namespace std;

int main (){

    int Mark;

    cout << "Enter Your Mark : " << endl;
    cin >> Mark;

    if (Mark >= 50)
    {
        cout << "U Pass !" << endl;
    }
    else {
        cout << "U Failed !" << endl;
    }
    

    return 0;
}
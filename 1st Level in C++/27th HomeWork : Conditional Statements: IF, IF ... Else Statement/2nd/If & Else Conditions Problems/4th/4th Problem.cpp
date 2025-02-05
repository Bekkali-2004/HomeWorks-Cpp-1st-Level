#include <iostream>

using namespace std;

int main (){

    int Age;
    cout << "Enter U Age For Driving : " << endl;
    cin >> Age;

    if (Age >= 18 && Age <= 75)
    {
        cout << "U Can To Driving !" << endl;
    }
    else {
        cout << "U Can't To Driving ! " << endl;
    }

    return 0;
}
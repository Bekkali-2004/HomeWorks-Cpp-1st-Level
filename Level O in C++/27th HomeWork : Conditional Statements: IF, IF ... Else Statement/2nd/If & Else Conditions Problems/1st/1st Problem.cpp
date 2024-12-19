#include <iostream>

using namespace std;

int main (){

    int Age;
    string HasLiscenceDrive;

    cout << "Enter Ur Age : " << endl;
    cin >> Age;

    cout << "Are U Have Liscence To Drive ? " << endl;
    cin >> HasLiscenceDrive;

    if (Age >= 18 && HasLiscenceDrive == "Yes")
    {
        cout << "U Can To Drive !" << endl;
    }
    else{
        cout << "Sorry U Can't To Drive Bro ! " << endl;
    }
    

    return 0;
}
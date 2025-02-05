#include <iostream>

using namespace std;

enum enScreenColor { Red = 1 , Blue = 2, Green = 3, Yellow = 4 };

int main(){

    cout << "**********************" << endl;
    cout << "Please Enter Your Favorite Color : " << endl;
    cout << "1- Red" << endl;
    cout << "2- Blue" << endl;
    cout << "3- Green" << endl;
    cout << "4- Yellow" << endl;
    cout << "**********************" << endl;
    cout << "Your Favorite Color is : ";

    int C;
    enScreenColor Color;

    cin >> C;
    Color = (enScreenColor)C;

    switch (Color)
    {
    case enScreenColor::Red:

        system("color 4F");
        break;
        
    case enScreenColor::Blue:

        system("color 1F");
        break;

    case enScreenColor::Green:

        system("color 2F");
        break;

    case enScreenColor::Yellow:

        system("color 6F");
        break;

    default:

        system("color 4F");
        break;
    }

    return 0;
}
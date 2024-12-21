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

    if (Color == enScreenColor::Red)
    {
        system("Color 4F");
    }
    else if (Color == enScreenColor::Blue)
    {
        system("Color 1F");
    }
    else if (Color == enScreenColor::Green)
    {
        system("Color 2F");
    }
    else if (Color == enScreenColor::Yellow)
    {
        system("Color 6F");
    }
    else 
    {
        system("Color 7F");
    }
    

    return 0;
}
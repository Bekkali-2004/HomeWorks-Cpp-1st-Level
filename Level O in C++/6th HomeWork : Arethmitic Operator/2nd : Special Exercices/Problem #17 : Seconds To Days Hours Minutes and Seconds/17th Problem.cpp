#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int TotalSeconds = 193535;
    int SecondPerDays = 24 * 60 * 60;
    int SecondPerHours = 60 * 60;
    int SecondPerMinutes = 60;
    int NumberOfDays = floor(TotalSeconds / SecondPerDays);
    int Remainder = TotalSeconds % SecondPerDays;
    int NumberOfHours = floor(Remainder / SecondPerHours);
    Remainder = Remainder % SecondPerHours;
    int NumberOfMinutes = floor(Remainder / SecondPerMinutes);
    Remainder = Remainder % SecondPerMinutes;
    int NumberOfSeconds = Remainder;

    cout << NumberOfDays << "DD:" << NumberOfHours << "HH:" << NumberOfMinutes << "MM:" << NumberOfSeconds << "SS" << endl;



    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main (){

    cout << "Enter The Second for transform to -> DD::HH::MM::SS " << endl << endl;
    
    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerMinutes = 60;
    int TotalSeconds = (SecondsPerDay + SecondsPerHour + SecondsPerHour);

    cin >> TotalSeconds;

    int NumberOfDays = round(floor(TotalSeconds / SecondsPerDay));
    int Remainder = (TotalSeconds % SecondsPerDay);
    int NumberOfHours = round(floor(Remainder / SecondsPerHour));
    Remainder = Remainder % SecondsPerHour;
    int NumberOfMinutes = round(floor(Remainder / SecondsPerMinutes));
    int NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl; 


    
    return 0;
}
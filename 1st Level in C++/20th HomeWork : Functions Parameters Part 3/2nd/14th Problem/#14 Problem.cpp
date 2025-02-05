#include <iostream>
using namespace std;

float TotalSecToClock(){

    cout << "Enter The Second for transform to -> DD::HH::MM::SS " << endl << endl;
    
    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerMinutes = 60;
    int TotalSeconds = (SecondsPerDay + SecondsPerHour + SecondsPerHour);
    cin >> TotalSeconds;

    int NumberOfDays = (TotalSeconds / SecondsPerDay);
    int Remainder = TotalSeconds % SecondsPerDay;
    int NumberOfHours = (Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    int NumberOfMinutes = (Remainder / SecondsPerMinutes);
    Remainder = Remainder % SecondsPerMinutes;
    int NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl; 

}

int main (){

    cout << TotalSecToClock() << endl;

    return 0;
}
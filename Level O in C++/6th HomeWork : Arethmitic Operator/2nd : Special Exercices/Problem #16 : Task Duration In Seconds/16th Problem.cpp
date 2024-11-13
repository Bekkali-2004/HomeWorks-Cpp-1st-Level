#include <iostream>

using namespace std;

int main (){

    int NumberOfDays = 2;
    int NumberOfHours = 5;
    int NumberOfMinutes = 45;
    int NumberOfSeconds = 35;

    int TotalSeconds = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 * 60) + (NumberOfMinutes * 60) + (NumberOfSeconds);

    cout << "The Total Seconds is : " << TotalSeconds << " Sec" << endl;

    return 0;
}
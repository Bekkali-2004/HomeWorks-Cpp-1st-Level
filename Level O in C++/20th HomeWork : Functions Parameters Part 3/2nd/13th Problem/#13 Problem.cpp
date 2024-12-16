#include <iostream>
#include <cmath>

using namespace std;

float Seconds(float NumberOfDays , float NumberOfHours, float NumberOfMinutes, float NumberOfSeconds){
    return NumberOfDays * 24 * 60 * 60 + NumberOfHours * 60 * 60 + NumberOfMinutes * 60 + NumberOfSeconds;
}

int main (){

    cout << Seconds(2 , 5 , 45 , 35) << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main (){
    int Day;

    cout << "Enter the number of days: " << endl;
    cin >> Day;

    if(Day == 1){
        cout << "Monday" << endl;
    }
    else if(Day == 2){
        cout << "Tuesday" << endl;
    }
    else if(Day == 3){
        cout << "Wednesday" << endl;
    }
    else if(Day == 4){
        cout << "Thursday" << endl;
    }
    else if(Day == 5){
        cout << "Friday " << endl;
    }
        else if(Day == 6){
        cout << "Saturday" << endl;
    }
    else if(Day == 7){
        cout << "Sunday" << endl;
    }
    else{
        cout << "Invalid Day" << endl;
    }

    return 0;
}
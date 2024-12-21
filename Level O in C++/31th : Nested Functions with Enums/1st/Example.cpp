#include <iostream>

using namespace std;

enum enWeekDays {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

void ShowWeedDaysMenue(){

    cout << "*******************" << endl;
    cout << "      MENU      " << endl;
    cout << "*******************" << endl;
    cout << "1. Sunday " << endl;
    cout << "2. Monday  " << endl;
    cout << "3. Tuesday " << endl;
    cout << "4. Wednesday " << endl;
    cout << "5. Thursday " << endl;
    cout << "6. Friday " << endl;
    cout << "7. Saturday " << endl;
    cout << "*******************" << endl;
    cout << "Please Enter Day Number : " << endl;

}

enWeekDays ReadWeekDays(){

    enWeekDays WeekDay;

    int wd;
    cin >> wd;
    return (enWeekDays)wd;

}

string GetWeekDayName(enWeekDays WeekDay){

    switch (WeekDay){
        case enWeekDays::Sun:
            return "Sunday";
            break;
        case enWeekDays::Mon:
            return "Monday";
            break;
        case enWeekDays::Tue:
            return "Tuesday";
            break;
        case enWeekDays::Wed:
            return "Wednesday";
            break;
        case enWeekDays::Thu:
            return "Thursday";
            break;
        case enWeekDays::Fri:
            return "Friday";
            break;
        case enWeekDays::Sat:
            return "Saturday";
            break;
        default:
            return "Not a Week Day";
            break;
    }

}

int main (){

    ShowWeedDaysMenue();

    cout << "Today is : " << GetWeekDayName(ReadWeekDays()) << endl;

    return 0;
}
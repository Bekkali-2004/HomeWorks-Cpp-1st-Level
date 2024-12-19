#include <iostream>

using namespace std;
 
struct StrInfo {
    string FullName;
    int Age;
    string PhoneNumber;

};

int main (){

    StrInfo Persons[2];

    Persons[0].FullName = "Mohamed El Bakkali El Issaoui";
    Persons[0].Age = 20;
    Persons[0].PhoneNumber = "065148784";

    Persons[1].FullName = "Bilal El Bekkali";
    Persons[1].Age = 25;
    Persons[1].PhoneNumber = "0621314481";

    cout << Persons[0].FullName << endl;
    cout << Persons[0].Age << endl;
    cout << Persons[0].PhoneNumber << endl;

    cout << "\n********************************" << endl << endl;

    cout << Persons[1].FullName << endl;
    cout << Persons[1].Age << endl;
    cout << Persons[1].PhoneNumber << endl;


    return 0;
}
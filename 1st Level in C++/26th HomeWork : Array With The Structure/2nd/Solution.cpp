#include <iostream>

using namespace std;

struct StrInfo {
    string FullName;
    int Age;
    string PhoneNumber;
};

void ReadInfo(StrInfo &Info){
    cout << "Enter Your Full Name: " << endl;
    getline(cin, Info.FullName);
    cout << "Enter Your Age: " << endl;
    cin >> Info.Age;
    cout << "Enter Your Phone Number: " << endl;
    cin >> Info.PhoneNumber;
    cout << "\n********************************" << endl << endl;
}

void PrintInfo(StrInfo Info){
    cout << "Your Full Name Is: " << Info.FullName << endl;
    cout << "Your Age Is: " << Info.Age << endl;
    cout << "Your Phone Number Is: " << Info.PhoneNumber << endl;

}

void ReadPersonInfo(StrInfo Persons[2]){
    ReadInfo(Persons[0]);
    ReadInfo(Persons[1]);
}

void PrintPersonsInfo(StrInfo Persons[2]){

    cout << "****************************************" << endl;

    PrintInfo(Persons[0]);
    PrintInfo(Persons[1]);

}

int main (){

    StrInfo Persons[2];
    ReadPersonInfo(Persons);
    PrintPersonsInfo(Persons);

    return 0;
}
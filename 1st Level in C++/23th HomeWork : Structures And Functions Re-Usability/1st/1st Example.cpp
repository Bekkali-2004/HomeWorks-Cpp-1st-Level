#include <iostream>
#include <string>

using namespace std;

struct StrInfo{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(StrInfo &Info) // if I Delete the refrence "&" signal isn't show me any output
{
    cout << "Please Enter Ur 1st Name : " << endl;
    cin >> Info.FirstName;

    cout << "Please Enter Ur Last Name : " << endl;
    cin >> Info.LastName;

    cout << "Please Enter Ur Age : " << endl;
    cin >> Info.Age;

    cout << "Please Enter Ur Phone Number : " << endl;
    cin >> Info.Phone;
}

void PrintInfo(StrInfo Info){
    cout << "****************" << endl;
    cout << "First Name : " << Info.FirstName << endl;
    cout << "Last Name : " << Info.LastName << endl;
    cout << "Ur Age is : " << Info.Age << endl;
    cout << "Phone Number : " << Info.Phone << endl;
    cout << "****************" << endl;
}

int main (){

    StrInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    StrInfo Person2Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}
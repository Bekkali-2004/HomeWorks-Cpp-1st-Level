#include <iostream>
#include <string>

using namespace std;

struct strInfo{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo &Info){

    cout << "Please Enter Ur FirstName : " << endl;
    cin >> Info.FirstName;

    cout << "Please Enter Ur LastName : " << endl;
    cin >> Info.LastName;

    cout << "Please Enter Ur Age : " << endl;
    cin >> Info.Age;

    cout << "Please Enter Ur Phone Number : " << endl;
    cin >> Info.Phone;

    cout << endl << endl;

}

void PrintInfo(strInfo Info){

    cout << "******************************" << endl;

    cout << "Ur Name Is : " << Info.FirstName << " " << Info.LastName << endl;
    cout << "Ur Age Is : " << Info.Age << endl;
    cout << "Ur Phone Number Is : " << Info.Phone << endl;

    cout << "******************************" << endl;

}

void ReadPersonInfo(strInfo Persons[100], int &NumberOfPersons){

    cout << "How Many Persons Do U Want To Enter ? " << endl;
    cin >> NumberOfPersons;

    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Please Enter Person's " << i + 1 << " Info : " << endl;
        ReadInfo(Persons[i]);
    } 
}

void PrintPersonsInfo(strInfo Persons[100], int NumberOfPersons){
    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Person's " << i + 1 << " Info : " << endl;
        PrintInfo(Persons[i]);
    }
    
}

int main (){

    strInfo Persons[100];
    int NumberOfPersons = 0;

    ReadPersonInfo(Persons, NumberOfPersons);
    PrintPersonsInfo(Persons, NumberOfPersons);

    return 0;
}
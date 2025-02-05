#include <iostream>
#include <string>

using namespace std;

struct PersonInfo{
    string FullName;
    int Age;
    string City;
    string Country;
    string MonthlySalary;
    string YearlySalary;
    char Gender;
    bool Married;
};

void ReadInfo(PersonInfo &Info_Person){
    cout << "Enter Ur FullName: " << endl;
    getline(cin, Info_Person.FullName);
    cout << "Enter Ur Age: " << endl;
    cin >> Info_Person.Age;
    cout << "Enter Ur City: " << endl;
    cin >> Info_Person.City;
    cout << "Enter Ur Country: " << endl;
    cin >> Info_Person.Country;
    cout << "Enter Ur Month Salary: " << endl;
    cin >> Info_Person.MonthlySalary;
    cout << "Enter Ur Year Salary: " << endl;
    cin >> Info_Person.YearlySalary;
    cout << "Enter Ur Gender M or F: " << endl;
    cin >> Info_Person.Gender;
    cout << "Are U Married ? 1 or 0: " << endl;
    cin >> Info_Person.Married;

}

void PrintInfo(PersonInfo Info){
    cout << "******************************" << endl;
    cout << "Ur Full Name is : " << Info.FullName << endl;
    cout << "Ur Age : " << Info.Age << endl;
    cout << "Ur City : " << Info.City << endl;
    cout << "Ur Country : " << Info.Country << endl;
    cout << "Ur Month Salary : " << Info.MonthlySalary << endl;
    cout << "Ur Year Salary : " << Info.YearlySalary << endl;
    cout << "Ur Gender : " << Info.Gender << endl;
    cout << "Ur " << Info.Married << endl;
    cout << "******************************" << endl;
}

int main (){

    PersonInfo Person1;
    ReadInfo(Person1);
    PrintInfo(Person1);

    return 0;
}
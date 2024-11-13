#include <iostream>

using namespace std;

int main (){

    int Age;
    float monthlySalary;
    float yearlySalary;
    string name;
    string city;
    string country;
    char Gender;
    string RUMarried;

    cout << "Enter Ur name :" << endl;
    cin >> name;
    cout << "Enter Ur Month Salary :" << endl;
    cin >> monthlySalary;
    cout << "Enter Ur Yearly Salary :" << endl;
    cin >> yearlySalary;
    cout << "Enter Ur City :" << endl;
    cin >> city;
    cout << "Enter Ur Country :" << endl;
    cin >> country;
    cout << "Enter Ur Gender M or F :" << endl;
    cin >> Gender;
    cout << "Are U Married ? :" << endl;
    cin >> RUMarried;

    cout << "*****************" << endl;
    cout << "Name : " << name << endl;
    cout << "Age : " << Age << endl;
    cout << "City : " << city << endl;
    cout << "Coutry : " << country << endl;
    cout << "Monthly Salary : " << monthlySalary << endl;
    cout << "Yearly Salary : " << yearlySalary << endl;
    cout << "Gender : " << Gender <<endl;
    cout << "Married : " << RUMarried << endl;
    cout << "******************" << endl;
    return 0;
}
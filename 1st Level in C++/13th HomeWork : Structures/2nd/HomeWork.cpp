#include <iostream>

using namespace std;

struct MoreInfoAdress
{
    string Adress;
    string NumberContact;

};

struct SalaryInfo
{
    float monthlySalary;
    float yearlySalary;

};


struct OwnerInfo
{
    int Age;
    string name;
    string city;
    string country;
    char Gender;
    string RUMarried;
    SalaryInfo Salary;

};



int main (){

    OwnerInfo OwnerInfo;
    MoreInfoAdress InfoAdress;

    cout << "Enter Ur name :" << endl;
    cin >> OwnerInfo.name;
    cout << "Enter Ur age :" << endl;
    cin >> OwnerInfo.Age;
    cout << "Enter Ur Month Salary :" << endl;
    cin >> OwnerInfo.Salary.monthlySalary;
    cout << "Enter Ur Yearly Salary :" << endl;
    cin >> OwnerInfo.Salary.yearlySalary;
    cout << "Enter Ur City :" << endl;
    cin >> OwnerInfo.city;
    cout << "Enter Ur Country :" << endl;
    cin >> OwnerInfo.country;
    cout << "Enter Ur Gender M or F :" << endl;
    cin >> OwnerInfo.Gender;
    cout << "Are U Married ? :" << endl;
    cin >> OwnerInfo.RUMarried;
    cout << "Enter Ur Adress : " << endl;
    cin >> InfoAdress.Adress;
    cout << "Enter Ur Number Contact :" << endl;
    cin >> InfoAdress.NumberContact;

    cout << "*****************" << endl;
    cout << "Name : " << OwnerInfo.name << endl;
    cout << "Age : " << OwnerInfo.Age << endl;
    cout << "City : " << OwnerInfo.city << endl;
    cout << "Coutry : " << OwnerInfo.country << endl;
    cout << "Monthly Salary : " << OwnerInfo.Salary.monthlySalary << endl;
    cout << "Yearly Salary : " << OwnerInfo.Salary.yearlySalary << endl;
    cout << "Gender : " << OwnerInfo.Gender <<endl;
    cout << "Married : " << OwnerInfo.RUMarried << endl;
    cout << "Ur Adress is : " << InfoAdress.Adress << endl; 
    cout << "Ur Cotact is : " << InfoAdress.NumberContact << endl;
    cout << "******************" << endl;
    return 0;
}
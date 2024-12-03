#include <iostream>
#include <string> // Ensure this is included for string handling

using namespace std;

struct MoreInfoAdress {
    string Adress;
    string NumberContact;
};

struct SalaryInfo {
    float monthlySalary;
    float yearlySalary;
};

struct OwnerInfo {
    int Age;
    string name;
    string city;
    string country;
    SalaryInfo Salary;
};

enum MarriedStatus { Married, Single };
enum Gender { Male, Female };

int main() {
    OwnerInfo OwnerInfo;
    MoreInfoAdress InfoAdress;
    MarriedStatus MyStatusMarried;
    Gender MyGender;

    cout << "Enter your name:" << endl;
    getline(cin, OwnerInfo.name); // Use getline for full input
    cout << "Enter your age:" << endl;
    cin >> OwnerInfo.Age;
    cout << "Enter your monthly salary:" << endl;
    cin >> OwnerInfo.Salary.monthlySalary;
    cout << "Enter your yearly salary:" << endl;
    cin >> OwnerInfo.Salary.yearlySalary;
    cin.ignore(); // Clear newline character before getline
    cout << "Enter your city:" << endl;
    getline(cin, OwnerInfo.city);
    cout << "Enter your country:" << endl;
    getline(cin, OwnerInfo.country);
    cout << "Enter your address:" << endl;
    getline(cin, InfoAdress.Adress);
    cout << "Enter your contact number:" << endl;
    getline(cin, InfoAdress.NumberContact);

    int genderChoice, statusChoice;
    cout << "Enter your gender (0 for Male, 1 for Female):" << endl;
    cin >> genderChoice;
    MyGender = static_cast<Gender>(genderChoice);

    cout << "Enter your marital status (0 for Married, 1 for Single):" << endl;
    cin >> statusChoice;
    MyStatusMarried = static_cast<MarriedStatus>(statusChoice);

    cout << "*****************" << endl;
    cout << "Name: " << OwnerInfo.name << endl;
    cout << "Age: " << OwnerInfo.Age << endl;
    cout << "City: " << OwnerInfo.city << endl;
    cout << "Country: " << OwnerInfo.country << endl;
    cout << "Monthly Salary: " << OwnerInfo.Salary.monthlySalary << endl;
    cout << "Yearly Salary: " << OwnerInfo.Salary.yearlySalary << endl;
    cout << "Gender: " << (MyGender == Male ? "Male" : "Female") << endl;
    cout << "Marital Status: " << (MyStatusMarried == Married ? "Married" : "Single") << endl;
    cout << "Address: " << InfoAdress.Adress << endl;
    cout << "Contact: " << InfoAdress.NumberContact << endl;
    cout << "******************" << endl;

    return 0;
}

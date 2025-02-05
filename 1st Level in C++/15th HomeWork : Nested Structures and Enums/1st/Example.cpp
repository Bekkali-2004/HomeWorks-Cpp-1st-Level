#include <iostream>

using namespace std;

enum enColor {Red, Yellow, Black, White};
enum enGendor {Male, Female};
enum enMarriedStatus {Single, Married};
struct stAdress
{
    string StreetName;
    string BuildingNo;
    string PoBox;
    string ZipCode;

};

struct stContactInfo
{
    string Phone;
    string Email;
    stAdress Adress;

};

struct stPerson
{
    string FirstName;
    string LastName;

    stContactInfo Contact;

    enMarriedStatus MarriedStatus;
    enColor Color;
    enGendor Gender;
};


int main (){

    stPerson Person;

    Person.FirstName = "Mohamed";
    Person.LastName = "Bekkali";

    Person.Contact.Phone = "0629902698";
    Person.Contact.Email = "modistotube2005@gmail.com";

    Person.Contact.Adress.StreetName = "16R.N";
    Person.Contact.Adress.BuildingNo = "Unknown";
    Person.Contact.Adress.PoBox = "Unknown";
    Person.Contact.Adress.ZipCode = "91000";
    
    Person.Color = enColor::Black;
    Person.Gender = enGendor::Male;
    Person.MarriedStatus = enMarriedStatus::Single;

    cout << Person.FirstName << endl;
    cout << Person.LastName << endl;
    
    cout << Person.Contact.Phone << endl;
    cout << Person.Contact.Email << endl;

    cout << Person.Contact.Adress.StreetName << endl;
    cout << Person.Contact.Adress.BuildingNo << endl;
    cout << Person.Contact.Adress.PoBox << endl;
    cout << Person.Contact.Adress.ZipCode << endl;

    cout << Person.Color << endl;
    cout << Person.Gender << endl;
    cout << Person.MarriedStatus << endl;


    return 0;
}
// look I Can't Give u the Subject cuz is very hard on u if u want search it on google and youtube for learn it and good luck
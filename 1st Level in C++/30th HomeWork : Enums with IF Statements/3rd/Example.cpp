#include <iostream>

using namespace std;

enum enContryChoice { Morocco = 1, Lebnan = 2, Tunisia = 3, Libya = 4, Egypt = 5, Other = 6 };

int main (){

    cout << "Please Enter Your Country Choice: \n";
    cout << "1- Morocco " << endl;
    cout << "2- Lebnan " << endl;
    cout << "3- Tunisia " << endl;
    cout << "4- Libya " << endl;
    cout << "5- Egypt " << endl;
    cout << "6- Other " << endl;
    cout << "********************" << endl;
    cout << "Your Choice is: ";

    int C;
    enContryChoice CountryChoice;

    cin >> C;
    CountryChoice = (enContryChoice)C;

    switch (CountryChoice)
    {
    case enContryChoice::Morocco:

        cout << "Your Country is: Morocco" << endl;
        break;
    
    case enContryChoice::Lebnan:
    
        cout << "Your Country is: Lebnan" << endl;
        break;

    case enContryChoice::Tunisia:

        cout << "Your Country is: Tunisia" << endl;
        break;

    case enContryChoice::Libya:
    
        cout << "Your Country is: Libya" << endl;
        break;

    case enContryChoice::Egypt:

        cout << "Your Country is: Egypt" << endl;
        break;

    case enContryChoice::Other:

        cout << "Your Country is: Other" << endl;
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }

    return 0;
}
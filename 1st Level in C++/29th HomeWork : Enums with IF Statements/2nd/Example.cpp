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


    if (CountryChoice == enContryChoice::Morocco){
        cout << "Your Country is: Morocco" << endl;
    }
    else if (CountryChoice == enContryChoice::Lebnan){
        cout << "Your Country is: Lebnan" << endl;
    }
    else if (CountryChoice == enContryChoice::Tunisia){
        cout << "Your Country is: Tunisia" << endl;
    }
    else if (CountryChoice == enContryChoice::Libya){
        cout << "Your Country is: Libya" << endl;
    }
    else if (CountryChoice == enContryChoice::Egypt){
        cout << "Your Country is: Egypt" << endl;
    }
    else if (CountryChoice == enContryChoice::Other){
        cout << "Your Country is: Other" << endl;
    }
    else{
        cout << "Invalid Choice" << endl;
    }

    return 0;
}
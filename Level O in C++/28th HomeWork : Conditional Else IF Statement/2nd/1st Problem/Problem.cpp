#include <iostream>

using namespace std;

int main (){

    int Grade;

    cout << "Enter your grade From A To F : " << endl;
    cin >> Grade;

    if (Grade == 100 || Grade >= 90){
        cout << "Your Grade is A" << endl;
    }
    else if (Grade == 89 || Grade >= 80){
        cout << "Your Grade is B" << endl;
    }
    else if (Grade == 79 || Grade >= 70){
        cout << "Your Grade is C" << endl;
    }
    else if (Grade == 69 || Grade >= 60){
        cout << "Your Grade is D" << endl;
    }
    else if (Grade == 59 || Grade >= 50){
        cout << "Your Grade is E" << endl;
    }
    else {
        cout << "Your Grade is F" << endl;
    }
    

    return 0;
}
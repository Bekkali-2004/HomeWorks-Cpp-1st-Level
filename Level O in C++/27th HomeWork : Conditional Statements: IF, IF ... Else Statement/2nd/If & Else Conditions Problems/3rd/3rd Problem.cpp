#include <iostream>

using namespace std;

int main (){

    float Mark1 , Mark2, Mark3;

    cout << "Enter The 3 Mark For Ur Exam : " << endl;
    cout << "1st Mark : ";
    cin >> Mark1;
    cout << "2nd Mark : ";
    cin >> Mark2;
    cout << "3rd Mark : ";
    cin >> Mark3;

    float Result = (Mark1 + Mark2 + Mark3) / 3;

    if (Result >= 50)
    {
        cout << "U Pass !" << endl;
    }
    else {
        cout << "U Failed !" << endl;
    }
    

    return 0;
}
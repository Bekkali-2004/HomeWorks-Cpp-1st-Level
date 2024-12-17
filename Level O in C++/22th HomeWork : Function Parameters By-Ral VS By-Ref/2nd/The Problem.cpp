#include <iostream>

using namespace std;

void Swap(int &num1, int &num2){

    int Temp;

    cout << "Before Swap : " << endl;
    cout << "1st Num : " << num1 << endl;
    cout << "2nd Num : " << num2 << endl;

    cout << "\n********************************" << endl;

    Temp = num1;
    num1 = num2;
    num2 = Temp;

    cout << "After Swap : " << endl;
    cout << "1st Num : " << num1 << endl;
    cout << "2nd Num : " << num2 << endl;
}

int main (){

    int num1, num2;

    cout << "Enter The Number For Swap A : " << endl;
    cin >> num1;

    cout << "Enter The Number For Swap A : " << endl;
    cin >> num2;

    cout << "\n**********************************" << endl;
    
    Swap(num1, num2);
    
    return 0;
}
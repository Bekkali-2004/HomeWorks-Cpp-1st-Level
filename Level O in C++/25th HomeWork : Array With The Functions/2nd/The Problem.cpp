#include <iostream>

using namespace std;

void InfoGrade(float x[3]){
    cout << "Please Enter The 1st Grade : " << endl;
    cin >> x[0];
    cout << "Please Enter The 2nd Grade : " << endl;
    cin >> x[1];
    cout << "Please Enter The 3rd Grade : " << endl;
    cin >> x[2];
}

void PrintGrade(float x[3]){
    int avrange = (x[0] + x[1] + x[2]) / 3;
    cout << "----------------------------------------" << endl << endl;
    cout << "The Avrange The Ur Grade Is : " << avrange << endl;
}

int main (){

    float x[3];
    InfoGrade(x);
    PrintGrade(x);

    return 0;
}
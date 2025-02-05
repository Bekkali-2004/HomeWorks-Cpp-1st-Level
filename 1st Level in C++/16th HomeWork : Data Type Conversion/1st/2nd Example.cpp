/* String to int, float, double */

#include <iostream> // cout
#include <string>   // string

using namespace std;

int main (){

    string str = "1.24552";

    int int_num = stoi(str); // string -> int (without double numbers)

    float num_float = stof(str); // string -> float 

    double num_double = stod(str); // string -> double 

    cout << int_num << endl;
    cout << num_float << endl;
    cout << num_double << endl;

    return 0;
}
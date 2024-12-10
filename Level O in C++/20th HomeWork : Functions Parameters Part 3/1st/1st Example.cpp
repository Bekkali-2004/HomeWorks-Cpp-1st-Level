/* Function Way */

#include <iostream>
#include <string>

using namespace std;

int Numbers(int a, int b) { // parameters in the function

    return a + b;

}

int main() {

    //int Num1, Num2;
    //cin >> Num1;
    //cin >> Num2;
    cout << Numbers(10 , 20) << endl;      // Output the sum of the numbers
    //cout << Numbers(Num1 , Num2) << endl; // Output the sum of the numbers
    return 0;
}

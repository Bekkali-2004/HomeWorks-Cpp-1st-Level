/* Function Way */

#include <iostream>
#include <string>

using namespace std;

int Numbers() {
    int a, b;
    cout << "Enter the 1st number: " << endl;
    cin >> a;
    cout << "Enter the 2nd number: " << endl;
    cin >> b; 
    cout << "\n-----------------------------------------" << endl;
    return a + b;
}

int main() {

    cout << Numbers() << endl;      // Output the sum of the numbers
    
    return 0;
}

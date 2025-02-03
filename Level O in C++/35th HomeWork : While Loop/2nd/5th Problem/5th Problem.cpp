#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check for non-negative input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    int factorial = 1; // Initialize factorial to 1
    int i = 1;         // Start from 1

    // Calculate factorial using a while loop
    while (i <= n) {
        factorial *= i; // Multiply factorial by i
        i++;            // Increment i
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}
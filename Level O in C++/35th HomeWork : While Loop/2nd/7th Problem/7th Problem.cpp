#include <iostream>
using namespace std;

int main() {
    int sum = 0; // Initialize sum to 0
    int num;     // Variable to store user input

    while (true) { // Infinite loop (exits when 99 is entered)
        cout << "Enter a number: ";
        cin >> num;

        if (num == 99) {
            break; // Exit loop if user enters 99
        }

        sum += num; // Add the number to the sum
    }

    // Print the final sum
    cout << "Sum = " << sum << endl;

    return 0;
}
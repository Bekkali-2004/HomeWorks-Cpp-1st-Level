#include <iostream>
using namespace std;

int main() {
    const int CORRECT_PIN = 1234;  // Predefined correct PIN
    int enteredPin;
    int attemptsRemaining = 3;     // Number of allowed attempts

    cout << "Welcome to ATM Service\n";

    while (attemptsRemaining > 0) {
        cout << "\nEnter your PIN (Attempts left: " << attemptsRemaining << "): ";
        cin >> enteredPin;

        if (enteredPin == CORRECT_PIN) {
            cout << "\nPIN accepted! Access granted.\n";
            return 0;  // Exit program on successful entry
        } else {
            attemptsRemaining--;
            if (attemptsRemaining > 0) {
                cout << "Incorrect PIN. Please try again.\n";
            } else {
                cout << "Incorrect PIN. No attempts remaining.\n";
                cout << "Your account has been blocked. Please contact your bank.\n";
            }
        }
    }

    return 0;
}
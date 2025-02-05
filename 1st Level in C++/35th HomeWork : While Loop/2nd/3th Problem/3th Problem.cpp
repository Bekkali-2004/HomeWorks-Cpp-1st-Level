#include <iostream>
using namespace std;

int main() {
    int i = 1; // Start with the first odd number
    int max = 10; // Define the upper limit

    while (i <= max) {
        cout << i << endl; // Print the current odd number
        i += 2; // Increment by 2 to get the next odd number
    }

    return 0;
}
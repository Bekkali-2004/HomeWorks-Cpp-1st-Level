#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        int num;
        cout << "Enter The Numbers For Sum But Under 50 : " << endl;
        cin >> num;
        
        if (num >= 50) {
            cout << "The Number is Grater than 50" << endl;
            continue;  // Skip numbers 50 or above
        }
        
        sum += num;  // Add numbers below 50
    }
    
    cout << "Result : " << sum << endl;
    return 0;
}
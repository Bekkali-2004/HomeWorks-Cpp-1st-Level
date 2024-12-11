#include <iostream>
#include <cmath>

using namespace std;

void IsoscelesAreaTraingle(){
    int A = 20, B = 10;
    const double PI = 3.14;
    double Area = PI * (B * B) / 4 * ((2 * A - B) / (2 * A + B));
    cout << Area << endl;
}

int main() {

    IsoscelesAreaTraingle();

    return 0;
}
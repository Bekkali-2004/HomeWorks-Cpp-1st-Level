#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A = 5;
    double B = 6;
    double C = 7;
    const double PI = 3.14159;

    // Semi-perimeter
    double P = (A + B + C) / 2;

    // Area of the triangle using Heron's formula
    double K = sqrt(P * (P - A) * (P - B) * (P - C));

    // Radius of the circumcircle
    double R = (A * B * C) / (4 * K);

    // Area of the circumcircle
    double area = PI * R * R;

    cout << "The Area of Circle Described Around an Arbitrary Triangle is: " << area << endl;

    return 0;
}

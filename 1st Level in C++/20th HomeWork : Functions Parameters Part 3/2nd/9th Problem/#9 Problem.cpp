#include <iostream>
#include <cmath>

using namespace std;

double CircumferenceArea(int L){

    const double PI = 3.14;
    double Area = (( L * L ) / (4 * PI));
    return Area;

}

int main (){

    cout << CircumferenceArea(20) << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int RectangleArea(int A, int B){ // Function

    int Area;
    Area = A * B;
    return Area;

}

int main (){

    cout << RectangleArea(10 , 20) << endl;

    return 0;
}
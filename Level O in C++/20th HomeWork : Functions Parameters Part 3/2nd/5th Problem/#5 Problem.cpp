#include <iostream>
#include <cmath>

using namespace std;

void AreaRectangle(int A, int D){

    int Area;
    Area = A * sqrt((A * A) - (D * D));
    cout << Area << endl;

}

int main (){

    AreaRectangle(5, 40);

    return 0;
}
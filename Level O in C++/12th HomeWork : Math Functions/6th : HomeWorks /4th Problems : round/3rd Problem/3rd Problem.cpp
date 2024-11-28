#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double M;
    int Power;

    cout << "Enter The Number : " << endl;
    cin >> M;
    cout << "Enter The Power Of Number : " << endl;
    cin >> Power;

    double result = round(pow(M , Power));

    cout << "The Result " << M << " Of Power " << Power << " is : " << result << endl;

    return 0;
}
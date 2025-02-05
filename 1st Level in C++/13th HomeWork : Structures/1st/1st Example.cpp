#include <iostream>

using namespace std;

struct Car // That is for struct related inside
{
    string Brand;
    string Model;
    int Year; 
};

int main (){

    Car MyCar1;

    MyCar1.Year = 25;
    MyCar1.Brand = "BMW";
    MyCar1.Model = "1997";

    cout << MyCar1.Brand  /* -> BMW */ << " & " << MyCar1.Model /* -> 1997 */ << " & " << MyCar1.Year /* -> 25 */ << endl; // print it on the screen 

    return 0;
}
#include <iostream>

using namespace std;

enum Colors { Red , Yellow , Black , White};

int main (){

    Colors MyColor;

    MyColor = Colors::Yellow;

    cout << "The Color is " << MyColor << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {

    float number = 55.23;

    cout << "Float -> String : " << to_string(number) << endl;
    cout << "Float -> integer : " << int(number) << endl;

    return 0;
}
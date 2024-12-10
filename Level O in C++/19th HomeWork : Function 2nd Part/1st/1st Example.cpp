/* Function Vs Precedure */

#include <iostream>
#include <string>

using namespace std;

void MyFunc(){
    cout << "Hello World" << endl; // Precedure
}

string StrFunc(){
    return "Hello World"; // Function
}

int IntFunc(){
    return 10; // Function
}

int main (){

    MyFunc(); // Hello World
    cout << StrFunc() << endl; // Hello World
    cout << IntFunc() << endl; // 10

    return 0;
}
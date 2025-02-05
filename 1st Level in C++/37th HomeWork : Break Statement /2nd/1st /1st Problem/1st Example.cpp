#include <iostream>

using namespace std;

int main (){
    // Condition To Break The Loop

    for (int i = 0; i < 10; i++){
        if (i == 5){
            break;
        }
        cout << i << endl;
    }
    

    return 0;
}
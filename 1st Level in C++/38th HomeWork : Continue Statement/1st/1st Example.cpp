#include <iostream>

using namespace std;

int main (){

    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // ignore 5
        }
        cout << i << endl;
    }
    

    return 0;
}
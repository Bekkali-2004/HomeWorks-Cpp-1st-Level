#include <iostream>

using namespace std;

int main (){

    int count = 10;

    for (int i = 0; i <= count; i++)
    {
        cout << "I = " << i << endl;

        for (int j = 1; j <= count; j++)
        {
            cout << i <<  " * " << j << " = " << i * j << endl;
        }

        cout << "*********************" << endl;
        
    }
    

    return 0;
}
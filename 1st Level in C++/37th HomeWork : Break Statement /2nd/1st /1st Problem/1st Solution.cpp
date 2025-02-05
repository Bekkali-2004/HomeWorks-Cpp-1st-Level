#include <iostream>

using namespace std;

int main (){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int SearchFor = 20;

    for (int i = 0; i <= 10; i++)
    {
        cout << "We are at iteration number " << i + 1 << endl;
        if (SearchFor == arr[i])
        {
            cout << endl <<"We found the number " << SearchFor << " at index " << i << endl;
            break;
        }
        
    }
    

    return 0;
}
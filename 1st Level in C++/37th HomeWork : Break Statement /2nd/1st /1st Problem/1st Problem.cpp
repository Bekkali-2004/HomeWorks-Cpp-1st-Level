/* My Solution*/

#include <iostream>

using namespace std;

int main (){

    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int SearchFor = 20;

    for (int i = 0; i <= 10; i++){
        cout << "We are at iteration number " << i + 1 << endl;

        if(SearchFor == arr[i]){
            cout << endl << "We found the number in The Position : " << i << endl;
            break;
        }
    }
    

    return 0;
}
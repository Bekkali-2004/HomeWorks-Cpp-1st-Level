#include <iostream>

using namespace std;

string MarkNotes(){
    int Mark;

    cout << "Enter Your Mark : " << endl;
    cin >> Mark;

    if (Mark >= 50)
    {
        return "U Pass !";
    }
    else {
       return "U Failed !";
    }
}

int main (){


    cout << MarkNotes() << endl;

    return 0;
}
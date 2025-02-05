#include <iostream>

using namespace std;

struct MarkDataType {
    float Mark1 , Mark2, Mark3;
};

void ReadMark(){

    MarkDataType MarkAverange[3];
    cout << "Enter The 3 Mark For Ur Exam : " << endl;
    cout << "1st Mark : ";
    cin >> MarkAverange[0].Mark1;
    cout << "2nd Mark : ";
    cin >> MarkAverange[1].Mark2;
    cout << "3rd Mark : ";
    cin >> MarkAverange[2].Mark3;
}

void AverangeMark(){

    MarkDataType MarkAverange[3];
    
    float Result = (MarkAverange[0].Mark1 + MarkAverange[1].Mark2 + MarkAverange[2].Mark3) / 3;

    if (Result >= 50)
    {
        cout << "U Pass !" << endl;
        cout << "Ur Averange Mark Is : " << Result << endl;
    }
    else {
        cout << "U Failed !" << endl;
        cout << "Ur Averange Mark Is : " << Result << endl;
    }

}

int main (){

    MarkDataType Mark;
    ReadMark();
    AverangeMark();

    return 0;
}
#include <iostream> 

using namespace std;

void ReadArrayData(int Arr1[100], int &length){

    cout << "How Many Numbers do you want to enter ? " << endl;
    cin >> length;

    for (int i = 0; i <= length - 1; i++){
        cout << "Please Enter The Number " << i + 1 << endl;
        cin >> Arr1[i];
    }

}

void PrintArrayData(int Arr1[100], int length){

    for (int i = 0; i <= length; i++)
    {
        cout << "Number [" << i + 1 << "] = " << Arr1[i] << endl;
    }  

}

int CalculateArraySum(int Arr1[100], int length){
    
    int Sum = 0;

    for (int i = 0; i < length - 1; i++)
    {
        Sum += Arr1[i];
    }
    
    return Sum;
}

float CalculateArrayAvg(int Arr1[100], int length){

    return (float)CalculateArraySum(Arr1, length) / length;

}

int main (){

    int Arr1[100], length = 0;
    ReadArrayData(Arr1, length);
    PrintArrayData(Arr1, length);

    cout << endl << "******************************" << endl;
    cout << "Sum = " << CalculateArraySum(Arr1, length) << endl;
    cout << "Avg = " << CalculateArrayAvg(Arr1, length) << endl;

    return 0;
}
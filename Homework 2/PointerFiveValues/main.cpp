#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int* x1 = &arr[0];
    int* x2 = &arr[1];
    int* x3 = &arr[2];
    int* x4 = &arr[3];
    int* x5 = &arr[4];

    cout<<"Enter 5 numbers: ";
    cin>>*x1>> *x2 >>*x3 >>*x4 >> *x5;

    cout<<"Entered numbers are ";
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";


    }



    return 0;
}

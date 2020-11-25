#include <iostream>

using namespace std;

int* maxval(int a[],int n){
    int* maxv  = &a[0];
    for (int i=1;i<n; i++){
        if (*maxv<a[i]){maxv=&a[i];}
    }
    return maxv;
}


int main()
{
    int n;
    cout<<"Enter the size of the set: ";
    cin>>n;

    int arr[n],i;
    for (i=0; i<n; i++){
        cout<<"Input number "<<i+1<<": ";
        cin>>arr[i];
    }
    int* maxv = maxval(arr,n);
    cout<<"Max value: "<<*maxv<<endl;


    return 0;
}

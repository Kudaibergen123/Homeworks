#include <iostream>

using namespace std;

int* selectionSort(int* a, int n) {
   int  minval, temp;

   for (int i = 0; i < n-1; i++) {
      minval = i;
      for (int j = i + 1; j < n; j++)
      if (a[j] < a[minval])
      minval = j;
      temp = a[i];
      a[i] = a[minval];
      a[minval] = temp;
   }
   return a;
}
int main()
{
    int n = 10;
    int arr[n],i;
    for (i=0; i<10; i++){
        cout<<"Input number "<<i+1<<": ";
        cin>>arr[i];

    }
    int * another_arr = selectionSort(arr, 10);

    for (int i=0; i<n; i++){
        cout<<another_arr[i]<<" ";
    }
    return 0;
}

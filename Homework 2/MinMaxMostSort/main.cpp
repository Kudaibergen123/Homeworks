#include <iostream>

using namespace std;
void selectionSort(int a[]) {
   int  minval, temp;
   for (int i = 0; i < 9; i++) {
      minval = i;
      for (int j = i + 1; j < 10; j++)
      if (a[j] < a[minval])
      minval = j;
      temp = a[i];
      a[i] = a[minval];
      a[minval] = temp;
   }
}
int most_val(int a[]){
    int coun = 0,  counmax = 0, mostval;
    for (int i = 1; i < 9; i++) {
            if (a[i]==a[i-1]){
                    coun++;
                    if (counmax<coun){
                        counmax=coun;
                        mostval  = a[i];
                    }
            }
            else {coun = 0;}
    }
    return mostval;

}


int main()
{
    int arr[10],i;
    for (i=0; i<10; i++){
        cout<<"Input number "<<i+1<<": ";
        cin>>arr[i];

    }
    cout<<"\n";
    selectionSort(arr);
    cout << "The min value is "<<arr[0]<<endl;
    cout << "The max value is "<<arr[9]<<endl;
    cout << "The most frequent value is "<<most_val(arr)<<endl<<endl;
    cout << "The sorted values are ";
    for (i=0; i<10; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}

#include <iostream>

using namespace std;



int main()
{
    cout<<"Enter n value: ";
    int n;
    cin>>n;
    int a[n][n];
    int i, j;



    for (i = 0; i <n ; i++){
        for (j = 0; j < n; j++  ){
                a[i][j] = 0;
        }
        a[i][0] = 1;

        for (j = 1; j < i; j++  ){
            a[i][j] = a[i-1][j-1] +a[i-1][j] ;

        }
        a[i][i] = 1;
    }



    for (i = 0; i < n; ++i)
        {
            for (j = 0; j < i+1; ++j)
            {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }

    return 0;
}

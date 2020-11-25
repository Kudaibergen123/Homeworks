#include <iostream>

using namespace std;

int add(int x, int y){return x+y;};
int subtract (int x, int y){return x-y;};
int multiply(int x, int y){return x*y;};
int divide (int x, int y){return x/y;};
int _modulus (int x, int y){return x%y;};

int main()
{
    char cont = 'y';
    int x,y, oper, res;

    while (cont == 'y'){
    cout<<" Menu \n 1. Add \n 2. Subtract\n 3. Multiply \n 4. Divide\n 5. Modulus\n Enter your choice: ";
    cin>>oper;
    cout <<"Enter your two numbers: ";
    cin>>x>>y;
    switch(oper){
    case 1:
        res = add(x,y);
        break;

    case 2:
        res = subtract(x,y);
        break;

    case 3:
        res = multiply(x,y);
        break;

    case 4:
        res = divide(x,y);
        break;

    case 5:
        res = _modulus(x,y);
        break;

    }

    cout<<"Result: "<<res<<endl;
    cout<<"Continue: ";
    cin>>cont;
    cout<<"\n\n";
    }
    return 0;
}

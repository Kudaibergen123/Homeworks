#include <iostream>

using namespace std;
class classs
{
private:
    int x;
    int y;
public:
    classs (int a, int b){
    x = a;
    y = b;
    }
    int addit (){return x+y;};
};
int main()
{
    int l;
    int w;
    cout<<"Enter two numbers: ";
    cin>>l>>w;

    classs r(l, w);

    cout<<"Sum is "<<r.addit();

    return 0;
}

#include <iostream>

using namespace std;
class rect
{
private:
    int x;
    int y;
public:
    int area(int a, int b){
    x = a;
    y = b;
    return x*y;
    }
};
int main()
{
    int l;
    int w;
    cout<<"Enter length and width: ";
    cin>>l>>w;

    rect r;

    cout<<"Area of rectangle is "<<r.area(l,w);

    return 0;
}

#include <iostream>

using namespace std;
class comsum
{
private:
    double r1,i1;
    double r2,i2;
public:
    comsum (double x1, double x2, double x3, double x4){
    r1 = x1;
    i1 = x2;
    r2 = x3;
    i2 = x4;
    }
    double real (){return r1+r2;}
    double im (){return i1+i2;}
};
int main()
{
    double real1, im1;
    double real2, im2;
    cout<<"Enter real and imaginary values of first complex number: ";
    cin>>real1>>im1;
    cout<<"Enter real and imaginary values of second complex number: ";
    cin>>real2>>im2;
    comsum r(real1, im1,real2, im2);
    cout<<"Result of summation: "<<r.real()<<" + "<<r.im()<<"i\n";
    return 0;
}

// WAP to find divisor and quotient of two numbers
#include <iostream>

using namespace std;

int main()
{
    int a, b, r;
    float d;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    d=float(a)/float(b);
    r=a%b;
    cout<<"Divisor of first number divided by second is: "<<d<<endl;
    cout<<"Remainder of first number divided by second is: "<<r<<endl;
    return 0;
}

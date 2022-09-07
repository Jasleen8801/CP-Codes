// question 8- swapping two numbers using bitwise operator
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Before Swapping: "<<endl;
    cin>>a>>b;
    a ^= b;
    b ^= a;
    a ^= b;
    cout<<"After swapping: "<<a<<" "<<b;
    return 0;
}


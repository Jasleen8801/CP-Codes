
#include <iostream>

using namespace std;

void swap_by_value(int m, int n){
    int temp;
    temp=m;
    m=n;
    n=temp;
    cout<<m<<" "<<n;
}

void swap_by_reference(int *m, int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
    cout<<*m<<" "<<*n;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers to swap: "<<endl;
    cin>>a>>b;
    cout<<"After swapping: "<<endl;
    // swap_by_value(a, b);
    swap_by_reference(&a, &b);
    return 0;
}


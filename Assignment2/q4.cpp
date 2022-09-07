// question 3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of terms you want: ";
    cin>>n;
    int a=0, b=1, c=0, count ;
    // for(int i=1; i<=n; i++){
    //     cout<<c<<" ";
    //     a=b;
    //     b=c;
    //     c=a+b;
    // }
    // n = n-2;
    while(n){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
        n = n - 1;
    }
    return 0;
}


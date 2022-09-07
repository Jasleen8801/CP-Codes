
#include <iostream>

using namespace std;

int power(int m, int n){
    int num=1;
    for(int i=1; i<=n; i++)
        num *= m;
    return num;
}

int main()
{
    int a, b;
    cout<<"Enter a, b: "<<endl;
    cin>>a>>b;
    cout<<"Result: "<<power(a, b);
    return 0;
}


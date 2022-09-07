// question 10
#include <iostream>
using namespace std;

int main()
{
    for(int i=10; i>0; i--)
        cout<<i<<" ";
    cout<<"\n";
    for(int i=1; i<=10; i++)
        cout<<2*i<<" ";
    cout<<"\n";
    for(int i=0; i<4; i++){
        float a = 10;
        a = a + i * 3.5;
        cout<<a<<" ";
    }
    return 0;
}


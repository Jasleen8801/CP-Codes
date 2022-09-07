// question 3
#include <iostream>
using namespace std;

int main()
{
    int n, fact=1;
    cout<<"Enter the number";
    cin>>n;
    // for(int i=1; i<=n; i++)
    //     fact *= i;
    int temp=n;
    while(temp>0){
        fact *= temp;
        temp--;
    }
    cout<<"Factorial is "<<fact;
    return 0;
}


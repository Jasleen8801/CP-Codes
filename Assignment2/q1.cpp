// question 10
#include <iostream>
using namespace std;

int main()
{
    int t;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter any number: ";
        cin>>n;
        if(n%2==0)
            cout<<"Even"<<endl;
        else
            cout<<"Odd"<<endl;
    }
    return 0;
}


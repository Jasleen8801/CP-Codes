// question 5- temp from celsius to fahrenhiet
#include <iostream>
using namespace std;

int main()
{
    int t;
    cout<<"No of test cases: ";
    cin>>t;
    while(t--){
        float c,f;
        cout<<"Enter temperature in celsius: ";
        cin>>c;
        f = 9*c/5+32;
        cout<<"Temp in fahrenhiet is "<<f<<endl;
    }
    return 0;
}


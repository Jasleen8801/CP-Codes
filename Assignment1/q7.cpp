// question 7- using += and -=
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    m+=n;
    cout<<"After using m+=n, m = "<<m<<endl;
    n-=m;
    cout<<"After using n+=m, n = "<<n<<endl;
}


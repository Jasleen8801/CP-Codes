
#include <iostream>

using namespace std;

int multiply(int a, int b){
    return a*b;
}

int main()
{
    int m,n;
    cout<<"Enter numbers to be multiplied: "<<endl;
    cin>>m>>n;
    cout<<"Product is: "<<multiply(m, n);

    return 0;
}


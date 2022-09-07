// question 4 - print prime numbers from 1 to 300
#include <iostream>
using namespace std;

int main()
{
    int count=0;
    for(int n=2; n<=300; n++){
        int test=0;
        for(int i=2; i<n; i++){
            if(n%i == 0){
                test=1;
                break;
            }
        }
        if(test==0){
            cout<<n<<" ";
            count++;
        }
    }
    cout<<"\n"<<count;
    return 0;
}



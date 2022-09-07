#include <iostream>
using namespace std;

int main()
{
    int n, *ptr, sum=0;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ptr = arr;
    for(int i=0; i<n; i++){
        sum += *ptr;
        ptr++;
    }
    cout<<"Sum of array elements: "<<sum<<endl;
    return 0;
}


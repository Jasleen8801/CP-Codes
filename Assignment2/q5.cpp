#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=1; i<n; i++){
        if(arr[0]<arr[i])
            arr[0] = arr[i];
    }
    cout<<"Largest element: "<<arr[0]<<endl;
    return 0;
}


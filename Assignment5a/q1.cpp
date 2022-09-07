#include <iostream>
using namespace std;

class mean{
    int n;
    int *arr = new int [n];
  public:
    void getdata();
    friend float avg(mean obj);
};

void mean::getdata(){
    cout<<"Enter no of elements you wish to enter: ";
    cin>>n;
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

float avg(mean obj){
    float sum=0;
    for(int i=0; i<obj.n; i++)
        sum += obj.arr[i];
    float avg_n = sum/obj.n;
    return avg_n;
}

int main()
{
    mean x;
    x.getdata();
    cout<<"The required mean is: "<< avg(x);

    return 0;
}


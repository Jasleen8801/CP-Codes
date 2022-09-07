#include<iostream>
using namespace std;

class mean{
  private:
    int a;
    int b;
  public:
    void getdata(){
        cout<<"Enter first number : ";
        cin>>a;
        cout<<"\nEnter second number : ";
        cin>>b;
    }
    friend void greatest(mean obj);
};

void greatest(mean obj){
    cout<<"\nFirst Number = "<<obj.a<<"\nSecond Number = "<<obj.b;
    int sum =0;
    sum = obj.a + obj.b;
    cout<<"\nSum of two numbers: "<<sum;
}

int main(){
    mean D;
    D.getdata();
    greatest(D);
    return 0;
 }

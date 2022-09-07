#include<iostream>
using namespace std;

class one;
class two;

class one{
    int a;
  public:
    one() { cin>>a; }
    friend int cal(one a,two b);
};

class two{
    int b;
  public:
    two() { cin>>b; }
    friend int cal(one a,two b);
};

int cal(one x,two y){
    return (x.a>y.b) ? x.a : y.b;
}

int main(){
    cout<<"Enter value of a: "<<endl;
    one x;
    cout<<"Enter value of b: "<<endl;
    two y;
    cout << "The greater value is " << cal(x,y);
}

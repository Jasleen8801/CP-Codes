#include <iostream>
using namespace std;

class num_swap{
    int x, y;
  public:
    void getdata();
    void display();
    friend num_swap swapping(num_swap);
};

void num_swap::getdata(){
    cout<<"Enter the two numbers you want to swap: "<<endl;
    cin>>x>>y;
}

void num_swap::display(){
    cout<<"First number: "<<x<<endl;
    cout<<"Second number: "<<y<<endl;
    cout<<endl;
}

num_swap swapping(num_swap obj){
    num_swap temp;
    temp.x=obj.y;
    temp.y=obj.x;
    return temp;
}

int main()
{
    num_swap x1;
    x1.getdata();
    num_swap x2 = swapping(x1);
    cout<<"Values before swapping: "<<endl;
    x1.display();
    cout<<"Values after swapping: "<<endl;
    x2.display();
    return 0;
}


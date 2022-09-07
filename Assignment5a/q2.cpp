#include <iostream>
using namespace std;

class compare{
    float x, y;
  public:
    void getdata();
    friend float great(compare obj);
};

void compare::getdata(){
    cout<<"Enter the elements: "<<endl;
    cin>>x>>y;
}

float great(compare obj){
    if(obj.x > obj.y)
        return (obj.x);
    else
        return (obj.y);
}

int main()
{
    compare x;
    x.getdata();
    cout<<great(x)<<" is the greater number.";

    return 0;
}


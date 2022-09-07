#include <iostream>

using namespace std;

class circle{
    float rad;
  public:
    // void setData(float r){ rad = r; }
    circle() { rad=0; }
    circle(int x) { rad=x; }
    circle(circle&y){ rad = y.rad; }
    float calculateArea(float r);
};

inline float circle::calculateArea(float r){
    return (3.14*r*r);
}

int main()
{
    circle c;
    float r;
    // c.setData(r);
    cout<<"Area of circle c is: "<< c.calculateArea(r);
    
    cout<<endl;
    
    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;
    circle c1(r);
    cout<<"Area of circle c1 is: "<< c1.calculateArea(r);
    
    cout<<endl;
    
    circle c2(c1);
    cout<<"Area of circle c2 is: "<< c2.calculateArea(r);
    
    return 0;
}



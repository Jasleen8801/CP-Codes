#include <iostream>

using namespace std;

class circle{
    float rad;
  public:
    void setData(float r){ rad = r; }
    float calculateArea(float r);
};

inline float circle::calculateArea(float r){
    return (3.14*r*r);
}

int main()
{
    circle c;
    float r;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;
    c.setData(r);
    cout<<"Area is: "<< c.calculateArea(r);
    return 0;
}


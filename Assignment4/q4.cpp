 #include <iostream>
using namespace std;

class rectangle{
    private:
        float len, wid;
    public:
        void setlength(float l) { len = l; }
        void setwidth(float w) { wid = w; }
        float perimeter();
        float area();
        void show();
        int sameArea(rectangle);
};

float rectangle::perimeter(){
    float perimeter = 2*(len + wid);
    return (perimeter);
}

float rectangle::area(){
    float area=len*wid;
    return (area);
}

void rectangle::show(){
    cout<<"Length of Rectangle is "<<len<<endl;
    cout<<"Width of Rectangle is "<<wid<<endl;
}

int rectangle::sameArea(rectangle r){
    float area_1 = len* wid;
    float area_2 = r.len * r.wid;
    if(area_1 == area_2)
        return 1;
    else
        return 0;
}

int main() {
    rectangle r1, r2, r3;    
    r1.setlength(2);
    r1.setwidth(3);
    r1.show();
    cout<<"The perimeter of first rectangle is : "<<r1.perimeter()<<endl;
    cout<<"The area of first rectangle is : "<<r1.area()<<endl;
    
    r2.setlength(2);
    r2.setwidth(3);
    r2.show();
    cout<<"The perimeter of first rectangle is : "<<r2.perimeter()<<endl;
    cout<<"The area of first rectangle is : "<<r2.area()<<endl;
    
    if(r1.sameArea(r2))
        cout<<"Equal rectangles";
    else
        cout<<"Not Equal rectangles";
}



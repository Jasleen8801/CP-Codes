#include <iostream>
using namespace std;

class complex{
    float real, imag;
    
    public:
        void setdata(float r, float i)
        {
            real = r;
            imag = i;
        }
        
        void display(){
            cout<<real<<" +i "<<imag<<endl;
        }
            
        complex sum(complex c){
            complex n;
            n.real = real + c.real;
            n.imag = imag + c.imag;
            return n;
        }
};

int main() {
    complex c1, c2, c3;
    c1.setdata(3.2,8.9);
    c2.setdata(7.3,6.5);
    c3=c1.sum(c2);
    cout<<"Complex Number 1: "<<endl;
    c1.display();
    cout<<"Complex Number 2: "<<endl;
    c2.display();
    cout<<"Complex Number 3: "<<endl;
    c3.display();

    return 0;
}


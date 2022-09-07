#include <iostream>
using namespace std;

class Distance { 
    private: 
        int meter; 
    public: 
        Distance(): meter(0) { }
        Distance(int x) { meter = x; }
        // friend function 
        friend void addFive(Distance obj); 
}; 

void addFive(Distance obj){
    obj.meter += 5;
    cout<<"The new distance is "<<obj.meter;
}

int main()
{
    int d0;
    cout<<"Enter the distance: "<<endl;
    cin>>d0;
    Distance d(d0);
    addFive(d);
    return 0;
}


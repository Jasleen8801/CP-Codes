// question 6- escape sequence
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"Hello"<<"\n"<<"World"<<endl;
    cout<<"Hello"<<"\t"<<"World"<<endl;
    cout<<"Hello"<<"\b"<<"World"<<endl;
    cout<<setw(12); // used to set width of a string
    return 0;
}


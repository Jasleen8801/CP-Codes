// question 9
#include <iostream>
using namespace std;

int main()
{
    float fine=0;
    int days;
    cout<<"Enter number of days: ";
    cin>>days;
    if(days<=5){
        fine = 0.5 * days;
    }
    if(days >=6 && days<=10){
        fine = 1 * days;
    }
    if (days>10)
        fine = 5*days;
    if (days > 30)
        cout<<"Membership cancelled";
    return 0;
}


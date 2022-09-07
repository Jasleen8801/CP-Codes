// Input a from the user and display in the console
// Add two numbers

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter a number n: ";
    // if we don't use "using namespace std", we would need to type---> std::cout<<
    cin>>n;
    cout<<"The number you typed is "<<n<<endl;
    cout<<"Enter a number m: ";
    cin>>m;
    cout<<"The number you typed is "<<m<<endl;
    cout<<"The sum of two numbers is: "<<m+n<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string in uppercase: "<<endl;
    cin>>str;
    cout<<"The string in lowercase is: "<<endl;
    for(int i=0; i<str.length(); i++){
        str[i] = str[i] + 32;
        cout<<str[i];
    }

    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cout<<"String 1 is: "<<endl;
    cin>>s1;
    cout<<"String 2 (copied) is: "<<endl;
    for(int i=0; s1[i]!='\0'; i++){
        s2[i]=s1[i];
        cout<<s2[i];
    }

    return 0;
}


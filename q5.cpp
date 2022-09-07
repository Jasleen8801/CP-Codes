#include<iostream>
using namespace std;
#include<cstring>

struct cricket{
    char name[20];
    int age;
    int test;
    int avg_runs;
};

int main(){
    struct cricket data[20];
    int n;
    cout<<"Enter no of values you wish to enter: "<<endl;
    cin>>n;
    cout<<endl;
    
    for(int i=0;i<n;i++){
         cout<<"Enter name of the cricketer: "<<endl;
         cin>>data[i].name;
         cout<<"Enter age: "<<endl;
         cin>>data[i].age;
         cout<<"Enter no.of test matches played: "<<endl;
         cin>>data[i].test;
         cout<<"Enter average runs scored in test matches: "<<endl;
         cin>>data[i].avg_runs;
         cout<<endl;
    }
    
    cout<<"Unsorted order is "<<endl<<endl;
    
    for(int i=0;i<n;i++){
         cout<<"Name of the cricketer "<<(i+1)<<" is:  "<< data[i].name<<endl;
         cout<<"Age of cricketer: "<< data[i].age<<endl;
         cout<<"No. of test matches played: "<< data[i].test<<endl;
         cout<<"Average runs scored in test matches: "<< data[i].avg_runs<<endl;
    }
    
    struct cricket s1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
              if(data[j].avg_runs<data[i].avg_runs){
                s1=data[i];
                data[i]=data[j];
                data[j]=s1;
              }
        }
    }
    
    cout<<"Sorted order is "<<endl<<endl;
    for(int i=0;i<n;i++){
         cout<<"Name of the cricketer "<<(i+1)<<" is:  "<< data[i].name<<endl;
         cout<<"Age of cricketer: "<< data[i].age<<endl;
         cout<<"No. of test matches played: "<< data[i].test<<endl;
         cout<<"Average runs scored in test matches: "<< data[i].avg_runs<<endl;
    }

}

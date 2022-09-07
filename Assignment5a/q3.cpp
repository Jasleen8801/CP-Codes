#include <iostream>
using namespace std;

class stu_details{
    char name[30];
    int roll_no;
    int age;
    int marks;
  public:
    void get_details();
    friend void display(stu_details obj);
};

void stu_details::get_details(){
    cout<<"Enter the name: "<<endl;
    cin>>name;
    cout<<"Enter your Roll Number: "<<endl;
    cin>>roll_no;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;
}

void display(stu_details obj){
    cout<<"Details entered are: "<<endl;
    cout<<"Name: "<<obj.name<<", Roll Number: "<<obj.roll_no<<",Age: "<<obj.age<<",Marks: "<<obj.marks<<endl;
}

int main()
{
    stu_details x;
    x.get_details();
    display(x);

    return 0;
}


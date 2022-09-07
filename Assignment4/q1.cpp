#include <iostream>
using namespace std;

class stu_details
{
    private:
        char name[30];
        int rollno;
        int marks;
    public:
        void get_details(void);
        void put_details(void);
};

void stu_details::get_details(void){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll No.: ";
    cin>>rollno;
    cout<<"Enter marks: ";
    cin>>marks;
}

void stu_details::put_details(void){
    cout<<"Student Details: " <<endl;
    cout<<"Name: "<<name<<", Roll Number: "<<rollno<<",Marks: "<<marks<<endl;
}

int main()
{
    stu_details stud;
    
    stud.get_details();
    stud.put_details();

    return 0;
}



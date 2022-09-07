#include <iostream>

using namespace std;

class student{
    char name[20];
    int rollNo;
    int marks[6];
  public:
    void getData();
    float totalMarks();
};

void student::getData(){
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter roll no.: ";
    cin>>rollNo;
    for(int i=0; i<6; i++){
        cout<<"Enter marks of "<<i+1<<" Subject: ";
        cin>>marks[i];
    }
}

float student::totalMarks(){
    float sum=0;
    for(int i=0; i<6; i++){
        sum += marks[i];
    }
    return sum;
}

int main()
{
    student stu;
    stu.getData();
    cout<<"Total marks: "<<stu.totalMarks();

    return 0;
}


#include <iostream>

using namespace std;

class manager{
    char name[20];
    int age;
    int salary;
    char department[20];
  public:
    void getData();
    void showDetails();
};

void manager::getData(){
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter the Department: ";
    cin>>department;
}

void manager::showDetails(){
    cout<<endl;
    cout<<"Name of Employee: "<<name<<endl;
    cout<<"Age of employee: "<<age<<endl;
    cout<<"Salary of Employee: "<<salary<<endl;
    cout<<"Department of Employee: "<<department<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    manager man[n];
    for(int i=0; i<n; i++){
        cout<<"\nData of Employee "<<i+1<<endl;
        man[i].getData();
    }
    for(int i=0; i<n; i++)
        man[i].showDetails();
    return 0;
}


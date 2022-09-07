 #include <iostream>
using namespace std;

class bank{
    private:
        string name;
        long int acc_no;
        string acc_type;
        long int balance;
    public:
        bank(){};
        bank(string n, long int ano, string atype, int bal){
            name = n;
            acc_no = ano;
            acc_type = atype;
            balance = bal;
        }
        void set_data(){
            cout<<"Enter the name of account holder: "<<endl;
            cin>>name;
            cout<<"Enter the account number of candidate: "<<endl;
            cin>>acc_no;
            cout<<"Enter the balance: "<<endl;
            cin>>balance;
            cout<<"Enter the type of account: "<<endl;
            cin>>acc_type;
        }
        void deposit();
        void check();
        void display();
};

void bank::deposit(){
    long int amount;
    cout<<"How much money do you want to deposit: "<<endl;
    cin>>amount;
    balance = balance + amount;
}

void bank::check(){
    long int amt;
    cout<<"How much money do you want to withdraw: "<<endl;
    cin>>amt;
    if(balance>amt)
        balance = balance - amt;
    else
        cout<<"Unsufficient balance to withdraw money!"<<endl;
}

void bank::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<acc_no<<endl;
    cout<<"Account Type: "<<acc_type<<endl;
    cout<<"Total balance is ₹"<<balance<<endl;
}

int main() {
    bank customer;
    
    customer.set_data();
    customer.deposit();
    customer.check();
    customer.display();

    return 0;
}


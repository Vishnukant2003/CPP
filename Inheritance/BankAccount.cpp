#include <iostream>
using namespace std;
class BankAccount{
    int accno;
    string name;
    double balance,deposite,withdraw;
    public:
    void createAccount(){
        cout<<" Insert Name-> ";
        cin>>name;
        cout<<" select acc number-> ";
        cin>>accno;
        cout<<" add balance-> ";
        cin>>balance;
        cout<<endl;
    }
    public:
    void Deposite(){
        balance+=deposite;
    }
    void Withdraw(){
        if(balance<=0){
            cout<<" insuffient balance ";
        }else{
            cin>>withdraw;
        }
        cout<<" withdraw succes "<< balance<<endl;
    }
    void display(){
        cout<<accno<<name<<balance<<endl;
    }
    ~BankAccount(){
        cout<<" object is destoyed "<<endl;
    }

};

int main (){
    BankAccount bank;
    bank.Deposite();
    bank.Withdraw();
    bank.display();

}
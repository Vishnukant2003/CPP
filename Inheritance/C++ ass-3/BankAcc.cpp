#include <iostream>
using namespace std;
class BankAcc{
    public:
    int accNo;
    double balance;
    
    BankAcc(int accNo,double balance){
        this->accNo=accNo;
        this->balance=balance;
    }
    
};
class Transactionoperation{
    public:
    void deposit(BankAcc &bankacc, double amount){
        if(0<amount){
            bankacc.balance+=amount;
            cout<<" balance "<<bankacc.balance;
        }else{
            cout<<"amount should be correct";
        }
    }
    void withdraw(BankAcc &bankacc, double amount){
        if(bankacc.balance>=amount){
            bankacc.balance-=amount;
            cout<<" remaining balance"<<bankacc.balance;
        }else{
            cout<<" amount shold be less than balance / insufficient balance";
        }
    }
    void display(BankAcc &bankacc){
        cout<<"<-----Bank Acount Details------>"<<endl;
        cout<<" Account number: "<<bankacc.accNo<<endl;
        cout<<" Account Balance: "<<bankacc.balance<<endl;
    }

};

int main(){
    BankAcc acc(10012,1000.0);
    
    Transactionoperation trs;
    trs.display(acc);
    trs.deposit(acc,50000.00);
    trs.withdraw(acc,1000.00);
    trs.display(acc);
    
    return 0;
};

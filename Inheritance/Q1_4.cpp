#include <iostream>
using namespace std;
class BankAcc{
    public:
    int accNo,n;
    double balance,depositamount,withdrawamount;
    
    BankAcc(int accNo,double balance){
        this->accNo=accNo;
        this->balance=balance;
    }
    
        
    
    void display(){
        for(int i=1; i<4; i++){
            cout << "enter 1 for deposit "<<endl;
        cout << "enter 2 for withdraw "<<endl;
        cout << "enter 3 for check balance "<<endl;
        cout << "enter 4 for customer detail's "<<endl;
        cin  >> n;
        
        switch(n){
            case 1:
            cout<<"enter amount ";
            cin>>depositamount;
                 balance+=depositamount;
                 cout<<"Total balance"<<balance<<endl;
                 break;
            case 2:
                cout<<"enter amount:  ";
                cin>>withdrawamount;
                balance-=withdrawamount;
                cout<<" Remaining balance: "<< balance<<endl;
                break;
            case 3:
                cout<<"your balance is: "<<balance<<endl;
                break;
            case 4:
                cout<<" account number: "<<accNo<<" balance "<<balance;
                break;
            default:
               cout<<"invalid input"<<endl;
        
            }
        }
    }

};

int main(){
    BankAcc acc(10012,1000.0);
    acc.display();
    return 0;
}

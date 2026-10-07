#include <iostream>
using namespace std;
class Base {
    public:
    string name;
    int rollno;
    virtual void display(){
        cout<<name<<rollno<<endl;
    };
    Base(string n, int ro){
        name=n;
        rollno=ro;
    }
    
};
class Child:public Base{
    public:
    Child(string n,int ro) : Base(n,ro){}
    void display() override{
        cout<<name<<rollno<<endl;
    }
};
int main(){
    Base b("vishnu",101);
    b.display();
    Child c("Vishnu",102);
    c.display();
}

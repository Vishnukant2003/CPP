#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Base{
    public:
        void method1(){
            cout<<"base class method";
        }
};
class Child : public Base{
    public :
    void childmethod(){
        cout<< "child method";
    }
};
int main(int argc, char const *argv[])
{
    // Base base;
    // base.method1();
    Child child;
    child.method1();
    cout<<endl;
    child.childmethod();
    return 0;
}

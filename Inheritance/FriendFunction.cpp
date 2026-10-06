#include <iostream>
using namespace std;
class A{
    public:
    int value =10;
    friend void display(A a); //syntax of frind function

    friend class FriendClass;  //syntax of class function
};

void display(A a){
    cout<<" frind function "<< a.value<<endl;
}

class FriendClass{
    public:
    void show(A a){
        cout<<" frind class "<<a.value<<endl;
    }
};

int main(){
    A a;
    FriendClass f;

    display(a);
    f.show(a);

    return 0;

}
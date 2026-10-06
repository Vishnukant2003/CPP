#include <iostream>
using namespace std;
static int a =10;
int main(){
    int  a =5;
    cout<<"scope variable of main method--> "<<a<<endl;
    cout<<" static variable / global variable access using scope resolution-->  "<<::a<<endl;
} 
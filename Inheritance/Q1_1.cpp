#include <stdio.h>
#include <iostream>
using namespace std;

class Car{
    public:

string name;
float speed;
Car(string name , float speed){
    this->name=name;
    this->speed=speed;
}
// void input(){
//     cout<<" name: ";
//     cin>>name;
//     cout<<" speed: "<<endl;
//     cin>>speed;
// }

void disp(){
    cout<<"name-> "<<name<<" speed-> "<< speed;

}
};
int main(){
    Car c("mercedec",220.0);
    // c.input();
    c.disp();
}
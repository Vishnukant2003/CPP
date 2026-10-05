#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle{
    public:
    int l , w;
    int area,perimeter;
    void input(){
        cout<<"enter the value of length and width "<<endl;
        cin>>l>>w;
    }
    void display(){
        area=l*w;
        cout<<"area of rectangle"<<area<<endl;
        perimeter = 2*(l*w);
        cout<<"perimeter:-> "<<perimeter<<endl;
    }
};
int main(){
    Rectangle rec;
    rec.input();
    rec.display();
}

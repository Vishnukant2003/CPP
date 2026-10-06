#include <iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    Complex(int real , int imag){
        this->real=real;
        this->imag=imag;
    }
    Complex operator+(const Complex& obj){
        return Complex(this->real+ obj.real,this->imag+obj.imag);

    } 
    void display(){
        cout<<real<<" "<<imag<<endl;
    }
};

int main(){
    Complex c1(10,3);
    Complex c2(10,10);
    Complex c3 = c1+c2;
    c3.display();
    // cout<<c3.real<<c3.imag<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age ;
    Student(string n,int a){
        name=n;
        age=a;
    }
    Student(const Student &other){
        name=other.name;
        age=other.age;
    }
    void display(){
        cout<<" name "<<name<<" age "<<age<<endl;
    }
};

int main(){
    Student std("vishnu",23);
    std.display();

    Student std1("vishnu2",20);
    std1.display();

    Student std2 = std;
    std2.display();
}
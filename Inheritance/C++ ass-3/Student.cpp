#include <iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    int marks;
    public:
    Student(int rollno, string name, int marks){
        this->rollno=rollno;
        this->name=name;
        this->marks=marks;
        cout<<" parameterized constructor "<<endl;
    }
    public:
    Student(const Student &std){
        rollno = std.rollno;
        name = std.name;
        marks = std.marks;
        cout<<" copy constructor called "<<endl;
    }
    public:
    void display(){
        cout<<" roll no -> "<<rollno<<" name-> "<<name<<" marks-> "<<marks<<endl;
    }
    ~Student(){
        cout<<endl;
        cout<<" obj is destroyed: ";
    }
};
int main(){
    Student std(101,"vishnu",98);
    Student std2 =std;
    std.display();
    std2.display();
}
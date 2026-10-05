#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roolNo;
    int marks;
    void input(){
        cout<<"enter the student name: ";
        cin>>name;
        cout<<"enter the student rollNo: ";
        cin>>roolNo;
        cout<<"enter the student Marks: ";
        cin>>marks;
    }
    void display(){
        cout<<"student detials -< name : "<<name<<" roll no: "<<roolNo<<" marks "<<marks<<endl;
    }


};

int main(){
    Student s1;
    s1.input();
    s1.display();
}
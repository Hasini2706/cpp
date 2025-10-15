//single inheritance
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name,int age)      //parent constructor
    {
        cout << "Parent called\n";
        this->name=name;
        this->age=age;
    }
};
class student: public person{
    public:
    int rollno;
    student(string name,int age,int rollno):person(name,age)    //child constructor
    {
        cout << "Child called\n";
        this->rollno=rollno;
    }
};
int main(){
    person p1("Alice",20);      //object for child  it will call the parent constructor
    student s1("Bob",22,302);
    cout << s1.name << " " << s1.age << " " << s1.rollno  << " " << endl;   
    cout << p1.name << " " << p1.age << endl;
    return 0;
}
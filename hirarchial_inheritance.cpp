//hierarchical inheritance
#include<bits/stdc++.h>
using namespace std;
class person{    //base class
    public:
    string name;
    int age;
    void introduce()
    {
        cout << "Hello, I am " << name << ",age: " << age << endl;
    }
};
//derived class
class student:public person{
    public:
    int rollno;
    void study()
    {
        cout << name << " is studying roll no:" << rollno << endl;
    }
};
//derived class 2
class teacher:public person{
    public:
    string subject;
    void teach()
    {
        cout << name << " is teaching " << subject << "." << endl;
    }
};
int main(){
    student s;
    s.name ="Bheemeswari";
    s.age = 19;
    s.rollno = 305;
    s.introduce();
    s.study();

    teacher t;
    t.name = "Mr. Smith";
    t.age = 40;
    t.subject = "Mathematics";
    t.introduce();
    t.teach();

    return 0;
}